package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxColor;

class Impact extends FlxSprite
{
  public function new(?X:Float=0, ?Y:Float=0)
  {
    super(X, Y);
    loadGraphic(AssetPaths.explosion__png, true, 16, 16);
    setSize(8, 8);
    offset.set(4, 4);
    var animArray:Array<Int> = [
      0,
      1,
      2,
      3,
      4,
      5,
      6,
      7,
      8,
      9,
      10,
      11,
      12,
      13,
      14,
      15,
      16,
      17,
      18,
      19,
      20,
      21,
      22,
      23,
      24,
      25,
      26,
      27,
      28,
      29,
      30,
      31,
      32,
      33,
      34,
      35,
      36,
      37,
      38,
      39,
      40,
      41,
      42,
      43,
      44,
      45,
      46,
      47,
      48,
      49,
      50,
      51,
      52,
      53,
      54,
      55,
      56,
      57,
      58,
      59,
      60,
      61,
      62,
      63,
      64,
      65,
      66,
      67,
      68,
      69,
      70,
      71,
      72,
      73,
      74,
      75,
      76,
      77,
      78,
      79,
      80,
      81,
      82,
      83,
      84,
      85,
      86,
      87,
      88,
      89,
      90,
      91
    ];
    animation.add("explosion", animArray, 90, false);
    animation.callback = animationRuns;
    animation.finishCallback = animationEnd;
  }

  private function animationRuns(name:String, frame:Int, index:Int)
  {
    if (name == "explosion" && frame == 0)
    {
      FlxG.camera.shake(0.01, 0.2);
    }
  }

  private function animationEnd(name:String):Void
  {
    if (name == "explosion")
    {
      alive = false;
      exists = false;
    }
  }
}
