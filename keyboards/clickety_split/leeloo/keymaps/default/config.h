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
// #define ENCODER_RESOLUTION 2
