package;

import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.FlxObject;

class Pickup extends FlxObject
{
  public var _x:Float = 0;
  public var _y:Float = 0;
  public var _type:Int = 0;

  public function new(?X:Float=0, ?Y:Float=0, ?type:Int=0)
  {
    super();
    _x = X;
    _y = Y;
    _type = type;
  //  loadGraphic(AssetPaths.coin__png, false, 8, 8);
  }

  public function getPickup():FlxSprite
  {
    if (_type == 0) //coin
    {
      return cast (new Coin(_x, _y), FlxSprite);
    }
    else if (_type == 1) //exit
    {
      return cast(new Exit(_x, _y), FlxSprite);
    }
    else
    {
      return new FlxSprite().makeGraphic(4, 4, FlxColor.RED);
    }
  }

  public function getType():Int
  {
    return _type;
  }
}
