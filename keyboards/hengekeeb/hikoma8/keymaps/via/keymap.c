// Copyright 2022 bbbbbhimiko (@bbbbbhimiko)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _0,_A,_B,_C,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_0] = LAYOUT(
        KC_H,KC_M,KC_K,KC_1,KC_5,\
        KC_1,KC_I,KC_O,KC_3\
    ),
    [_A] = LAYOUT(
        KC_H,KC_M,KC_K,KC_1,KC_5,\
        KC_1,KC_I,KC_O,KC_3\
    ),
    [_B] = LAYOUT(
        KC_H,KC_M,KC_K,KC_1,KC_5,\
        KC_1,KC_I,KC_O,KC_3\
    ),
    [_C] = LAYOUT(
        KC_H,KC_M,KC_K,KC_1,KC_5,\
        KC_1,KC_I,KC_O,KC_3\
    )
};
