/* Copyright 2022 Clickety Split Ltd.
 *                https://clicketysplit.ca
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

#ifdef TAPPING_TERM
    #undef TAPPING_TERM

    #define IGNORE_MOD_TAP_INTERRUPT
    #define TAPPING_FORCE_HOLD
    #define TAPPING_TERM 150
#endif


// If rotary encoders are used, and they require more or less resolution/sensitivity
// you may try increasing or decreasing the value.
#define ENCODER_RESOLUTIONS { 2 }
#define ENCODER_RESOLUTIONS_RIGHT { 2 }


#ifdef RGB_MATRIX_ENABLE

    #define RGB_MATRIX_KEYPRESSES               // reacts to keypresses
//  #define RGB_MATRIX_KEYRELEASES              // reacts to keyreleases (instead of keypresses)
//  #define RGB_DISABLE_AFTER_TIMEOUT 0         // number of ticks to wait until disabling effects
    #define RGB_DISABLE_WHEN_USB_SUSPENDED      // turn off effects when suspended
    #define RGB_MATRIX_FRAMEBUFFER_EFFECTS
    
    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 115   // limits maximum brightness of LEDs to 150 out of 255.
                                                // Higher may cause the controller to crash.
    #define RGB_MATRIX_HUE_STEP 10
    #define RGB_MATRIX_SAT_STEP 10
    #define RGB_MATRIX_VAL_STEP 10
    #define RGB_MATRIX_SPD_STEP 10


/* By default, the RGB_MATRIX effects are disabled.
 * 
 * For a complete list, visit: https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects.
 * Some of the effects take up a lot of memory, so you may need to manage the number of
 * effects that are loaded at any given time.
*/
    #define DISABLE_RGB_MATRIX_ALPHAS_MODS
    #define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN                  // Enabled
    #define DISABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
    #define DISABLE_RGB_MATRIX_BREATHING
    #define DISABLE_RGB_MATRIX_BAND_SAT
    #define DISABLE_RGB_MATRIX_BAND_VAL
    #define DISABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
    #define DISABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
    #define DISABLE_RGB_MATRIX_BAND_SPIRAL_SAT
    #define DISABLE_RGB_MATRIX_BAND_SPIRAL_VAL
    #define DISABLE_RGB_MATRIX_CYCLE_ALL
    #define DISABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
    #define DISABLE_RGB_MATRIX_CYCLE_UP_DOWN
    #define DISABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
    #define DISABLE_RGB_MATRIX_CYCLE_OUT_IN
    #define DISABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
    #define DISABLE_RGB_MATRIX_CYCLE_PINWHEEL
    #define DISABLE_RGB_MATRIX_CYCLE_SPIRAL
    #define DISABLE_RGB_MATRIX_DUAL_BEACON
    #define DISABLE_RGB_MATRIX_RAINBOW_BEACON
    #define DISABLE_RGB_MATRIX_RAINBOW_PINWHEELS
    #define DISABLE_RGB_MATRIX_RAINDROPS
    #define DISABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
    #define DISABLE_RGB_MATRIX_HUE_BREATHING
    #define DISABLE_RGB_MATRIX_HUE_PENDULUM
    #define DISABLE_RGB_MATRIX_HUE_WAVE
    #define DISABLE_RGB_MATRIX_PIXEL_FRACTAL
    #define DISABLE_RGB_MATRIX_PIXEL_FLOW
    #define DISABLE_RGB_MATRIX_PIXEL_RAIN

    // Framebuffer Defines
    // These modes also require the RGB_MATRIX_FRAMEBUFFER_EFFECTS
    #define DISABLE_RGB_MATRIX_TYPING_HEATMAP
    #define DISABLE_RGB_MATRIX_DIGITAL_RAIN

    // These modes also require the RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES
    #define DISABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
    #define DISABLE_RGB_MATRIX_SOLID_REACTIVE
    #define DISABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
    #define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
    #define DISABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
    #define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS              // Enabled
    #define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
    #define ENABLE_RGB_MATRIX_SPLASH                            // Enabled
    #define DISABLE_RGB_MATRIX_MULTISPLASH
    #define DISABLE_RGB_MATRIX_SOLID_SPLASH
    #define DISABLE_RGB_MATRIX_SOLID_MULTISPLASH
    
#endif