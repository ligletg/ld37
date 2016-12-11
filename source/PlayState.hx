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
  private var _grpEnemies:FlxTypedGroup<Enemy>;
  private var _hud:HUD;
  private var _money:Int = 0;
  private var _health:Int = 3;
  private var _sndCoin:FlxSound;

	override public function create():Void
	{
    FlxG.watch.addMouse();
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

    _player = new PlayerGroup(this);
    add(_player);
    trace(_player.getPlayer());
    _map.loadEntities(placeEntities, "entities");
    trace(_player.getPlayer());


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
      _player.getPlayer().setPosition(x, y);
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
    FlxG.collide(_player.getPlayer(), _mWalls);
    // var projectile = _player.getWeapon().getProjectile();
    // if (projectile != null && _mWalls.overlapsWithCallback(projectile))
    // {
    //   _player.getWeapon().addImpact();
    // }
    FlxG.overlap(_player.getPlayer(), _grpCoins, playerTouchCoin);
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
