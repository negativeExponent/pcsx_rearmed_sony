#ifndef _keysym_h
#define _keysym_h

#include <SDL.h>
#if SDL_MAJOR_VERSION == 2
typedef enum {
  MY_SDLK_UNKNOWN = 0,

  MY_SDLK_RETURN,
  MY_SDLK_ESCAPE,
  MY_SDLK_BACKSPACE,
  MY_SDLK_TAB,
  MY_SDLK_SPACE,
  MY_SDLK_EXCLAIM,
  MY_SDLK_QUOTEDBL,
  MY_SDLK_HASH,
  MY_SDLK_PERCENT,
  MY_SDLK_DOLLAR,
  MY_SDLK_AMPERSAND,
  MY_SDLK_QUOTE,
  MY_SDLK_LEFTPAREN,
  MY_SDLK_RIGHTPAREN,
  MY_SDLK_ASTERISK,
  MY_SDLK_PLUS,
  MY_SDLK_COMMA,
  MY_SDLK_MINUS,
  MY_SDLK_PERIOD,
  MY_SDLK_SLASH,
  MY_SDLK_0,
  MY_SDLK_1,
  MY_SDLK_2,
  MY_SDLK_3,
  MY_SDLK_4,
  MY_SDLK_5,
  MY_SDLK_6,
  MY_SDLK_7,
  MY_SDLK_8,
  MY_SDLK_9,
  MY_SDLK_COLON,
  MY_SDLK_SEMICOLON,
  MY_SDLK_LESS,
  MY_SDLK_EQUALS,
  MY_SDLK_GREATER,
  MY_SDLK_QUESTION,
  MY_SDLK_AT,
  /*
    Skip uppercase letters
  */
  MY_SDLK_LEFTBRACKET,
  MY_SDLK_BACKSLASH,
  MY_SDLK_RIGHTBRACKET,
  MY_SDLK_CARET,
  MY_SDLK_UNDERSCORE,
  MY_SDLK_BACKQUOTE,
  MY_SDLK_a,
  MY_SDLK_b,
  MY_SDLK_c,
  MY_SDLK_d,
  MY_SDLK_e,
  MY_SDLK_f,
  MY_SDLK_g,
  MY_SDLK_h,
  MY_SDLK_i,
  MY_SDLK_j,
  MY_SDLK_k,
  MY_SDLK_l,
  MY_SDLK_m,
  MY_SDLK_n,
  MY_SDLK_o,
  MY_SDLK_p,
  MY_SDLK_q,
  MY_SDLK_r,
  MY_SDLK_s,
  MY_SDLK_t,
  MY_SDLK_u,
  MY_SDLK_v,
  MY_SDLK_w,
  MY_SDLK_x,
  MY_SDLK_y,
  MY_SDLK_z,

  MY_SDLK_CAPSLOCK,

  MY_SDLK_F1,
  MY_SDLK_F2,
  MY_SDLK_F3,
  MY_SDLK_F4,
  MY_SDLK_F5,
  MY_SDLK_F6,
  MY_SDLK_F7,
  MY_SDLK_F8,
  MY_SDLK_F9,
  MY_SDLK_F10,
  MY_SDLK_F11,
  MY_SDLK_F12,

  MY_SDLK_PRINTSCREEN,
  MY_SDLK_SCROLLLOCK,
  MY_SDLK_PAUSE,
  MY_SDLK_INSERT,
  MY_SDLK_HOME,
  MY_SDLK_PAGEUP,
  MY_SDLK_DELETE,
  MY_SDLK_END,
  MY_SDLK_PAGEDOWN,
  MY_SDLK_RIGHT,
  MY_SDLK_LEFT,
  MY_SDLK_DOWN,
  MY_SDLK_UP,

  MY_SDLK_NUMLOCKCLEAR,
  MY_SDLK_KP_DIVIDE,
  MY_SDLK_KP_MULTIPLY,
  MY_SDLK_KP_MINUS,
  MY_SDLK_KP_PLUS,
  MY_SDLK_KP_ENTER,
  MY_SDLK_KP_1,
  MY_SDLK_KP_2,
  MY_SDLK_KP_3,
  MY_SDLK_KP_4,
  MY_SDLK_KP_5,
  MY_SDLK_KP_6,
  MY_SDLK_KP_7,
  MY_SDLK_KP_8,
  MY_SDLK_KP_9,
  MY_SDLK_KP_0,
  MY_SDLK_KP_PERIOD,

  MY_SDLK_APPLICATION,
  MY_SDLK_POWER,
  MY_SDLK_KP_EQUALS,
  MY_SDLK_F13,
  MY_SDLK_F14,
  MY_SDLK_F15,
  MY_SDLK_F16,
  MY_SDLK_F17,
  MY_SDLK_F18,
  MY_SDLK_F19,
  MY_SDLK_F20,
  MY_SDLK_F21,
  MY_SDLK_F22,
  MY_SDLK_F23,
  MY_SDLK_F24,
  MY_SDLK_EXECUTE,
  MY_SDLK_HELP,
  MY_SDLK_MENU,
  MY_SDLK_SELECT,
  MY_SDLK_STOP,
  MY_SDLK_AGAIN,
  MY_SDLK_UNDO,
  MY_SDLK_CUT,
  MY_SDLK_COPY,
  MY_SDLK_PASTE,
  MY_SDLK_FIND,
  MY_SDLK_MUTE,
  MY_SDLK_VOLUMEUP,
  MY_SDLK_VOLUMEDOWN,
  MY_SDLK_KP_COMMA,
  MY_SDLK_KP_EQUALSAS400,

  MY_SDLK_ALTERASE,
  MY_SDLK_SYSREQ,
  MY_SDLK_CANCEL,
  MY_SDLK_CLEAR,
  MY_SDLK_PRIOR,
  MY_SDLK_RETURN2,
  MY_SDLK_SEPARATOR,
  MY_SDLK_OUT,
  MY_SDLK_OPER,
  MY_SDLK_CLEARAGAIN,
  MY_SDLK_CRSEL,
  MY_SDLK_EXSEL,

  MY_SDLK_KP_00,
  MY_SDLK_KP_000,
  MY_SDLK_THOUSANDSSEPARATOR,
  MY_SDLK_DECIMALSEPARATOR,
  MY_SDLK_CURRENCYUNIT,
  MY_SDLK_CURRENCYSUBUNIT,
  MY_SDLK_KP_LEFTPAREN,
  MY_SDLK_KP_RIGHTPAREN,
  MY_SDLK_KP_LEFTBRACE,
  MY_SDLK_KP_RIGHTBRACE,
  MY_SDLK_KP_TAB,
  MY_SDLK_KP_BACKSPACE,
  MY_SDLK_KP_A,
  MY_SDLK_KP_B,
  MY_SDLK_KP_C,
  MY_SDLK_KP_D,
  MY_SDLK_KP_E,
  MY_SDLK_KP_F,
  MY_SDLK_KP_XOR,
  MY_SDLK_KP_POWER,
  MY_SDLK_KP_PERCENT,
  MY_SDLK_KP_LESS,
  MY_SDLK_KP_GREATER,
  MY_SDLK_KP_AMPERSAND,
  MY_SDLK_KP_DBLAMPERSAND,
  MY_SDLK_KP_VERTICALBAR,
  MY_SDLK_KP_DBLVERTICALBAR,
  MY_SDLK_KP_COLON,
  MY_SDLK_KP_HASH,
  MY_SDLK_KP_SPACE,
  MY_SDLK_KP_AT,
  MY_SDLK_KP_EXCLAM,
  MY_SDLK_KP_MEMSTORE,
  MY_SDLK_KP_MEMRECALL,
  MY_SDLK_KP_MEMCLEAR,
  MY_SDLK_KP_MEMADD,
  MY_SDLK_KP_MEMSUBTRACT,
  MY_SDLK_KP_MEMMULTIPLY,
  MY_SDLK_KP_MEMDIVIDE,
  MY_SDLK_KP_PLUSMINUS,
  MY_SDLK_KP_CLEAR,
  MY_SDLK_KP_CLEARENTRY,
  MY_SDLK_KP_BINARY,
  MY_SDLK_KP_OCTAL,
  MY_SDLK_KP_DECIMAL,
  MY_SDLK_KP_HEXADECIMAL,

  MY_SDLK_LCTRL,
  MY_SDLK_LSHIFT,
  MY_SDLK_LALT,
  MY_SDLK_LGUI,
  MY_SDLK_RCTRL,
  MY_SDLK_RSHIFT,
  MY_SDLK_RALT,
  MY_SDLK_RGUI,

  MY_SDLK_MODE,

  MY_SDLK_AUDIONEXT,
  MY_SDLK_AUDIOPREV,
  MY_SDLK_AUDIOSTOP,
  MY_SDLK_AUDIOPLAY,
  MY_SDLK_AUDIOMUTE,
  MY_SDLK_MEDIASELECT,
  MY_SDLK_WWW,
  MY_SDLK_MAIL,
  MY_SDLK_CALCULATOR,
  MY_SDLK_COMPUTER,
  MY_SDLK_AC_SEARCH,
  MY_SDLK_AC_HOME,
  MY_SDLK_AC_BACK,
  MY_SDLK_AC_FORWARD,
  MY_SDLK_AC_STOP,
  MY_SDLK_AC_REFRESH,
  MY_SDLK_AC_BOOKMARKS,

  MY_SDLK_BRIGHTNESSDOWN,
  MY_SDLK_BRIGHTNESSUP,
  MY_SDLK_DISPLAYSWITCH,
  MY_SDLK_KBDILLUMTOGGLE,
  MY_SDLK_KBDILLUMDOWN,
  MY_SDLK_KBDILLUMUP,
  MY_SDLK_EJECT,
  MY_SDLK_SLEEP,
  MY_SDLK_APP1,
  MY_SDLK_APP2,

  MY_SDLK_AUDIOREWIND,
  MY_SDLK_AUDIOFASTFORWARD,

  MY_SDLK_WORLD_0,
  MY_SDLK_WORLD_1,
  MY_SDLK_WORLD_2,
  MY_SDLK_WORLD_3,
  MY_SDLK_WORLD_4,
  MY_SDLK_WORLD_5,
  MY_SDLK_WORLD_6,
  MY_SDLK_WORLD_7,
  MY_SDLK_WORLD_8,
  MY_SDLK_WORLD_9,

  MY_SDLK_LAST,
  SDLK_LAST = MY_SDLK_LAST
} MySDLKey;

typedef struct {
  int m_SDLK;
  int m_MySDLK;
} SDLK_to_MY_SDLK;

#endif // #if SDL_MAJOR_VERSION == 2

#endif // #ifndef _keysym_h
