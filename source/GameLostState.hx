package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import flixel.util.FlxColor;
import flixel.util.FlxAxes;

class GameLostState extends FlxState
{
	override public function create():Void
	{
    bgColor = FlxColor.RED;
    var text:FlxText = new FlxText(0, 0, 0, "Game over !", 30);
    var playAgainBtn = new FlxButton(0, 0, "Play again !", clickPLay);
    var returnMenuBtn = new FlxButton(0, 0, "Return to menu", clickMenu);

    text.borderColor = FlxColor.RED;
    text.screenCenter();

    playAgainBtn.screenCenter(FlxAxes.X);
    playAgainBtn.y = text.y + 100;

    returnMenuBtn.screenCenter(FlxAxes.X);
    returnMenuBtn.y = playAgainBtn.y + 100;


    add(text);
    add(playAgainBtn);
    add(returnMenuBtn);
    super.create();
	}

  private function clickPLay():Void
  {
    FlxG.camera.fade(FlxColor.BLACK, .33, false, function() {
      FlxG.switchState(new PlayState());
    });
  }

  private function clickMenu():Void
  {
    FlxG.camera.fade(FlxColor.BLACK, .33, false, function() {
      FlxG.switchState(new MenuState());
    });
  }

  override public function update(elapsed:Float):Void
  {
    super.update(elapsed);
  }
}
