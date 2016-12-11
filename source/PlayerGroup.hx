package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.math.FlxPoint;
import flixel.group.FlxSpriteGroup;
import flixel.util.FlxColor;

class PlayerGroup extends FlxSpriteGroup
{
  private var _player:Player;
  private var _playerWeapon:Weapon;
  public var playState:PlayState;

  public var speed:Float = 200;
  // public var acceleration:FlxPoint = new FlxPoint(0, 600);
  // public var drag:FlxPoint = new FlxPoint(1600);

  public function new(playstate:PlayState)
  {
    super();


    playState = playstate;
    _player = new Player();
    FlxG.watch.add(_player, "x");
    FlxG.watch.add(_player, "y");
    add(_player);

    _playerWeapon = new Weapon(playstate);
    FlxG.watch.add(_playerWeapon, "x");
    FlxG.watch.add(_playerWeapon, "y");
    add(_playerWeapon);
  }

  private function movement():Void
  {
    var _up: Bool = false;
    var _down: Bool = false;
    var _left: Bool = false;
    var _right: Bool = false;
    var _facing: Int = 0;

    _up = FlxG.keys.anyPressed([UP, W]);
    _down = FlxG.keys.anyPressed([DOWN, S]);
    _left = FlxG.keys.anyPressed([LEFT, A]);
    _right = FlxG.keys.anyPressed([RIGHT, D]);

    if (_up || _down || _left || _right)
    {
      var mA:Float = 0;
      if (_up)
      {
        mA = -90;
        if (_left)
          mA -=45;
        else if (_right)
          mA += 45;
        _facing = FlxObject.UP;
      }
      else if (_down)
      {
        mA = 90;
        if (_left)
          mA += 45;
        else if (_right)
          mA -= 45;
        _facing = FlxObject.DOWN;
      }
      else if (_left)
      {
        mA = 180;
        mA -= 30;
        _facing = FlxObject.LEFT;
      }
      else if (_right)
      {
        mA = 0;
        mA += 30;
        _facing = FlxObject.RIGHT;
      }

      _player.move(mA, _facing);
      // _playerWeapon.move(mA, _facing);
    }
  }

  private function updatePlayer():Void
  {
    // if (_player.hasWeapon)
    // {
    //   if (!_playerWeapon.exists)
    //   {
    //     _playerWeapon = new Weapon();
    //     add(_playerWeapon);
    //   }
    //   _playerWeapon.getWeapon().x = _player.getMidpoint().x;
    //   _playerWeapon.getWeapon().y = _player.getMidpoint().y;
    // }
  }

  public function shoot(X:Float, Y:Float):Void
  {
    _playerWeapon.shoot(X, Y);
  }

  public function getPlayer():Player
  {
    return _player;
  }

  public function getWeapon():Weapon
  {
    return _playerWeapon;
  }

  override public function update(elapsed:Float):Void
  {
    // updatePlayer();
    movement();
    _playerWeapon.x = _player.x;
    _playerWeapon.y = _player.y;
    // x = _player.x;
    super.update(elapsed);
  }
}
