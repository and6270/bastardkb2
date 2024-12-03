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
    SYM,
    NUM,
    FUN,
    NAV,
    PNT,
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
    QMK22,
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
        return false;
        
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
    case QMK22:
        if (record->event.pressed) {
            register_code(KC_LALT);
            tap_code_delay(KC_P9, 10);
            tap_code_delay(KC_P6, 10);
            unregister_code(KC_LALT);
        }
        break;
    case LT(0,KC_T):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(SWIN(KC_Z)); 
                return false;
            }
            return true;
    }
    return true;
};


// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LAYER_BASE] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       KC_ESC, LT(PNT, KC_Q), KC_W, KC_E, KC_R, LT(0, KC_T),   KC_Y, KC_U,        KC_I,        KC_O,        LT(PNT, KC_P),   KC_LBRC,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
KC_TAB,LT(SYM,KC_A),ALT_T(KC_S),SFT_T(KC_D),CTL_T(KC_F),KC_G,  KC_H, CTL_T(KC_J), SFT_T(KC_K), ALT_T(KC_L), LT(SYM,KC_SCLN), KC_QUOT,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
  G(KC_SPC),  GUI_T(KC_Z), KC_X,  KC_C, LT(NUM, KC_V),  KC_B,  KC_N, KC_M,        KC_COMM,     KC_DOT,      GUI_T(KC_GRV),   KC_RBRC,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                         QMK12,  LT(NUM, KC_SPC), LT(NAV,KC_ENT),   LT(FUN,KC_BSPC),  QMK13
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [SYM] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       XXXXXXX, QMK1,    QMK19,   QMK20,   QMK11,  KC_PERC,     QMK22, QMK9, QMK18,   QMK21,   QMK15,   XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX, _______, KC_PPLS, KC_PMNS, KC_EQL, QMK2,        QMK8,  QMK5, KC_LPRN, KC_RPRN, _______, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX, KC_EXLM, KC_PSLS, KC_PAST, QMK4,   KC_UNDS,     QMK14, QMK3, QMK16,   QMK17,   QMK10,   XXXXXXX,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  QMK6, XXXXXXX, _______,    XXXXXXX, QMK7
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [NUM] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    KC_PPLS,  KC_4,  KC_5,  KC_6, KC_PMNS,  XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX, XXXXXXX, KC_LALT, KC_LSFT, KC_LCTL, XXXXXXX,    XXXXXXX,  KC_0,  KC_1,  KC_2, KC_3,     XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX, KC_LGUI, XXXXXXX, KC_LCTL, _______, XXXXXXX,    KC_PSLS,  KC_9,  KC_8,  KC_7, KC_PAST , XXXXXXX,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  _______, _______, KC_ENT,     KC_BSPC, _______
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),
  [FUN] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    KC_F12, KC_F4,   KC_F5,  KC_F6, XXXXXXX,  XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX, XXXXXXX, KC_LALT, KC_LSFT, KC_LCTL, XXXXXXX,    KC_F11, XXXXXXX, KC_F1,  KC_F2, KC_F3,    XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX, KC_LGUI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    KC_F10, KC_F9,   KC_F8,  KC_F7, XXXXXXX,  XXXXXXX,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  XXXXXXX, XXXXXXX, XXXXXXX,    _______, XXXXXXX
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),
  [NAV] = LAYOUT(
   // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       _______, KC_F1,   KC_F3,   KC_F5,   KC_F9,   XXXXXXX,   XXXXXXX,   KC_HOME, KC_PGUP, KC_PGDN, KC_END,  XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX, KC_F2,   KC_LALT, KC_LSFT, KC_LCTL, KC_DEL,    C(KC_MINS), KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, C(S(KC_MINS)),
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX, KC_LGUI, KC_F12,  KC_F11,  KC_F10,  KC_BSPC,   XXXXXXX, C(KC_LEFT), C(KC_UP), C(KC_DOWN), C(KC_RGHT), XXXXXXX,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  XXXXXXX, XXXXXXX, _______,    XXXXXXX, XXXXXXX
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),
  [PNT] = LAYOUT(
   // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       _______, _______, DRGSCRL, SNIPING, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, SNIPING, DRGSCRL, _______, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX, XXXXXXX, KC_LALT, KC_LSFT, KC_LCTL, XXXXXXX,    XXXXXXX, KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  KC_BTN1, KC_BTN3, KC_BTN2,    KC_BTN2, KC_BTN1
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),
};
// clang-format on
