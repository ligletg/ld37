package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import flixel.group.FlxGroup;
import flixel.util.FlxColor;
import flixel.system.FlxSound;

import flixel.tile.FlxTilemap;
import flixel.addons.editors.tiled.TiledMap;
import flixel.addons.editors.ogmo.FlxOgmoLoader;
import flixel.addons.editors.tiled.TiledObjectLayer;

class PlayState extends FlxState
{
  private var _player:Player;
  private var _map:FlxOgmoLoader;
  private var _mWalls:FlxTilemap;
  private var _grpCoins:FlxTypedGroup<Coin>;
  private var _grpEnemies:FlxTypedGroup<Enemy>;
  private var _hud:HUD;
  private var _money:Int = 0;
  private var _health:Int = 3;
  private var _sndCoin:FlxSound;

	override public function create():Void
	{
    _map = new FlxOgmoLoader(AssetPaths.room_001__oel);
    _mWalls = _map.loadTilemap(AssetPaths.tiles__png, 16, 16, "walls");
    _mWalls.follow();
    _mWalls.setTileProperties(1, FlxObject.NONE);
    _mWalls.setTileProperties(2, FlxObject.ANY);
    add(_mWalls);

    _grpCoins = new FlxTypedGroup<Coin>();
    add(_grpCoins);

    _grpEnemies = new FlxTypedGroup<Enemy>();
    add(_grpEnemies);

    _player = new Player();
    _map.loadEntities(placeEntities, "entities");
    add(_player);

    FlxG.camera.follow(_player, TOPDOWN, 1);

    _hud = new HUD();
    add(_hud);

    _sndCoin = FlxG.sound.load(AssetPaths.coin__wav);

    super.create();
	}

  private function placeEntities(entityName:String, entityData:Xml):Void
  {
    var x:Int = Std.parseInt(entityData.get("x"));
    var y:Int = Std.parseInt(entityData.get("y"));
    if (entityName == "player")
    {
      _player.x = x;
      _player.y = y;
    }
    else if (entityName == "coin")
    {
      _grpCoins.add(new Coin(x + 4, y + 4));
    }
    else if (entityName == "enemy")
    {
      _grpEnemies.add(new Enemy(x + 4, y, Std.parseInt(entityData.get("etype"))));
    }
  }

  private function playerTouchCoin(P:Player, C:Coin):Void
  {
    if (P.alive && P.exists && C.alive && C.exists)
    {
      _sndCoin.play(true);
      _money++;
      _hud.updateHUD(_health, _money);
      C.kill();
    }
  }

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
    FlxG.collide(_player, _mWalls);
    FlxG.overlap(_player, _grpCoins, playerTouchCoin);
    FlxG.collide(_grpEnemies, _mWalls);
    _grpEnemies.forEachAlive(checkEnemyVision);
    if (FlxG.keys.anyPressed([ESCAPE]))
    {
      FlxG.camera.fade(FlxColor.BLACK, .33, false, function() {
        FlxG.switchState(new MenuState());
      });
    }
    if (FlxG.mouse.pressed)
    {
      _player.shoot();
    }
	}

  private function checkEnemyVision(e:Enemy):Void
  {
    if (_mWalls.ray(e.getMidpoint(), _player.getMidpoint()))
    {
      e.seesPlayer = true;
      e.playerPos.copyFrom(_player.getMidpoint());
    }
    else
      e.seesPlayer = false;
  }
}
