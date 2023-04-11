#pragma once
#include "topper15.h"

enum custom_tapdances{
  TD_ANGLE_CLOSE = 0,
  TD_PARENTHESIS_CLOSE,
  TD_BRACKET_CLOSE,
  TD_BRACE_CLOSE,
  TD_WIN_Q_LALT_F4,
  TD_OSX_Q_LGUI_Q,
};


#define TD_ANG_CLOSE  TD(TD_ANGLE_CLOSE)          // >
#define TD_PAR_CLOSE  TD(TD_PARENTHESIS_CLOSE)    // )
#define TD_BRK_CLOSE  TD(TD_BRACKET_CLOSE)        // ]
#define TD_BRC_CLOSE  TD(TD_BRACE_CLOSE)          // }
#define T_WIN_QUIT    TD(TD_WIN_Q_LALT_F4)        // Windows Alt+F4
#define T_OSX_QUIT    TD(TD_OSX_Q_LGUI_Q)         // OS/X LGUI+Q
