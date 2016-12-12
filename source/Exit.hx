package;

import flixel.FlxSprite;
import flixel.util.FlxColor;

class Exit extends FlxSprite
{
  public function new(?X:Float=0, ?Y:Float=0)
  {
    super(X, Y);
    makeGraphic(4, 4, FlxColor.GREEN);
  }
}
