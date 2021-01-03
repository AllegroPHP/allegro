<?php

declare(strict_types=1);

namespace AllegroPHP\Allegro\Event;

interface Type
{
    public const JOYSTICK_AXIS = 1;
    public const JOYSTICK_BUTTON_DOWN = 2;
    public const JOYSTICK_BUTTON_UP = 3;
    public const JOYSTICK_CONFIGURATION = 4;

    public const KEY_DOWN = 10;
    public const KEY_CHAR = 11;
    public const KEY_UP = 12;

    public const MOUSE_AXES = 20;
    public const MOUSE_BUTTON_DOWN = 21;
    public const MOUSE_BUTTON_UP = 22;
    public const MOUSE_ENTER_DISPLAY = 23;
    public const MOUSE_LEAVE_DISPLAY = 24;
    public const MOUSE_WARPED = 25;

    public const TIMER = 30;

    public const DISPLAY_EXPOSE = 40;
    public const DISPLAY_RESIZE = 41;
    public const DISPLAY_CLOSE = 42;
    public const DISPLAY_LOST = 43;
    public const DISPLAY_FOUND = 44;
    public const DISPLAY_SWITCH_IN = 45;
    public const DISPLAY_SWITCH_OUT = 46;
    public const DISPLAY_ORIENTATION = 47;
    public const DISPLAY_HALT_DRAWING = 48;
    public const DISPLAY_RESUME_DRAWING = 49;

    public const TOUCH_BEGIN = 50;
    public const TOUCH_END = 51;
    public const TOUCH_MOVE = 52;
    public const TOUCH_CANCEL = 53;

    public const DISPLAY_CONNECTED = 60;
    public const DISPLAY_DISCONNECTED = 61;
}
