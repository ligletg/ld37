package;

import flixel.FlxSprite;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;
import flixel.system.FlxSound;
import flixel.FlxG;

class Window extends FlxSprite
{
  public function new(?X:Float=0, ?Y:Float=0)
  {
    super(X, Y);
    loadGraphic(AssetPaths.window__png, false, 120, 100);
    setSize(120, 100);
  }
}
