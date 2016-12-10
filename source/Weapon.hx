package;

import flixel.FlxSprite;
import flixel.group.FlxSpriteGroup;
import flixel.util.FlxColor;

class Weapon extends FlxSpriteGroup
{
  private var _sprWeapon:FlxSprite;
  private var _sprProjectile:FlxSprite;
  public function new()
  {
    super();
    _sprWeapon = new FlxSprite().makeGraphic(4, 4, FlxColor.RED);
    _sprProjectile = new FlxSprite().makeGraphic(4, 4, FlxColor.BLUE);
    add(_sprWeapon);
  }

  public function shoot():Void
  {
    _sprProjectile.x = _sprWeapon.x + 4;
    _sprProjectile.y = _sprWeapon.y;
    add(_sprProjectile);
  }
}
