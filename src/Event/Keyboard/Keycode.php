<?php

declare(strict_types=1);

namespace AllegroPHP\Allegro\Event\Keyboard;

interface Keycode
{
    public const A = 1;
    public const B = 2;
    public const C = 3;
    public const D = 4;
    public const E = 5;
    public const F = 6;
    public const G = 7;
    public const H = 8;
    public const I = 9;
    public const J = 10;
    public const K = 11;
    public const L = 12;
    public const M = 13;
    public const N = 14;
    public const O = 15;
    public const P = 16;
    public const Q = 17;
    public const R = 18;
    public const S = 19;
    public const T = 20;
    public const U = 21;
    public const V = 22;
    public const W = 23;
    public const X = 24;
    public const Y = 25;
    public const Z = 26;

    public const KEY_0 = 27;
    public const KEY_1 = 28;
    public const KEY_2 = 29;
    public const KEY_3 = 30;
    public const KEY_4 = 31;
    public const KEY_5 = 32;
    public const KEY_6 = 33;
    public const KEY_7 = 34;
    public const KEY_8 = 35;
    public const KEY_9 = 36;

    public const PAD_0 = 37;
    public const PAD_1 = 38;
    public const PAD_2 = 39;
    public const PAD_3 = 40;
    public const PAD_4 = 41;
    public const PAD_5 = 42;
    public const PAD_6 = 43;
    public const PAD_7 = 44;
    public const PAD_8 = 45;
    public const PAD_9 = 46;

    public const F1	= 47;
    public const F2 = 48;
    public const F3 = 49;
    public const F4	= 50;
    public const F5	= 51;
    public const F6	= 52;
    public const F7	= 53;
    public const F8	= 54;
    public const F9	= 55;
    public const F10 = 56;
    public const F11 = 57;
    public const F12 = 58;

    public const ESCAPE	= 59;
    public const TILDE = 60;
    public const MINUS = 61;
    public const EQUALS	= 62;
    public const BACKSPACE = 63;
    public const TAB = 64;
    public const OPENBRACE = 65;
    public const CLOSEBRACE	= 66;
    public const ENTER = 67;
    public const SEMICOLON = 68;
    public const QUOTE = 69;
    public const BACKSLASH = 70;
    public const BACKSLASH2	= 71; /* DirectInput calls this DIK_OEM_102: "< > | on UK/Germany keyboards" */
    public const COMMA = 72;
    public const FULLSTOP = 73;
    public const SLASH = 74;
    public const SPACE = 75;

    public const INSERT	= 76;
    public const DELETE	= 77;
    public const HOME = 78;
    public const END = 79;
    public const PGUP = 80;
    public const PGDN = 81;
    public const LEFT = 82;
    public const RIGHT = 83;
    public const UP = 84;
    public const DOWN = 85;

    public const PAD_SLASH = 86;
    public const PAD_ASTERISK = 87;
    public const PAD_MINUS = 88;
    public const PAD_PLUS = 89;
    public const PAD_DELETE	= 90;
    public const PAD_ENTER = 91;

    public const PRINTSCREEN = 92;
    public const PAUSE = 93;

    public const ABNT_C1 = 94;
    public const YEN = 95;
    public const KANA = 96;
    public const CONVERT = 97;
    public const NOCONVERT = 98;
    public const AT = 99;
    public const CIRCUMFLEX	= 100;
    public const COLON2	= 101;
    public const KANJI = 102;

    public const PAD_EQUALS	= 103;	/* MacOS X */
    public const BACKQUOTE = 104;	/* MacOS X */
    public const SEMICOLON2	= 105;	/* MacOS X -- TODO: ask lillo what this should be */
    public const COMMAND = 106;	/* MacOS X */

    public const BACK = 107;        /* Android back key */
    public const VOLUME_UP = 108;
    public const VOLUME_DOWN = 109;

    /* Android game keys */
    public const SEARCH = 110;
    public const DPAD_CENTER = 111;
    public const BUTTON_X = 112;
    public const BUTTON_Y = 113;
    public const DPAD_UP = 114;
    public const DPAD_DOWN = 115;
    public const DPAD_LEFT = 116;
    public const DPAD_RIGHT = 117;
    public const SELECT = 118;
    public const START = 119;
    public const BUTTON_L1 = 120;
    public const BUTTON_R1 = 121;
    public const BUTTON_L2 = 122;
    public const BUTTON_R2 = 123;
    public const BUTTON_A = 124;
    public const BUTTON_B = 125;
    public const THUMBL = 126;
    public const THUMBR = 127;

    public const UNKNOWN = 128;

    /* All codes up to before ALLEGRO_KEY_MODIFIERS can be freely
     * assignedas additional unknown keys, like various multimedia
     * and application keys keyboards may have.
     */

    public const MODIFIERS = 215;

    public const LSHIFT	= 215;
    public const RSHIFT	= 216;
    public const LCTRL = 217;
    public const RCTRL = 218;
    public const ALT = 219;
    public const ALTGR = 220;
    public const LWIN = 221;
    public const RWIN = 222;
    public const MENU = 223;
    public const SCROLLLOCK = 224;
    public const NUMLOCK = 225;
    public const CAPSLOCK = 226;
}