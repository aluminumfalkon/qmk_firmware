#pragma once

#include QMK_KEYBOARD_H

#include "process_records.h"

#ifdef TAP_DANCE_ENABLE
  #include "tap_dances.h"
#endif


enum layer_number {
  _QWERTY = 0,
  _QWERTY_LOWER,
  _NAV,
  _QWERTY_ADJUST,
  _SYMBOL
};

enum custom_keycodes {
  CS_QWERTY = SAFE_RANGE,   // Switch to QWERTY Default Layer
  CS_M0,                    // EN-DASH on Win 11
  CS_M1,                    // EM-DASH on Win 11
  CS_M2,                    // Screen Capture Win 11
  CS_M3,                    // Screen Capture OSX
  CS_M4,                    // EN-DASH on OSX
  CS_M5,                    // EM-DASH on OSX
};
