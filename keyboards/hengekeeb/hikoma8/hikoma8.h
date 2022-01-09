// Copyright 2022 bbbbbhimiko (@bbbbbhimiko)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    k00, k22, k44, k66, k88, \
    k11, k33, k55, k77 \
) { \
    { k00, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, }, \
    { KC_NO, k11, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, }, \
    { KC_NO, KC_NO, k22, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, }, \
    { KC_NO, KC_NO, KC_NO, k33, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, k44, KC_NO, KC_NO, KC_NO, KC_NO, }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k55, KC_NO, KC_NO, KC_NO, }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k66, KC_NO, KC_NO, }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k77, KC_NO, }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k88, } \
}
