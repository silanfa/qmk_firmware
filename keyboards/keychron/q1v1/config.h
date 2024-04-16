/* Copyright 2021 @ Keychron(https://www.keychron.com)
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

/* RGB Matrix Driver Configuration */
#define DRIVER_COUNT 2
#define DRIVER_ADDR_1 0b1010000
#define DRIVER_ADDR_2 0b1011111

/* DIP switch */
#define DIP_SWITCH_MATRIX_GRID  { {0,1} }

/* Disable DIP switch in matrix data */
#define MATRIX_MASKED

/* Disable RGB lighting when PC is in suspend */
#define RGB_DISABLE_WHEN_USB_SUSPENDED
#define RGBLIGHT_SLEEP

// RGB Matrix Animation modes. Explicitly enabled
// For full list of effects, see:
// https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYRELEASES

/* Factory test keys */
#define FN_KEY1 MO(1)
#define FN_KEY2 MO(3)
