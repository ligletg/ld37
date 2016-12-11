package;

import flixel.FlxSprite;
import flixel.util.FlxColor;

class Impact extends FlxSprite
{
  public function new(?X:Float=0, ?Y:Float=0)
  {
    super(X, Y);
    // loadGraphic(AssetPaths.explosion__png, true, 16, 16);
    makeGraphic(4, 4, FlxColor.YELLOW);
  }
}
