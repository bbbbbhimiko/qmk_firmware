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
    k00, \
    k11, \
    k22, \
    k33, \
    k44, \
    k55, \
    k66, \
    k77, \
    k88 \
) { \
    { k00, k22, k44, k66, k88 }, \
    { k11, k33, k55, k77 } \
}
