/* Copyright 2015-2017 Jack Humbert
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
#include "muse.h"
#include "keymap_uk.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,---------------------------------------------------------------------------------------.
 * |   `      |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |----------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab      |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Del  |
 * |----------+------+------+------+------+-------------+------+------+------+------+------|
 * | Ctrl(Esc)|   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |
 * |----------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift    |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Shift |
 * |----------+------+------+------+------+------+------+------+------+------+------+------|
 * | Capslock | GUI  | Ctrl | Alt  |MO(1) |    Space    |MO(2) | Alt  | Ctrl | GUI  |Enter |
 * `---------------------------------------------------------------------------------------'
 */
[0] = LAYOUT_preonic_grid(
    UK_GRV,        UK_1,    UK_2,    UK_3,    UK_4,  UK_5,   UK_6,   UK_7,  UK_8,    UK_9,    UK_0,    KC_BSPC,
    KC_TAB,        UK_Q,    UK_W,    UK_E,    UK_R,  UK_T,   UK_Y,   UK_U,  UK_I,    UK_O,    UK_P,    KC_DEL,
    CTL_T(KC_ESC), UK_A,    UK_S,    UK_D,    UK_F,  UK_G,   UK_H,   UK_J,  UK_K,    UK_L,    UK_SCLN, UK_QUOT,
    KC_LSFT,       UK_Z,    UK_X,    UK_C,    UK_V,  UK_B,   UK_N,   UK_M,  UK_COMM, UK_DOT,  UK_SLSH, KC_RSFT,
    KC_CAPS,       KC_LGUI, KC_LCTL, KC_LALT, MO(1), KC_SPC, KC_SPC, MO(2), KC_RALT, KC_RCTL, KC_RGUI, KC_ENT
),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |  ~   |      |      |      |  $   |      |      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      | PgUp |  Up  | PgDn | Home |      |      |   [  |   ]  |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      | Left | Down | Right| End  |      |   \  |   (  |   )  |   =  |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |   -  |   <  |   >  |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | MO(4)|      |      |      |MO(3) |             |MO(3) |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[1] = LAYOUT_preonic_grid(
    UK_TILD, _______, _______, UK_HASH, KC_DLR,  _______, _______, _______, _______, _______, _______, _______,
    _______, KC_PGUP, KC_UP,   KC_PGDN, KC_HOME, _______, _______, UK_LBRC, UK_RBRC, _______, _______, _______,
    _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  _______, UK_BSLS, UK_LPRN, UK_RPRN, UK_EQL,  _______, _______,
    _______, _______, _______, _______, _______, _______, _______, UK_MINS, KC_LABK, KC_RABK, _______, _______,
    MO(4),   _______, _______, _______, MO(3),   _______, _______, MO(3),   _______, _______, _______, _______
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |Print |      |Pause |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |Insert| Home | PgUp |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |Delete| End  | PgDn |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[2] = LAYOUT_preonic_grid(
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_PSCR, _______, KC_PAUS, _______, _______,
    _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_INS,  KC_HOME, KC_PGUP, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_DEL,  KC_END,  KC_PGDN, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, MO(3),   _______, _______, MO(3),   _______, _______, _______, _______
),

/* Both (Lower + Raise)
 * ,-------------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |   /  |        |
 * |------+------+------+------+------+-------------+------+------+------+------+--------|
 * |      |      |      |      |      |      |      |  7   |  8   |  9   |   *  |        |
 * |------+------+------+------+------+-------------+------+------+------+------+--------|
 * |      |      |      |      |      |      |      |  4   |  5   |  6   |   -  |        |
 * |------+------+------+------+------+------|------+------+------+------+------+--------|
 * |      |      |      |      |      |      |      |  1   |  2   |  3   |   +  |        |
 * |------+------+------+------+------+------+------+------+------+------+------+--------|
 * |      |      |      |      |      |             |      |  0   |  .   |      |        |
 * `-------------------------------------------------------------------------------------'
 */

[3] = LAYOUT_preonic_grid(
    _______, _______, _______, _______, _______, _______, _______, KC_NLCK, KC_PAST, KC_PSLS, KC_PMNS, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_P7,   KC_P8,   KC_P9,   KC_PPLS, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_P4,   KC_P5,   KC_P6,   _______, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_P1,   KC_P2,   KC_P3,   _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, KC_P0,   KC_PDOT, _______, _______
),

/* Menu
 * ,-------------------------------------------------------------------------------------.
 * |      |      |      |      |      |             |      |      |      |      | RGBTGL |
 * |------+------+------+------+------+------+------+------+------+------+------+--------|
 * |      | Reset| Debug|      |      |      |      |      |      |      |      |        |
 * |------+------+------+------+------+-------------+------+------+------+------+--------|
 * |      |      |      |      |      |      |      | RGB+ | RGB- |      |      |        |
 * |------+------+------+------+------+------|------+------+------+------+------+--------|
 * |      |      |      |      |      |      |      |      |      |      |      |        |
 * |------+------+------+------+------+------+------+------+------+------+------+--------|
 * |      |      |      |      |      |             |      | Mute | Vol- | Vol+ |        |
 * `-------------------------------------------------------------------------------------'
 */
[4] = LAYOUT_preonic_grid(
    _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, RGB_TOG,
    _______, RESET,   DEBUG,   _______, _______, _______, _______, _______, _______,  _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, RGB_MOD, RGB_RMOD, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, KC_MUTE,  KC_VOLD, KC_VOLU, _______
)


};

void keyboard_post_init_user(void) {
    rgblight_disable();
}
