// Copyright 2022 bbbbbhimiko (@bbbbbhimiko)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _0,_1,_2, _3,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_0] = LAYOUT(
        KC_H,KC_I,KC_M,KC_I,KC_K,KC_O,KC_1,KC_3,KC_5\
    ),
    [_1] = LAYOUT(
        KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9\
    ),
    [_2] = LAYOUT(
        KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9\
    ),
    [_3] = LAYOUT(
        KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9\
    )
};
