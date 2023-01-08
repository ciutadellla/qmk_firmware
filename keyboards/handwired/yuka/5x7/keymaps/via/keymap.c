#include QMK_KEYBOARD_H
#define _QWERTY 0
#define _FN     1
#define _NUMPAD 2


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
        // left hand
        KC_1,       KC_2,    KC_3,    KC_4,    KC_5,  KC_6,
        KC_1,       KC_2,    KC_3,    KC_4,    KC_5,  KC_6,
        KC_1,       KC_2,    KC_3,    KC_4,    KC_5,  KC_6,
        KC_1,       KC_2,    KC_3,    KC_4,    KC_5,  KC_6,  KC_7,
        KC_6,       KC_7,    KC_8,    KC_9,
        // right hand
                    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_GRV,
                    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_MINS,
                    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,
        KC_RBRC,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,
        KC_6,       KC_7,    KC_8,    KC_9
    )
};
