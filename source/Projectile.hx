package;

import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.math.FlxAngle;
import flixel.math.FlxPoint;

class Projectile extends FlxSprite
{
  // public var speed:Float = 400;
  // public var bakedRotationAngle:Float = 90;
  public function new(?X:Float, ?Y:Float)
  {
    super(X, Y);

    trace("created projectile at", X, Y);
    loadGraphic(AssetPaths.rocket__png, false, 16, 16);
    // loadRotatedGraphic(AssetPaths.rocket__png, 90,  false, 16, 16);
  }

  public function fire(X:Float, Y:Float):Void
  {
    var mA:Float = 0;


    mA = FlxAngle.angleBetweenPoint(this, FlxPoint.get(X, Y), true);

    // velocity.set(speed, 0);
    // velocity.rotate(FlxPoint.weak(0, 0), mA);
    angle = mA + 90;
  }
}
