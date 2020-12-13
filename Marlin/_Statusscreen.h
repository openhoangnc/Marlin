/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

#define CONFIG_EXAMPLES_DIR "Creality/Ender-3 Pro/CrealityV1"

/**
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * https://marlinfw.org/tools/u8glib/converter.html
 */

//
// Status Screen Logo bitmap
//
#define STATUS_LOGO_X            2
#define STATUS_LOGO_Y            5
#define STATUS_LOGO_WIDTH       39

const unsigned char status_logo_bmp[] PROGMEM = {
    B11111100, B00000001, B11000000, B00000000, B00011100,
    B01100100, B00000000, B11000000, B00000000, B00100110,
    B01101000, B00000000, B11000000, B00000000, B00000110,
    B01111011, B11100011, B11001110, B01111100, B00001100,
    B01101001, B10110110, B11011011, B00110100, B00000110,
    B01100001, B10110110, B11011111, B00110011, B10000110,
    B01100101, B10110110, B11011000, B00110000, B00100110,
    B11111111, B10111011, B11101111, B01111000, B00011100,
    B00000000, B00000000, B00000000, B00000000, B00000000,
    B00000000, B00000000, B00000000, B00000000, B00000000,
    B00000001, B11111011, B11110000, B01111000, B00000000,
    B00000000, B11001101, B10011000, B11001100, B00000000,
    B00000000, B11001101, B10011001, B10000110, B00000000,
    B00000000, B11001101, B11100001, B10000110, B00000000,
    B00000000, B11111001, B10110001, B10000110, B00000000,
    B00000000, B11000001, B10110001, B10000110, B00000000,
    B00000000, B11000001, B10011000, B11001100, B00000000,
    B00000001, B11100011, B11011100, B01111000, B00000000
};

//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM
#define STATUS_HEATERS_XSPACE   20
#if HOTENDS < 2
  #define STATUS_HEATERS_X      48
  #define STATUS_BED_X          72
#else
  #define STATUS_HEATERS_X      40
  #define STATUS_BED_X          80
#endif
