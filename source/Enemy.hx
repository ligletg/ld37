package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.math.FlxPoint;
import flixel.math.FlxVelocity;


class Enemy extends FlxSprite
{
  public var speed:Float = 140;

  private var _brain:FSM;
  private var _idleTmr:Float;
  private var _moveDir:Float;
  public var seesPlayer:Bool = false;
  public var playerPos(default, null):FlxPoint;
  private var _originalPosition:FlxPoint;

  public function new(?X:Float=0, ?Y:Float=0)
  {
    super(X, Y);
    _originalPosition = new FlxPoint(X, Y);
    loadGraphic(AssetPaths.enemy__png, true, 142, 166);
    // loadGraphic("assets/images/enemy-" + etype + ".png", true, 16, 16);
    setFacingFlip(FlxObject.RIGHT, false, false);
    setFacingFlip(FlxObject.LEFT, true, false);
    animation.add("attack", [0, 1, 2, 1], 6, false);
    // drag.x = drag.y = 10;
    width = 142;
    height = 166;
    // offset.x = 4;
    // offset.y = -14;

    _brain = new FSM(idle);
    _idleTmr = 0;
    playerPos = FlxPoint.get();
  }

  public function idle():Void
  {
    if (seesPlayer)
    {
      _brain.activeState = chase;
    }
    else if (_idleTmr < 0)
    {
      if (FlxG.random.bool(1))
      {
        _moveDir = -1;
        velocity.x = velocity.y = 0;
      }
      else
      {
        _moveDir = FlxG.random.int(0, 1) * 180;
        velocity.set(speed * 0.5, 0);
        velocity.rotate(FlxPoint.weak(), _moveDir);
      }
      _idleTmr = FlxG.random.int(1, 4);
    }
    else
    {
      _idleTmr -= FlxG.elapsed;
    }
  }

  public function chase():Void
  {
    if (!seesPlayer)
    {
      _brain.activeState = idle;
      animation.stop();
    }
    else
    {
      if (playerPos.x > x)
      {
        facing = FlxObject.RIGHT;
      }
      else
      {
        facing = FlxObject.LEFT;
      }
      var destination:FlxPoint = new FlxPoint(playerPos.x, 800);
      FlxVelocity.moveTowardsPoint(this, destination, Std.int(speed));
      animation.play("attack");
    }
  }

  override public function update(elapsed:Float):Void
  {
    _brain.update();
    super.update(elapsed);
  }

  override public function draw():Void
  {
    if ((velocity.x != 0 || velocity.y != 0) && touching == FlxObject.NONE)
    {
      if (Math.abs(velocity.x) > Math.abs(velocity.y))
      {
        if (velocity.x < 0)
          facing = FlxObject.LEFT;
        else
        facing = FlxObject.RIGHT;
      }
      else
      {
        if (velocity.y < 0)
          facing = FlxObject.UP;
        else
          facing = FlxObject.DOWN;
      }

      // switch (facing)
      // {
      //   case FlxObject.LEFT, FlxObject.RIGHT:
      //     animation.play("lr");
      //   case FlxObject.UP:
      //     animation.play("u");
      //   case FlxObject.DOWN:
      //     animation.play("d");
      // }
    }
    super.draw();
  }
}
