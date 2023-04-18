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

#define OPT_LT     A(KC_LEFT)
#define OPT_RT     A(KC_RGHT)
#define CTL_LT     C(KC_LEFT)
#define CTL_RT     C(KC_RGHT)
#define CMD_LT     G(KC_LEFT)
#define CMD_RT     G(KC_RIGHT)
#define SCRNSHT    SGUI(KC_F4)
#define UNDO       G(KC_Z)
#define CUT        G(KC_X)
#define COPY       G(KC_C)
#define PASTE      G(KC_V)
#define ONEPSWD    LAG(KC_QUOTE)
#define BASE       TO(0)
#define LAYR_LCK   MO(_LAYER_LOCK)
#define MEDIA      MO(_MEDIA)

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
#define TB_FUNC       _______
#define TB_LAUNCH     _______
#define TB_SPC_LWR    LT(_QWERTY_LOWER, KC_SPC)
#define TB_NUMPAD     MO(_NUMPAD)
#define TB_NUMERIC    MO(_NUMERIC)
#define TB_ADJUST     _______
#define TB_ENT_SYM    LT(_SYMBOL, KC_ENT)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT(
  _______,  KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                           KC_6,    KC_7,    KC_8,    KC_9,    KC_0,      KC_BSLS,
  KC_ESC,   TDX_Q,  KC_W,    KC_E,    KC_R,    KC_T,                           KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,      KC_GRV,
  KC_TAB,   LCTL_A, LOPT_S,  LCMD_D,  LSFT_F,  HYPR_G,                         HYPR_H,  RSFT_J,  RCMD_K,  ROPT_L,  RCTL_SCLN, KC_QUOT,
  LAYR_LCK, KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,   CS_M3,       MEDIA, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,   KC_RSFT,
                  TB_FUNC, TB_LAUNCH, TB_SPC_LWR, TB_NUMPAD,        TB_NUMERIC, TB_ENT_SYM, KC_BSPC, _______
),

[_QWERTY_LOWER] = LAYOUT(
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                          KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  _______, _______, _______, SCRNSHT, CTL_LT,  CTL_RT,                         KC_PGUP, OPT_LT,  KC_UP,   OPT_RT,  _______, KC_F12,
  _______, KC_LCTL, KC_LOPT, KC_LCMD, KC_LSFT, KC_HYPR,                        KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,
  BASE,    UNDO,    CUT,     COPY,    PASTE,   CW_TOGG, KC_CAPS,      _______, _______, CMD_LT, _______,  CMD_RT,  _______, _______,
                          _______,    _______, _______, _______,      _______, _______, KC_DEL,  _______
),

[_MEDIA] = LAYOUT(
  QK_BOOT, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                        _______, _______, KC_VOLU, _______, _______, _______,
  _______, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, _______,                        _______, _______, KC_VOLD, _______, _______, _______,
  BASE,    RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, _______, _______,         _______, _______, KC_MUTE, _______, _______, _______, _______,
                             _______, _______, _______, _______,      _______, _______, _______, _______
),

[_SYMBOL] = LAYOUT(
    _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______,
    KC_GRAVE,KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                        KC_CIRC, KC_AMPR, KC_ASTR, KC_MINS, KC_PLUS, _______,
    _______, KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN, _______,                        KC_LCBR, KC_RCBR, KC_PIPE, KC_UNDS, KC_EQL,  _______,
    BASE,    _______, _______, _______, _______, _______, _______,      _______, KC_TILD, XXXXXXX, KC_LT,   KC_GT,   KC_BSLS, _______,
                               _______, _______, _______, _______,      _______, _______, _______, _______
    ),

[_NUMERIC] = LAYOUT(
    _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, KC_PLUS, _______,
    _______, _______, _______, _______, _______, _______,                        KC_COLN, _______, KC_ASTR, KC_MINS, KC_MINS, _______,
    _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                           KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
    BASE,    _______, _______, KC_COLN, _______, _______, _______,      _______, KC_DOT,  KC_0,    _______, _______, KC_SLSH, _______,
                               _______, _______, _______, _______,      _______, TB_ENT_SYM, KC_BSPC, _______
    ),

[_NUMPAD] = LAYOUT(
    _______, KC_F2,   _______, _______, _______, _______,                        _______, _______, _______, _______, KC_PLUS, _______,
    _______, _______, _______, _______, _______, _______,                        KC_COLN, KC_7,    KC_8,    KC_9,    KC_MINS, _______,
    _______, KC_LCTL, KC_LOPT, KC_LCMD, KC_LSFT, KC_HYPR,                        KC_EQL,  KC_4,    KC_5,    KC_6,    KC_ASTR, _______,
    BASE,    _______, _______, _______, _______, _______, _______,      _______, KC_DOT,  KC_1,    KC_2,    KC_3,    KC_SLSH, _______,
                               _______, _______, _______, _______,      KC_O,    TB_ENT_SYM, KC_BSPC, _______
    ),

[_LAYER_LOCK] = LAYOUT(
    _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,      TO(_MEDIA), _______, _______, _______, _______, _______, _______,
                  _______, ONEPSWD, TO(_QWERTY_LOWER), TO(_NUMPAD),     TO(_NUMERIC), TO(_SYMBOL), _______, _______
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
                oled_write_P(PSTR("Navigation\n"), false);
                break;
            case _MEDIA:
                oled_write_P(PSTR("Adjust\n"), false);
                break;
            case _SYMBOL:
                oled_write_P(PSTR("Symbol\n"), false);
                break;
            case _NUMERIC:
                oled_write_P(PSTR("Numeric row\n"), false);
                break;
            case _NUMPAD:
                oled_write_P(PSTR("Numeric keypad\n"), false);
                break;
            case _LAYER_LOCK:
                oled_write_P(PSTR("Layer lock\n"), false);
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
            case _MEDIA:
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
            case _MEDIA:
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