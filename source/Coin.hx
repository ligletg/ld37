package;

import flixel.FlxSprite;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;
import flixel.system.FlxSound;
import flixel.FlxG;

class Coin extends FlxSprite
{
  private var _sndCoin:FlxSound;

  public function new(?X:Float=0, ?Y:Float=0)
  {
    super(X, Y);
    loadGraphic(AssetPaths.coin__png, false, 8, 8);
    // _sndCoin = FlxG.sound.load(AssetPaths.coin__wav);
  }

  override public function kill():Void
  {
    // _sndCoin.play(true);
    alive = false;
    FlxTween.tween(this, {alpha: 0, y: y - 16}, .33, { ease: FlxEase.circOut, onComplete: finishKill});
  }

  private function finishKill(_):Void
  {
    exists = false;
  }
}
