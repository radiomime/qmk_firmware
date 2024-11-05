/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

//#define USE_MATRIX_I2C

//#define QUICK_TAP_TERM 0
//#define TAPPING_TERM 100

#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #define RGBLIGHT_EFFECT_SNAKE
    #define RGBLIGHT_EFFECT_KNIGHT
    #define RGBLIGHT_EFFECT_CHRISTMAS
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
    #define RGBLIGHT_EFFECT_RGB_TEST
    #define RGBLIGHT_EFFECT_ALTERNATING
    #define RGBLIGHT_EFFECT_TWINKLE
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif


// -----< combo count >----- //
#define COMBO_TERM 40
/*#define COMBO_COUNT 1*/
/*#define COMBO_COUNT 3*/

// -----< one shot >----- //
#define ONESHOT_TAP_TOGGLE 3  /* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TIMEOUT 60000  /* Time (in ms) before the one shot key is released */

// # -----------------------------------------------------------------------------------------
// # Everything below here was suggested by crkbd for dealing with oled and rgb matrix
// # -----------------------------------------------------------------------------------------
// #ifdef RGB_MATRIX_ENABLE
// #   define RGB_MATRIX_KEYPRESSES // reacts to keypresses
// // #   define RGB_MATRIX_KEYRELEASES // reacts to keyreleases (instead of keypresses)
// #   define RGB_MATRIX_SLEEP // turn off effects when suspended
// #   define RGB_MATRIX_FRAMEBUFFER_EFFECTS
// // #   define RGB_MATRIX_LED_PROCESS_LIMIT (RGB_MATRIX_LED_COUNT + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
// // #   define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
// #    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.
// #    define RGB_MATRIX_HUE_STEP 8
// #    define RGB_MATRIX_SAT_STEP 8
// #    define RGB_MATRIX_VAL_STEP 8
// #    define RGB_MATRIX_SPD_STEP 10
//
// /* Enable the animations you want/need.  You may need to enable only a small number of these because       *
//  * they take up a lot of space.  Enable and confirm that you can still successfully compile your firmware. */
// // RGB Matrix Animation modes. Explicitly enabled
// // For full list of effects, see:
// // https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
// #    define ENABLE_RGB_MATRIX_ALPHAS_MODS
// #    define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
// #    define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
// #    define ENABLE_RGB_MATRIX_BREATHING
// #    define ENABLE_RGB_MATRIX_BAND_SAT
// #    define ENABLE_RGB_MATRIX_BAND_VAL
// #    define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
// #    define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
// #    define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
// #    define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
// #    define ENABLE_RGB_MATRIX_CYCLE_ALL
// #    define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
// #    define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
// #    define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
// #    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
// #    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
// #    define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
// #    define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
// #    define ENABLE_RGB_MATRIX_DUAL_BEACON
// #    define ENABLE_RGB_MATRIX_RAINBOW_BEACON
// #    define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
// #    define ENABLE_RGB_MATRIX_RAINDROPS
// #    define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
// #    define ENABLE_RGB_MATRIX_HUE_BREATHING
// #    define ENABLE_RGB_MATRIX_HUE_PENDULUM
// #    define ENABLE_RGB_MATRIX_HUE_WAVE
// #    define ENABLE_RGB_MATRIX_PIXEL_RAIN
// #    define ENABLE_RGB_MATRIX_PIXEL_FLOW
// #    define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
// // enabled only if RGB_MATRIX_FRAMEBUFFER_EFFECTS is defined
// #    define ENABLE_RGB_MATRIX_TYPING_HEATMAP
// #    define ENABLE_RGB_MATRIX_DIGITAL_RAIN
// // enabled only of RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES is defined
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
// #    define ENABLE_RGB_MATRIX_SPLASH
// #    define ENABLE_RGB_MATRIX_MULTISPLASH
// #    define ENABLE_RGB_MATRIX_SOLID_SPLASH
// #    define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
// #endif

// # -----------------------------------------------------------------------------------------
// # Everything below here was my initial config, but I don't think most things are needed
// # -----------------------------------------------------------------------------------------
// /*
// This is the c configuration file for the keymap
//
// Copyright 2012 Jun Wako <wakojun@gmail.com>
// Copyright 2015 Jack Humbert
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
// */
//
// #pragma once
//
// //#define USE_MATRIX_I2C
//
// /* Select hand configuration */
//
// #define MASTER_LEFT
// /* #define MASTER_RIGHT */
// /* #define EE_HANDS */
//
// /* allow media controls */
// /* #define EXTRAKEY_ENABLE */
//
// #define USE_SERIAL_PD2
//
// // -----< oneshot configs >----- //
// #define ONESHOT_TAP_TOGGLE 3  /* Tapping this number of times holds the key until tapped once again. */
// #define ONESHOT_TIMEOUT 60000  /* Time (in ms) before the one shot key is released */
//
//
// // -----< combo count >----- //
// #define COMBO_TERM 40
// #define COMBO_COUNT 3
//
// // -----< home row mods >----- //
//
// // Configure the global tapping term (default: 200ms)
// #define TAPPING_TERM 200
//
// // Prevent normal rollover on alphas from accidentally triggering mods.
// /*#define IGNORE_MOD_TAP_INTERRUPT*/
//
// // Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
// // -> this can be hard for vim users
// // -> this is incompatable with ONESHOT_TAP_TOGGLE
// // -> https://precondition.github.io/home-row-mods#tapping-force-hold
// // #define TAPPING_FORCE_HOLD
//
// #ifdef RGBLIGHT_ENABLE
//     // #define RGBLIGHT_EFFECT_BREATHING
//     #define RGBLIGHT_EFFECT_RAINBOW_MOOD
//     // #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//     // #define RGBLIGHT_EFFECT_SNAKE
//     // #define RGBLIGHT_EFFECT_KNIGHT
//     // #define RGBLIGHT_EFFECT_CHRISTMAS
//     // #define RGBLIGHT_EFFECT_STATIC_GRADIENT
//     // #define RGBLIGHT_EFFECT_RGB_TEST
//     // #define RGBLIGHT_EFFECT_ALTERNATING
//     // #define RGBLIGHT_EFFECT_TWINKLE
//     #define RGBLIGHT_LIMIT_VAL 120
//     #define RGBLIGHT_HUE_STEP 10
//     #define RGBLIGHT_SAT_STEP 17
//     #define RGBLIGHT_VAL_STEP 17
// #endif
//
// #define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
