// Copyright 2022 irodrig1 (@irodrig1)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

// General config
#define MATRIX_ROWS 2
#define MATRIX_COLS 4

#define MATRIX_ROW_PINS { D7, E6}
#define MATRIX_COL_PINS { D1, D0, D4, C6 }


#define DIODE_DIRECTION COL2ROW


// Encoder config
#define ENCODERS_PAD_A { D3, F5 }
#define ENCODERS_PAD_B { F4, F6 }

#define ENCODER_RESOLUTIONS { 2, 2 }

// light
#define BACKLIGHT_PIN B6
#define BACKLIGHT_LEVELS 31

// COMBO 
#define COMBO_COUNT 1