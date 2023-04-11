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

enum layer_names {
    _BASE,
    _LOWER,
    _RAISE,
    _ADJUST
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* QWERTY
 * ,-----------------------------------------.                                ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                                |   6  |   7  |   8  |   9  |   0  |  \   |
 * |------+------+------+------+------+------|                                |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                                |   Y  |   U  |   I  |   O  |   P  |  `   |
 * |------+------+------+------+------+------|                                |------+------+------+------+------+------|
 * | CAPS |   A  |   S  |   D  |   F  |   G  |-------.                ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|  LGUI |                | RGUI  |------+------+------+------+------+------|
 * |LSHIFT|   Z  |   X  |   C  |   V  |   B  |-------|                |-------|   N  |   M  |   ,  |   .  |   /  |RSHIFT|
 * `-----------------------------------------/       /                 \      \-----------------------------------------'
 *                | LALT  | LCTL  | ENT   | / MINS  /                   \ EQL  \  | SPC   | BSPC  |  DEL  |
 *                |       |       | LOWR  |/ RAISE /                     \RAISE \ | LOWR  |       |       |
 *                `-------------------------------'                       '------''-----------------------'
 */
 [_BASE] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                           KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSLS,
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                           KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_GRV,
  KC_CAPS,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                           KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_LGUI,         KC_RGUI, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
               KC_LALT, KC_LCTL, LT(1,KC_ENT), LT(2,KC_MINS),         LT(2,KC_EQL), LT(1,KC_SPC), KC_BSPC, KC_DEL
),
/* LOWER
 * ,-----------------------------------------.                                ,-----------------------------------------.
 * |      |      |      |      |      |      |                                |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                                |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                                |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                                |------+------+------+------+------+------|
 * |      |      |   <  |   (  |   [  |   {  |--------.               ,-------|   }  |   ]  |   )  |   >  |      |      |
 * |------+------+------+------+------+------|        |               |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |--------|               |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /                 \      \-----------------------------------------'
 *                | LALT  | LCTL  | ENT   | / MINS  /                   \ EQL  \  | SPC   | BSPC  |  DEL  |
 *                |       |       | LOWR  |/ RAISE /                     \RAISE \ | LOWR  |       |       |
 *                `-------------------------------'                       '------''-----------------------'
 */
[_LOWER] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______,
  _______, _______, KC_LABK, KC_LPRN, KC_LBRC, KC_LCBR,                        KC_RCBR, KC_RBRC, KC_RPRN, KC_RABK, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, _______,
                             _______, _______, _______, _______,      _______, _______, _______, _______
),
/* RAISE
 * ,-----------------------------------------.                                ,-----------------------------------------.
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |                                |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |
 * |------+------+------+------+------+------|                                |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                                | PGUP | HOME |  UP  |  END |      |  F12 |
 * |------+------+------+------+------+------|                                |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.                ,-------| PGDN | LEFT | DOWN | RIGHT|      |      |
 * |------+------+------+------+------+------|       |                |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|                |-------|      | LWRD |      | RWRD |      |      |
 * `-----------------------------------------/       /                 \      \-----------------------------------------'
 *                | LALT  | LCTL  | ENT   | / MINS  /                   \ EQL  \  | SPC   |  DEL  |  DEL  |
 *                |       |       | LOWR  |/ RAISE /                     \RAISE \ | LOWR  |       |       |
 *                `-------------------------------'                       '------''-----------------------'
 */
[_RAISE] = LAYOUT(
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                          KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  _______, _______, _______, _______, _______, _______,                        KC_PGUP, KC_HOME, KC_UP,   KC_END,  _______, KC_F12,
  _______, _______, _______, _______, _______, _______,                        KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,      _______, _______, C(KC_LEFT), _______, C(KC_RGHT), _______, _______,
                             _______, _______, _______, _______,      _______, _______, KC_DEL,     _______
),
/* ADJUST
 * ,-----------------------------------------.                                ,-----------------------------------------.
 * |      |      |      |      |      |      |                                |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                                |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                                |      |      | +VOL |      |      |      |
 * |------+------+------+------+------+------|                                |------+------+------+------+------+------|
 * |      | TOG  | +HUE | +SAT | +BRT |      |--------.               ,-------|      |      | -VOL |      |      |      |
 * |------+------+------+------+------+------|        |               |       |------+------+------+------+------+------|
 * |      | MODE | -HUE | -SAT | -BRT |      |--------|               |-------|      | MUTE |      |      |      |      |
 * `-----------------------------------------/       /                 \      \-----------------------------------------'
 *                | LALT  | LCTL  | ENT   | / MINS  /                   \ EQL  \  | SPC   | BSPC  |  DEL  |
 *                |       |       | LOWR  |/ RAISE /                     \RAISE \ | LOWR  |       |       |
 *                `-------------------------------'                       '------''-----------------------'
 */
  [_ADJUST] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                      _______, _______, KC_VOLU, _______, _______, _______,
  _______, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, _______,                      _______, _______, KC_VOLD, _______, _______, _______,
  _______, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, _______, _______,    _______, _______, KC_MUTE, _______, _______, _______, _______,
                             _______, _______, _______, _______,    _______, _______, _______, _______
)
};


layer_state_t layer_state_set_user(layer_state_t state) {
  state = update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);

  return state;
}
