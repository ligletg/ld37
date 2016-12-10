package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import flixel.addons.editors.tiled.TiledMap;
import flixel.addons.editors.tiled.TiledTileLayer;
import flixel.addons.editors.tiled.TiledObjectLayer;
import flixel.tile.FlxTilemap;
import flixel.tile.FlxBaseTilemap.FlxTilemapAutoTiling;
import flixel.group.FlxGroup;
import flixel.util.FlxColor;
import flixel.system.FlxSound;

class PlayState extends FlxState
{
  private var _player:Player;
  private var _map:TiledMap;
  private var _mWalls:FlxTilemap;
  private var _grpCoins:FlxTypedGroup<Coin>;
  private var _grpEnemies:FlxTypedGroup<Enemy>;
  private var _hud:HUD;
  private var _money:Int = 0;
  private var _health:Int = 3;
  private var _sndCoin:FlxSound;

	override public function create():Void
	{
    _map = new TiledMap(AssetPaths.map2__tmx);
    _mWalls = new FlxTilemap();
    _mWalls.loadMapFromArray(cast(_map.getLayer("walls"), TiledTileLayer).tileArray, _map.width, _map.height, AssetPaths.tiles__png, _map.tileWidth, _map.tileHeight, FlxTilemapAutoTiling.OFF, 1, 2, 3);
    _mWalls.follow();
    _mWalls.setTileProperties(2, FlxObject.NONE);
    _mWalls.setTileProperties(3, FlxObject.ANY);
    add(_mWalls);
    _grpCoins = new FlxTypedGroup<Coin>();
    add(_grpCoins);
    _grpEnemies = new FlxTypedGroup<Enemy>();
    add(_grpEnemies);
    _player = new Player();
    var tmpMap:TiledObjectLayer = cast _map.getLayer("entities");
    for (e in tmpMap.objects)
    {
      placeEntities(e.name, e.type, e.xmlData.x);
    }
    add(_player);
    FlxG.camera.follow(_player, TOPDOWN, 1);
    _hud = new HUD();
    add(_hud);

    _sndCoin = FlxG.sound.load(AssetPaths.coin__wav);
		super.create();
	}

  private function placeEntities(entityName:String, entityType:String, entityData:Xml):Void
  {
    var x:Int = Std.parseInt(entityData.get("x"));
    var y:Int = Std.parseInt(entityData.get("y"));
    if (entityType == "player")
    {
      _player.x = x;
      _player.y = y;
    }
    else if (entityType == "coin")
    {
      _grpCoins.add(new Coin(x + 4, y + 4));
    }
    else if (entityType == "enemy")
    {
      _grpEnemies.add(new Enemy(x + 4, y, entityName));
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
