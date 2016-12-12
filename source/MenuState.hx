package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import flixel.util.FlxColor;

class MenuState extends FlxState
{
  private var _btnPlay:FlxButton;
	override public function create():Void
	{
    bgColor = FlxColor.BLACK;
    // add(new FlxText(0, 0, 0, "Play !"));
    _btnPlay = new FlxButton(0, 0, "Play !", clickPLay);
    _btnPlay.screenCenter();
    add(_btnPlay);
    super.create();
	}

  private function clickPLay():Void
  {
    FlxG.camera.fade(FlxColor.BLACK, .33, false, function() {
      FlxG.switchState(new PlayState());
    });
  }

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
	}
}
