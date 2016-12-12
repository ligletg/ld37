package;

import flixel.FlxSprite;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;
import flixel.system.FlxSound;
import flixel.FlxG;

class Exit extends FlxSprite
{
  public function new(?X:Float=0, ?Y:Float=0)
  {
    super(X, Y);
    loadGraphic(AssetPaths.exit__png, true, 32, 16);
    animation.add("blink", [0, 1], 6, true);
    animation.play("blink");
    setSize(32, 16);
  }
}
