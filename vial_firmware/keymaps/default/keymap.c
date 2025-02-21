/* Copyright 2021 astra tanuki
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
	KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,  KC_B,          KC_J,         KC_L,    KC_U,    KC_Y,   KC_SCLN, KC_BSPC,
        KC_LCTL, KC_A,    KC_R,    KC_S,    KC_T,  KC_G,          KC_M,         KC_N,    KC_E,    KC_I,   KC_O,    KC_QUOTE,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_D,  KC_V,  KC_TRNS,  KC_K,         KC_H,    KC_COMM, KC_DOT, KC_SLSH, KC_GRAVE,
        KC_NO,   KC_CAPS, KC_LGUI, KC_LALT, LT(1,KC_ENT), KC_TRNS,  LT(1,KC_SPC), KC_MINS, KC_EQL, KC_BSLS, KC_NO
    ),
    [1] = LAYOUT(
	    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS,
        KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLU, SGUI(KC_S),     KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,          KC_LBRC, KC_RBRC, KC_TRNS, KC_NO
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
    [1] =   { ENCODER_CCW_CW(RGB_HUD, RGB_HUI)  }
};
#endif
