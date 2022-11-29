/*
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
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

#pragma once
#include "config_common.h"
#include "keymaps/mjr/config.h"

#define MATRIX_ROWS 8
#define MATRIX_COLS 6
#define RGBLIGHT_LIMIT_VAL 180
#define MATRIX_ROW_PINS { B5, F7, F6, B6 }
#define MATRIX_COL_PINS { B4, E6, C6, B1, B3, B2 }

#define DIODE_DIRECTION ROW2COL

#define RGB_DI_PIN D2
#define RGBLED_NUM 42
#define RGBLED_SPLIT { 21, 21 }
#define RGBLIGHT_ANIMATIONS

#define DEBOUNCE 5

#define SOFT_SERIAL_PIN D0

#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE
#define F_SCL 400000L
// #define MASTER_RIGHT

// RGB matrix support
#ifdef RGB_MATRIX_ENABLE
#    define SPLIT_TRANSPORT_MIRROR
#    define RGB_MATRIX_LED_COUNT 42
#    define RGB_MATRIX_SPLIT { 21, 21 }
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 50
#    define RGB_MATRIX_DEFAULT_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
#    define RGB_DISABLE_WHEN_USB_SUSPENDED
#    define RGB_MATRIX_KEYPRESSES
#endif
