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
  private var _sprProjectile:FlxSprite;
  public var isShooting:Bool = false;
  public var playState:PlayState;
  public function new(playstate:PlayState)
  {
    super();
    playState = playstate;
    _sprWeapon = new FlxSprite().makeGraphic(4, 4, FlxColor.RED);
    // _sprProjectile = new FlxSprite().makeGraphic(4, 4, FlxColor.BLUE);
    add(_sprWeapon);
    FlxG.watch.add(_sprWeapon, "x");
    FlxG.watch.add(_sprWeapon, "y");
    FlxG.watch.add(_sprProjectile, "x");
    FlxG.watch.add(_sprProjectile, "y");
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
    return _sprProjectile;
  }

  public function addImpact(tween:FlxTween):Void
  {
    isShooting = false;
    var impact = new Impact();
    // add(impact);
    playState.add(impact);
    impact.x = _sprProjectile.x;
    impact.y = _sprProjectile.y;
    trace("impact " + _sprProjectile.x + " / " + _sprProjectile.y);
    FlxG.watch.add(impact, "x");
    FlxG.watch.add(impact, "y");
    _sprProjectile.kill();
    _sprProjectile.destroy();
    _sprProjectile = null;
  }

  public function shoot(X:Float, Y:Float):Void
  {
    if (isShooting == true)
    {
      return;
    }
    isShooting = true;

    if (_sprProjectile != null)
    {
      _sprProjectile.kill();
      _sprProjectile.destroy();
      _sprProjectile = null;
    }

    _sprProjectile = new FlxSprite().makeGraphic(4, 4, FlxColor.BLUE);
    add(_sprProjectile);
    _sprProjectile.x = _sprWeapon.x;
    _sprProjectile.y = _sprWeapon.y;

    // FlxTween.linearMotion(
    //   _sprProjectile, {x: cast (x, Float), y: cast (y, Float)}, 3.0, {
    //   ease: FlxEase.cubeIn
    // });

    trace("destination = " + X + " / " + Y);

    FlxTween.linearMotion(
      _sprProjectile,
      cast(_sprProjectile.x, Float),
      cast(_sprProjectile.y, Float),
      X,
      Y,
      800.0,
      false,
      {
        onComplete: addImpact
      }
    );
    // _sprProjectile.y = y;
    // _sprProjectile.x = _sprWeapon.x + 4;
    // _sprProjectile.y = _sprWeapon.y;
    // add(_sprProjectile);
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
