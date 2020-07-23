#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xEEEF
#define PRODUCT_ID      0x2020
#define DEVICE_VER		0x0001
#define MANUFACTURER    Jason
#define PRODUCT         Function Macropad
#define DESCRIPTION     Function Macropad

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 4

/* key matrix pins */
#define MATRIX_ROW_PINS { C6, D4, D0 }
#define MATRIX_COL_PINS { D7, E6, B4, B5}
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define TAPPING_TERM 175
