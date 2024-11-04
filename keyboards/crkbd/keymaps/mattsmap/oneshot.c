/* Copyright 2022 @radiomime
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
#include "oneshot.h"

// TODO: add good links to my readme
// TODO: get oleds working
// https://github.com/qmk/qmk_firmware/blob/master/docs/custom_quantum_functions.md#programming-the-behavior-of-any-keycode-idprogramming-the-behavior-of-any-keycode
void update_oneshot(oneshot_state *state,    // oneshot key state (enum defined in oneshot.h)
                    uint16_t       mod,      // modifier to press (eg, kc_lsft)
                    uint16_t       trigger,  // keycode that triggers mod
                    bool           lockable, // can this key be locked (e.g. shift -> caps lock on two taps)
                    uint16_t       keycode,  // keycode registered (pressed or released by user)
                    keyrecord_t   *record    // action taken
) {
    if (keycode == trigger) {
        if (record->event.pressed) {
            switch (*state) {
                // case os_down_locked:
                case os_up_unqueued:
                    // register keydown event for mod
                    *state = os_down_unused;
                    register_code(mod);
                    break;
                case os_up_queued:
                    if (lockable) {
                        *state = os_down_locked;
                    } else {
                        *state = os_down_unused;
                    }
                    break;
                case os_down_locked:
                    // unlock if it is locked, unregister the mod so it doesn't fire on the following keydown
                    *state = os_up_unqueued;
                    unregister_code(mod);
                    break;
                default:
                    *state = os_down_unused;
                    break;
            }
            // *state = os_down_unused;
        } else {
            // oneshot key -> keyup
            switch (*state) {
                case os_down_unused:
                    // If we didn't use the mod while trigger was held, queue it.
                    *state = os_up_queued;
                    break;
                case os_down_used:
                    // If we did use the mod while trigger was held, unregister it.
                    *state = os_up_unqueued;
                    unregister_code(mod);
                    break;
                default:
                    break;
            }
        }
    } else {
        if (record->event.pressed) {
            if (is_oneshot_cancel_key(keycode) && *state != os_up_unqueued) {
                // Cancel oneshot on designated cancel keydown.
                *state = os_up_unqueued;
                unregister_code(mod);
            }
            if (!is_oneshot_ignored_key(keycode)) {
                switch (*state) {
                    case os_up_queued:
                        *state = os_up_queued_used;
                        break;
                    case os_up_queued_used:
                        *state = os_up_unqueued;
                        unregister_code(mod);
                        break;
                    default:
                        break;
                }
            }
        } else {
            if (!is_oneshot_ignored_key(keycode)) {
                // On non-ignored keyup, consider the oneshot used.
                switch (*state) {
                    case os_down_unused:
                        *state = os_down_used;
                        break;
                    case os_up_queued:
                        *state = os_up_unqueued;
                        unregister_code(mod);
                        break;
                    case os_up_queued_used:
                        *state = os_up_unqueued;
                        unregister_code(mod);
                        break;
                    default:
                        break;
                }
            }
        }
    }
}
