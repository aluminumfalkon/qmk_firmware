#include "topper15.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case CS_QWERTY:
        set_single_persistent_default_layer(_QWERTY);
      break;

    case CS_M0:
      if (record->event.pressed) {
        // Display an EN-DASH (ALT+0150) on Win 11
        SEND_STRING(SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_1)SS_TAP(X_KP_5)SS_TAP(X_KP_0)));
      } else {
        // when keycode is released
      }
      break; 

    case CS_M1:
      if (record->event.pressed) {
        // Display an EM-DASH (ALT+0151) on Win 11
        SEND_STRING(SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_1)SS_TAP(X_KP_5)SS_TAP(X_KP_1)));
      } else {
        // when keycode is released
      }
      break; 

    case CS_M2:
      if (record->event.pressed) {
        // Screen capture on Win 11
        SEND_STRING(SS_LGUI(SS_DOWN(X_LSFT)SS_TAP(X_S)SS_UP(X_LSFT)));
      } else {
        // when keycode is released
      }
      break;

    case CS_M3:
      if (record->event.pressed) {
        // Screen capture on Mac OS/X
        SEND_STRING(SS_LGUI(SS_DOWN(X_LSFT)SS_TAP(X_4)SS_UP(X_LSFT)));
      } else {
        // when keycode is released
      }
      break;

    case CS_M4:
      if (record->event.pressed) {
        // Display an EN-DASH on Mac OS/X
        SEND_STRING(SS_DOWN(X_LALT)SS_TAP(X_MINS)SS_UP(X_LALT));
      } else {
        // when keycode is released
      }
      break;

    case CS_M5:
      if (record->event.pressed) {
        // Display an EM-DASH on Mac OS/X
        SEND_STRING(SS_LSFT(SS_DOWN(X_LALT)SS_TAP(X_MINS)SS_UP(X_LALT)));
      } else {
        // when keycode is released
      }
      break;

  }

  return true;
}