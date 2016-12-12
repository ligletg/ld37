package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import flixel.group.FlxGroup;
import flixel.group.FlxSpriteGroup;
import flixel.util.FlxColor;
import flixel.math.FlxPoint;

import flixel.tile.FlxTilemap;
import flixel.addons.editors.tiled.TiledMap;
import flixel.addons.editors.ogmo.FlxOgmoLoader;
import flixel.addons.editors.tiled.TiledObjectLayer;

class PlayState extends FlxState
{
  private var _player:PlayerGroup;
  private var _map:FlxOgmoLoader;
  private var _mWalls:FlxTilemap;
  private var _grpCoins:FlxTypedGroup<Coin>;
  // private var _pickupGroup:FlxSpriteGroup;
  private var _exit:Exit;
  private var _grpEnemies:FlxTypedGroup<Enemy>;
  private var _hud:HUD;
  private var _money:Int = 0;
  private var _health:Int = 3;

	override public function create():Void
	{
    FlxG.watch.addMouse();
    generateMap();
    generateItems();
    generateEntities();
    generateHUD();

    FlxG.camera.follow(_player.getPlayer(), TOPDOWN, 1);
    super.create();
	}

  private function generateMap():Void
  {
    _map = new FlxOgmoLoader(AssetPaths.room_003__oel);
    _mWalls = _map.loadTilemap(AssetPaths.textures__png, 16, 16, "walls");
    _mWalls.follow();
    _mWalls.setTileProperties(6, FlxObject.NONE);
    _mWalls.setTileProperties(2, FlxObject.ANY);
    add(_mWalls);
  }

  private function generateItems():Void
  {
    // _pickupGroup = new FlxSpriteGroup();
    // add(_pickupGroup);
    _grpCoins = new FlxTypedGroup<Coin>();
    add(_grpCoins);
  }

  private function generateEntities():Void
  {
    _grpEnemies = new FlxTypedGroup<Enemy>();
    add(_grpEnemies);

    _player = new PlayerGroup(this);
    add(_player);

    trace(_player.getPlayer());
    _map.loadEntities(placeEntities, "entities");
    trace(_player.getPlayer());
  }

  private function placeEntities(entityName:String, entityData:Xml):Void
  {
    var x:Int = Std.parseInt(entityData.get("x"));
    var y:Int = Std.parseInt(entityData.get("y"));
    var type = Std.parseInt(entityData.get("type"));

    if (entityName == "player")
    {
      _player.getPlayer().setPosition(x, y);
    }
    else if (entityName == "pickup")
    {
      if (type == 1)
      {
        _exit = new Exit(x + 4, y + 4);
        add(_exit);
      }
      else if (type == 0)
      {
        _grpCoins.add(new Coin(x + 4, y + 4));
      }
    }
    else if (entityName == "enemy")
    {
      _grpEnemies.add(new Enemy(x + 4, y, Std.parseInt(entityData.get("type"))));
    }
  }

  private function generateHUD():Void
  {
    _hud = new HUD();
    add(_hud);
  }

  private function playerTouchCoin(P:Player, C:Coin):Void
  {
    if (P.alive && P.exists && C.alive && C.exists)
    {
      _money++;
      _hud.updateHUD(_health, _money);
      C.kill();
    }
  }

  private function playerExit(P:Player, E:Exit):Void
  {
    FlxG.camera.fade(FlxColor.BLACK, .33, false, function() {
      FlxG.switchState(new MenuState());
    });
  }

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
    FlxG.collide(_player.getPlayer(), _mWalls);
    FlxG.overlap(_player.getPlayer(), _grpCoins, playerTouchCoin);
    FlxG.overlap(_player.getPlayer(), _exit, playerExit);
    FlxG.collide(_grpEnemies, _mWalls);
    _grpEnemies.forEachAlive(checkEnemyVision);
    if (FlxG.keys.anyPressed([ESCAPE]))
    {
      FlxG.camera.fade(FlxColor.BLACK, .33, false, function() {
        FlxG.switchState(new MenuState());
      });
    }
    if (FlxG.mouse.justPressed)
    {
      playerShoot();
    }
	}

  private function playerShoot():Void
  {
    var weapon:Weapon = _player.getWeapon();
    var impactLocation:FlxPoint = new FlxPoint();
    trace("playerShoot ", weapon.getPosition(), FlxG.mouse.getPosition());
    if (!_mWalls.ray(weapon.getPosition(), FlxG.mouse.getPosition(), impactLocation, 100)) {
      trace("ray " + impactLocation);
      if (impactLocation != null)
      {
        _player.shoot(impactLocation.x, impactLocation.y);
      }
    }
    else
    {
      _player.shoot(FlxG.mouse.getPosition().x, FlxG.mouse.getPosition().y);
    }
  }

  private function checkEnemyVision(e:Enemy):Void
  {
    if (_mWalls.ray(e.getMidpoint(), _player.getPlayer().getMidpoint()))
    {
      e.seesPlayer = true;
      e.playerPos.copyFrom(_player.getPlayer().getMidpoint());
    }
    else
      e.seesPlayer = false;
  }
}
