/**
 * Copyright 2022 Charly Delay <charly@codesink.dev> (@0xcharly)
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

enum charybdis_keymap_layers {
    LAYER_BASE = 0,
    LAYER_LOWER,
    LAYER_RAISE,
};

enum custom_keycodes {
    QMK1 = SAFE_RANGE,
    QMK2,
    QMK3,
    QMK4,
    QMK5,
    QMK6,
    QMK7,
    QMK8,
    QMK9,
    QMK10,
    QMK11,
    QMK12,
    QMK13,
    QMK14,
    QMK15,
    QMK16,
    QMK17,
    QMK18,
    QMK19,
    QMK20,
    QMK21,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case QMK1:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            register_code(KC_LALT);
            tap_code_delay(KC_P6, 10);
            tap_code_delay(KC_P4, 10);
            unregister_code(KC_LALT);
        } else {
            // when keycode QMKBEST is released
        }
        break;

    case QMK2:
        if (record->event.pressed) {
            // when keycode QMKURL is pressed
            register_code(KC_LALT);
            tap_code_delay(KC_P3, 10);
            tap_code_delay(KC_P5, 10);
            unregister_code(KC_LALT);
        } else {
            // when keycode QMKURL is released
        }
        break;

    case QMK3:
        if (record->event.pressed) {
            register_code(KC_LALT);
            tap_code_delay(KC_P3, 10);
            tap_code_delay(KC_P6, 10);
            unregister_code(KC_LALT);
        }
        break;

    case QMK4:
        if (record->event.pressed) {
            register_code(KC_LALT);
            tap_code_delay(KC_P9, 10);
            tap_code_delay(KC_P4, 10);
            unregister_code(KC_LALT);
        }
        break;
    case QMK5:
        if (record->event.pressed) {
            register_code(KC_LALT);
            tap_code_delay(KC_P3, 10);
            tap_code_delay(KC_P8, 10);
            unregister_code(KC_LALT);
        }
        break;
    case QMK6:
        if (record->event.pressed) {
            register_code(KC_LALT);
            tap_code_delay(KC_P5, 10);
            tap_code_delay(KC_P9, 10);
            unregister_code(KC_LALT);
        }
        break;
    case QMK7:
        if (record->event.pressed) {
            register_code(KC_LALT);
            tap_code_delay(KC_P5, 10);
            tap_code_delay(KC_P8, 10);
            unregister_code(KC_LALT);
        }
        break;
    case QMK8:
        if (record->event.pressed) {
            register_code(KC_LALT);
            tap_code_delay(KC_P3, 10);
            tap_code_delay(KC_P4, 10);
            unregister_code(KC_LALT);
        }
        break;
    case QMK9:
        if (record->event.pressed) {
            register_code(KC_LALT);
            tap_code_delay(KC_P1, 10);
            tap_code_delay(KC_P2, 10);
            tap_code_delay(KC_P4, 10);
            unregister_code(KC_LALT);
        }
        break;
    case QMK10:
        if (record->event.pressed) {
            register_code(KC_LALT);
            tap_code_delay(KC_P1, 10);
            tap_code_delay(KC_P2, 10);
            tap_code_delay(KC_P6, 10);
            unregister_code(KC_LALT);
        }
        break;
    case QMK11:
        if (record->event.pressed) {
            register_code(KC_LALT);
            tap_code_delay(KC_P9, 10);
            tap_code_delay(KC_P2, 10);
            unregister_code(KC_LALT);
        }
        break;
    case QMK12:
        if (record->event.pressed) {
            register_code(KC_LALT);
            tap_code_delay(KC_P4, 10);
            tap_code_delay(KC_P4, 10);
            unregister_code(KC_LALT);
        }
        break;
    case QMK13:
        if (record->event.pressed) {
            register_code(KC_LALT);
            tap_code_delay(KC_P4, 10);
            tap_code_delay(KC_P6, 10);
            unregister_code(KC_LALT);
        }
        break;
    case QMK14:
        if (record->event.pressed) {
            register_code(KC_LALT);
            tap_code_delay(KC_P3, 10);
            tap_code_delay(KC_P9, 10);
            unregister_code(KC_LALT);
        }
        break;
    case QMK15:
        if (record->event.pressed) {
            register_code(KC_LALT);
            tap_code_delay(KC_P6, 10);
            tap_code_delay(KC_P3, 10);
            unregister_code(KC_LALT);
        }
        break;
    case QMK16:
        if (record->event.pressed) {
            register_code(KC_LALT);
            tap_code_delay(KC_P9, 10);
            tap_code_delay(KC_P1, 10);
            unregister_code(KC_LALT);
        }
        break;
    case QMK17:
        if (record->event.pressed) {
            register_code(KC_LALT);
            tap_code_delay(KC_P9, 10);
            tap_code_delay(KC_P3, 10);
            unregister_code(KC_LALT);
        }
        break;
    case QMK18:
        if (record->event.pressed) {
            register_code(KC_LALT);
            tap_code_delay(KC_P1, 10);
            tap_code_delay(KC_P2, 10);
            tap_code_delay(KC_P3, 10);
            unregister_code(KC_LALT);
        }
        break;
    case QMK19:
        if (record->event.pressed) {
            register_code(KC_LALT);
            tap_code_delay(KC_P6, 10);
            tap_code_delay(KC_P0, 10);
            unregister_code(KC_LALT);
        }
        break;
    case QMK20:
        if (record->event.pressed) {
            register_code(KC_LALT);
            tap_code_delay(KC_P6, 10);
            tap_code_delay(KC_P2, 10);
            unregister_code(KC_LALT);
        }
        break;
    case QMK21:
        if (record->event.pressed) {
            register_code(KC_LALT);
            tap_code_delay(KC_P1, 10);
            tap_code_delay(KC_P2, 10);
            tap_code_delay(KC_P5, 10);
            unregister_code(KC_LALT);
        }
        break;
    }
    return true;
};

#define LOWER MO(LAYER_LOWER)
#define RAISE MO(LAYER_RAISE)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LAYER_BASE] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       KC_ESC,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
KC_TAB,GUI_T(KC_A),ALT_T(KC_S),CTL_T(KC_D),SFT_T(KC_F),KC_G,   KC_H, RSFT_T(KC_J), RCTL_T(KC_K), ALT_T(KC_L), GUI_T(KC_SCLN), KC_QUOT,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       G(KC_SPC),    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,       KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RBRC,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                              KC_BSPC,  KC_SPC,   LOWER,      RAISE,  KC_ENT
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [LAYER_LOWER] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       XXXXXXX, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,       KC_6,   KC_7,  KC_8,  KC_9,  KC_0,  KC_UNDS,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
     XXXXXXX,  KC_EXLM,  QMK1,   QMK2,   QMK3,  KC_PERC,        QMK4,   QMK5,  QMK6,  QMK7,  QMK8,  QMK9,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
     XXXXXXX,  QMK10,  KC_PPLS, KC_PMNS, KC_PAST,KC_PSLS,       KC_EQL, QMK11, QMK12, QMK13, QMK14, QMK15,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  XXXXXXX, XXXXXXX, _______,    XXXXXXX, _______
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [LAYER_RAISE] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       XXXXXXX, KC_F1,    KC_F2,  KC_F3,   KC_F4,   KC_F5,      KC_F6,  KC_F7, KC_F8,   KC_F9,   KC_F10, KC_F11,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT, XXXXXXX,    XXXXXXX, QMK16, KC_LPRN, KC_RPRN, QMK17, KC_F12,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END, XXXXXXX,    KC_EQL, QMK18, QMK19,   QMK20,    QMK21,  XXXXXXX,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                            KC_DEL, CTL_T(KC_SPC), XXXXXXX,    _______, QK_BOOT
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),
};
// clang-format on
