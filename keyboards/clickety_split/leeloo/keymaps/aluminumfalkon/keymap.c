/* Copyright 2022 Clickety Split Ltd.
 *                https://clicketysplit.ca
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "aluminumfalkon.h"

#define TDW_GT      TD_ANG_CLOSE
#define TDW_PR      TD_PAR_CLOSE
#define TDW_BK      TD_BRK_CLOSE
#define TDW_BC      TD_BRC_CLOSE
#define TDW_Q       T_WIN_QUIT
#define TDX_Q       T_OSX_QUIT

// Short versions
#define LSFT_Z      MT(MOD_LSFT, KC_Z)
#define RSFT_FS     MT(MOD_RSFT, KC_SLSH)
#define RSFT_TD     MT(MOD_RSFT, KC_TILD)


// OSX
#define WRD_LTX     A(KC_LEFT)
#define WRD_RTX     A(KC_RGHT)

// OSX
#define DSK_LTX     C(KC_LEFT)
#define DSK_RTX     C(KC_RGHT)

/**
// Swap Virtual Desktops Left and Right
// Windows
#define WRD_LTW     C(KC_LEFT)
#define WRD_RTW     C(KC_RGHT)

// Windows
#define DSK_LTW     G(C(KC_LEFT))
#define DSK_RTW     G(C(KC_RGHT))
**/

// Home row mods
#define LCTL_A        MT(MOD_LCTL, KC_A)
#define LOPT_S        MT(MOD_LALT, KC_S)
#define LCMD_D        MT(MOD_LGUI, KC_D)
#define LSFT_F        MT(MOD_LSFT, KC_F)
#define HYPR_G        MT(MOD_HYPR, KC_G)
#define HYPR_H        MT(MOD_HYPR, KC_H)
#define RSFT_J        MT(MOD_RSFT, KC_J)
#define RCMD_K        MT(MOD_RGUI, KC_K)
#define ROPT_L        MT(MOD_RALT, KC_L)
#define RCTL_SCLN     MT(MOD_RCTL, KC_SCLN)

// Thumb buttons
#define THB_FUNC      _______
#define THB_LAUNCH    _______
#define THB_SPC_NAV   LT(_NAV, KC_SPC)
#define THB_NUMPAD    _______
#define THB_ADJUST    _______
#define THB_ENT_SYM   LT(_SYMBOL, KC_ENT)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT(
  _______,  KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                           KC_6,    KC_7,    KC_8,    KC_9,    KC_0,      KC_BSLS,
  KC_ESC,   TDX_Q,  KC_W,    KC_E,    KC_R,    KC_T,                           KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,      KC_GRV,
  KC_TAB,   LCTL_A, LOPT_S,  LCMD_D,  LSFT_F,  HYPR_G,                         HYPR_H,  RSFT_J,  RCMD_K,  ROPT_L,  RCTL_SCLN, KC_QUOT,
  _______,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,    CS_M3,        KC_RCTL, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,   KC_RSFT,
            THB_FUNC, THB_LAUNCH, THB_SPC_NAV, THB_NUMPAD,            THB_ADJUST, THB_ENT_SYM, KC_BSPC, _______
),

[_QWERTY_LOWER] = LAYOUT(
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                          KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, KC_F12,
  _______, TDW_GT,  TDW_PR,  TDW_BK,  TDW_BC,  _______,                        _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,      _______,   CS_M4,   CS_M5, _______, _______, _______, _______,
                             _______, _______, _______, _______,      _______, _______, _______, _______
),

[_NAV] = LAYOUT(
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                          KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  _______, _______, _______, _______, _______, _______,                        KC_PGUP, KC_HOME, KC_UP,   KC_END,  _______, KC_F12,
  _______, TDW_GT,  TDW_PR,  TDW_BK,  TDW_BC,  _______,                        KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,      _______, _______, WRD_LTX, _______, WRD_RTX, _______, _______,
                             _______, _______, _______, _______,      _______, _______, KC_DEL,  _______
),

[_QWERTY_ADJUST] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                        _______, _______, KC_VOLU, _______, _______, _______,
  _______, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, _______,                        _______, DSK_LTX, KC_VOLD, DSK_RTX, _______, _______,
  _______, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, _______, _______,      _______, _______, KC_MUTE, _______, _______, _______, _______,
                             _______, _______, _______, _______,      _______, _______, _______, _______
),

[_SYMBOL] = LAYOUT(
    _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                        _______, _______, KC_VOLU, _______, _______, _______,
    _______, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, _______,                        _______, DSK_LTX, KC_VOLD, DSK_RTX, _______, _______,
    _______, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, _______, _______,      _______, _______, KC_MUTE, _______, _______, _______, _______,
    _______, _______, _______, _______,      _______, _______, _______, _______
    ),

};

#ifdef OLED_ENABLE
static void render_keylock_status(led_t led_state) {
    oled_write_P(PSTR("Lock: "), false);
    oled_write_P(PSTR("CAPS"), led_state.caps_lock);
    oled_write_P(PSTR(" "), false);
    oled_write_P(PSTR("NUML"), led_state.num_lock);
    oled_write_P(PSTR(" "), false);
    oled_write_ln_P(PSTR("SCLK"), led_state.scroll_lock);
}

static void render_mod_status(uint8_t modifiers) {
    oled_write_P(PSTR("Mods: "), false);
    oled_write_P(PSTR("Sft"), (modifiers & MOD_MASK_SHIFT));
    oled_write_P(PSTR(" "), false);
    oled_write_P(PSTR("Ctl"), (modifiers & MOD_MASK_CTRL));
    oled_write_P(PSTR(" "), false);
    oled_write_P(PSTR("Alt"), (modifiers & MOD_MASK_ALT));
    oled_write_P(PSTR(" "), false);
    oled_write_P(PSTR("GUI"), (modifiers & MOD_MASK_GUI));
}

#if defined(KEYBOARD_clickety_split_leeloo_rev1)
static void render_secondary_oled(void) {
    // Version Information
    oled_write_P(PSTR("Leeloo v1\n\n"), false);
    oled_write_P(PSTR("Firmware: "), false);
    oled_write_P(PSTR("v1.13 JMT"), false);
    oled_write_P(PSTR("\n"), false);
    oled_write_P(PSTR("Clickety Split Ltd."), false);
}
#endif

#if defined(KEYBOARD_clickety_split_leeloo_rev2)
static void render_secondary_oled(void) {
    // Version Information
    oled_write_P(PSTR("Leeloo v2\n\n"), false);
    oled_write_P(PSTR("Firmware: "), false);
    oled_write_P(PSTR("v2.13"), false);
    oled_write_P(PSTR("\n"), false);
    oled_write_P(PSTR("Clickety Split Ltd."), false);
}
#endif

bool oled_task_user(void) {

    if (is_keyboard_master()) {

        // Host Keyboard Layer Status
        oled_write_P(PSTR("OS/X : "), false);

        switch (get_highest_layer(layer_state)) {
            case _QWERTY:
                oled_write_P(PSTR("Leeloo\n"), false);
                break;
            case _QWERTY_LOWER:
                oled_write_P(PSTR("Lower\n"), false);
                break;
            case _NAV:
                oled_write_P(PSTR("Navigation\n"), false);
                break;
            case _QWERTY_ADJUST:
                oled_write_P(PSTR("Adjust\n"), false);
                break;
            case _SYMBOL:
                oled_write_P(PSTR("Symbol\n"), false);
                break;
            default:
                // Or use the write_ln shortcut over adding '\n' to the end of your string
                oled_write_ln_P(PSTR("Undefined"), false);
        }

        // Host Keyboard LED Status
        oled_write_P(PSTR("\n"), false);
        render_keylock_status(host_keyboard_led_state());
        render_mod_status(get_mods() | get_oneshot_mods());

    } else {

        // Version Information
        render_secondary_oled();

    }

    return false;
}
#endif // OLED_ENABLE

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {

    if (index == 0) {
        switch (biton32(layer_state)) {
            case _QWERTY:
                // Volume Up / Volume Down
                if (clockwise) {
                    tap_code(KC_VOLD);
                } else {
                    tap_code(KC_VOLU);
                }
                break;
            case _QWERTY_LOWER:
                // Zoom In / Zoom Out
                if (clockwise) {
                    tap_code16(C(KC_MINS));
                } else {
                    tap_code16(C(KC_EQL));
                }
                break;
            case _NAV:
                // Brush Size Smaller / Larger
                if (clockwise) {
                    tap_code(KC_LBRC);
                } else {
                    tap_code(KC_RBRC);
                }
                break;
            case _QWERTY_ADJUST:
                // Volume Up / Volume Down
                if (clockwise) {
                    tap_code(KC_VOLD);
                } else {
                    tap_code(KC_VOLU);
                }
                break;
            default:
                // Volume Up / Volume Down
                if (clockwise) {
                    tap_code(KC_VOLD);
                } else {
                    tap_code(KC_VOLU);
                }
                break;
        }

    } else if (index == 1) {
        switch (biton32(layer_state)) {
            case _QWERTY:
                // Tab / Shift + Tab
                if (clockwise) {
                    tap_code(KC_TAB);
                } else {
                    tap_code16(S(KC_TAB));
                }
                break;
            case _QWERTY_LOWER:
                // Down / Up
                if (clockwise) {
                    tap_code(KC_DOWN);
                } else {
                    tap_code(KC_UP);
                }
                break;
            case _NAV:
                // Right / Left
                if (clockwise) {
                    tap_code(KC_RIGHT);
                } else {
                    tap_code(KC_LEFT);
                }
                break;
            case _QWERTY_ADJUST:
                // Page up/Page down
                if (clockwise) {
                    tap_code(KC_PGDN);
                } else {
                    tap_code(KC_PGUP);
                }
                break;
            default:
                // Page up/Page down
                if (clockwise) {
                    tap_code(KC_PGDN);
                } else {
                    tap_code(KC_PGUP);
                }
                break;
        }
    }

    return false;

}
#endif // ENCODER_ENABLE