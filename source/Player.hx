package;

import flixel.FlxSprite;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.math.FlxPoint;
import flixel.FlxObject;

class Player extends FlxSprite
{
  public var speed:Float = 200;
  public var hasWeapon:Bool = true;
  // private var _weapon:Rocket;
  public function new(?X:Float=0, ?Y:Float=0)
  {
    super(X, Y);
    // makeGraphic(16, 16, FlxColor.BLUE);
    // loadGraphic(AssetPaths.player__png, true, 16, 16);
    loadGraphic(AssetPaths.fly__png, true, 16, 16);
    // setFacingFlip(FlxObject.LEFT, false, false);
    // setFacingFlip(FlxObject.RIGHT, true, false);
    // animation.add("lr", [3, 4, 3, 5], 6, false);
    // animation.add("u", [6, 7, 6, 8], 6, false);
    // animation.add("d", [0, 1, 0, 2], 6, false);
    animation.add("fly", [0, 1], 6, true);
    animation.play("fly");
    drag.x = drag.y = 1600;
    setSize(8, 14);
    offset.set(4, 2);
    // acceleration.y = 600;
    // _weapon = new Rocket();
  }

  public function shoot():Void
  {
    // rocket.fire();
  }

  public function move(mA:Float, facing:Int):Void
  {
    velocity.set(speed, 0);
    velocity.rotate(FlxPoint.weak(0, 0), mA);
    // if ((velocity.x != 0 || velocity.y != 0) && touching == FlxObject.NONE)
    // {
    //   switch (facing)
    //   {
    //     case FlxObject.LEFT, FlxObject.RIGHT:
    //       animation.play("lr");
    //     case FlxObject.UP:
    //       animation.play("u");
    //     case FlxObject.DOWN:
    //       animation.play("d");
    //   }
    // }
  }

  override public function update(elapsed:Float):Void
  {
    // movement();
    super.update(elapsed);
  }
}
