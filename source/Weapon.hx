package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.group.FlxSpriteGroup;
import flixel.group.FlxGroup;
import flixel.util.FlxColor;
import flixel.math.FlxPoint;
import flixel.FlxObject;

import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;

class Weapon extends FlxSpriteGroup
{
  public var speed:Float = 200;
  private var _sprWeapon:FlxSprite;
  private var _projectile:Projectile;
  public var isShooting:Bool = false;
  public var playState:PlayState;
  public function new(playstate:PlayState)
  {
    super();
    playState = playstate;
    _sprWeapon = new FlxSprite().makeGraphic(4, 4, FlxColor.TRANSPARENT);
    // _projectile = new FlxSprite().makeGraphic(4, 4, FlxColor.BLUE);
    add(_sprWeapon);
    FlxG.watch.add(_sprWeapon, "x");
    FlxG.watch.add(_sprWeapon, "y");
    // drag.x = drag.y = 1600;
    // setSize(8, 14);
    // offset.set(4, 2);
    // acceleration.y = 600;
  }

  public function getWeapon():FlxSprite
  {
    return _sprWeapon;
  }

  public function getProjectile():FlxSprite
  {
    return _projectile;
  }

  public function addImpact(tween:FlxTween):Void
  {
    isShooting = false;
    var impact = new Impact();
    // add(impact);
    playState.add(impact);
    impact.x = _projectile.x;
    impact.y = _projectile.y;
    // impact.animation.play("explosion");
    trace("impact " + _projectile.x + " / " + _projectile.y);
    FlxG.watch.add(impact, "x");
    FlxG.watch.add(impact, "y");
    _projectile.kill();
    _projectile.destroy();
    _projectile = null;
  }

  public function shoot(X:Float, Y:Float):Void
  {
    if (isShooting == true)
    {
      return;
    }
    isShooting = true;

    if (_projectile != null)
    {
      _projectile.alive = false;
      _projectile.exists = false;
      // _projectile.kill();
      // _projectile.destroy();
      _projectile = null;
    }

    // _projectile = new FlxSprite().makeGraphic(4, 4, FlxColor.BLUE);
    _projectile = new Projectile();

    // _projectile.x = _sprWeapon.x;
    // _projectile.y = _sprWeapon.y;
    // trace("new projectile origin", _projectile.x, _projectile.y);
    add(_projectile);
    _projectile.fire(X, Y);

    // FlxTween.linearMotion(
    //   _projectile, {x: cast (x, Float), y: cast (y, Float)}, 3.0, {
    //   ease: FlxEase.cubeIn
    // });

    // _projectile.rotate(FlxPoint.weak(0, 0),
// FlxAngle.angleBetweenPoint(_projectile, FlxPoint.get(X, Y), true));
    // trace(FlxAngle.angleBetweenPoint(_projectile, FlxPoint.get(X, Y), true));

    // trace("destination = " + X + " / " + Y);
    //
    FlxTween.linearMotion(
      _projectile,
      cast(_sprWeapon.x, Float),
      cast(_sprWeapon.y, Float),
      X,
      Y,
      400.0,
      false,
      {
        onComplete: addImpact
      }
    );
    // _projectile.y = y;
    // _projectile.x = _sprWeapon.x + 4;
    // _projectile.y = _sprWeapon.y;
    // add(_projectile);
  }

  public function move(mA:Float, facing:Int):Void
  {
    velocity.set(speed, 0);
    velocity.rotate(FlxPoint.weak(0, 0), mA);
    if ((velocity.x != 0 || velocity.y != 0) && touching == FlxObject.NONE)
    {
    //   switch (facing)
    //   {
    //     case FlxObject.LEFT, FlxObject.RIGHT:
    //       animation.play("lr");
    //     case FlxObject.UP:
    //       animation.play("u");
    //     case FlxObject.DOWN:
    //       animation.play("d");
    //   }
    }
  }
}
