/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include QMK_KEYBOARD_H
#include <stdio.h>


#include "oneshot.h"

// -----< layers >----- //
enum layers {
  // _QWERTY = 0,
  _QWERTY,
  _NUM,
  _SNM,
  _SYM,
  _GAME

    // _NAV,
    // _RSYM,
    // _LSYM,
    // _FUN,
    // _NUM,
    // _MED, 
    // _ALWAYS
};

enum keycodes {
    // Custom oneshot mod implementation with no timers.
    OS_SHFT = SAFE_RANGE,
    OS_CTRL,
    OS_ALT,
    OS_CMD,

    // SW_WIN,  // Switch to next window         (cmd-tab)
    // SW_LANG, // Switch to next input language (ctl-spc)
};

#define LA_NUM MO(_NUM)
#define LA_SNM MO(_SNM)
#define LA_SYM MO(_SYM)
#define LA_GAME TG(_GAME)
// #define LYR_NUM MO(_NUM)
// #define LYR_SNM MO(_SNM)
// #define LYR_SYM MO(_SYM)
// #define LYR_GAME TG(_GAME)

// -----< one_shot_keys >----- //
#define OS_LSFT OSM(MOD_LSFT)
#define OS_LGUI OSM(MOD_LGUI)
#define OS_LCTL OSM(MOD_LCTL)
#define OS_LALT OSM(MOD_LALT)


// -----< mod_tap_keys >----- //
/*
 * These are currently functioning by doing mod-tap keys. Alternatively, I could do one shot keys.
 */

// Left-hand home row mods
#define MT_A    LALT_T(KC_A)
#define MT_S    LGUI_T(KC_S)
#define MT_D    LCTL_T(KC_D)
#define MT_F    LSFT_T(KC_F)

// Right-hand home row mods
#define MT_J    RSFT_T(KC_J)
#define MT_K    RCTL_T(KC_K)
#define MT_L    RGUI_T(KC_L)
#define MT_SCLN LALT_T(KC_SCLN)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      OS_CTRL,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_RALT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       // KC_TAB,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
       KC_TAB,    MT_A,    MT_S,    MT_D,    MT_F,    KC_G,                         KC_H,    MT_J,    MT_K,    MT_L, MT_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      OS_SHFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          OS_LSFT,  KC_SPC, LA_NUM,    LA_SNM, KC_BSPC, KC_ENT
                                      //`--------------------------'  `--------------------------'

  ),

  // here is a Test Of My Super Cool UKJKJJJLLL::jjjjkk
  // Does This Work Pretty Good? I think I like it. YyyyyyyYyyyYYYyyyUiyiyfiiiIiiIiHOoOHOoHO

  [_NUM] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      OS_SHFT, OS_LALT, OS_LGUI, OS_LCTL, OS_LSFT, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, XXXXXXX, KC_RALT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      // KC_LCTL, OS_LSFT, OS_LALT, OS_LGUI, OS_LCTL,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_ESC,
      XXXXXXX,  OS_ALT,  OS_CMD, OS_CTRL, OS_SHFT,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_ESC,
      // XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, OS_SHFT,                      XXXXXXX, KC_PGDN, KC_PGUP, KC_VOLD, KC_VOLU, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          OS_LSFT,  KC_SPC, _______,    LA_SYM,  KC_DEL, KC_ENT
                                      //`--------------------------'  `--------------------------'
  ),

  [_SNM] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      OS_SHFT, OS_LALT, OS_LGUI, OS_LCTL, OS_LSFT, XXXXXXX,                      XXXXXXX, OS_LALT, OS_LGUI, OS_LCTL, OS_LSFT,  KC_DEL,
       // KC_TAB, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,  KC_GRV,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, OS_SHFT,                      XXXXXXX, XXXXXXX, XXXXXXX, KC_LCBR, KC_RCBR, KC_TILD,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          OS_LSFT,  KC_SPC, LA_SYM,    _______, KC_BSPC, KC_ENT
                                      //`--------------------------'  `--------------------------'
  ),

  [_SYM] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                        KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, KC_BSLS, KC_MINS,  KC_EQL, KC_PLUS, XXXXXXX,                     LA_GAME, KC_PIPE, KC_UNDS, KC_LBRC, KC_RBRC,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX,                      XXXXXXX, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          OS_LSFT,  KC_SPC, _______,    _______, KC_BSPC, KC_ENT
                                      //`--------------------------'  `--------------------------'
  ),

  [_GAME] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P, LA_GAME,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          OS_LSFT,  KC_SPC, LA_NUM,    LA_SNM, KC_BSPC, KC_ENT
                                      //`--------------------------'  `--------------------------'
  ),
};

// TODO: update is_oneshot_cancel_key
bool is_oneshot_cancel_key(uint16_t keycode) {
    switch (keycode) {
    // case KC_Q:
    // TODO: update these!
    // case LA_:
    case LA_SYM:
    case LA_SNM:
    case LA_NUM:
        return true;
    default:
        return false;
    }
}

// TODO: update is_oneshot_ignored_key
bool is_oneshot_ignored_key(uint16_t keycode) {
    switch (keycode) {
    // case LA_NAV:
    // case KC_LSFT:
    // case LYR_NUM:
    case LA_SYM:
    case LA_SNM:
    case LA_NUM:
    case OS_SHFT:
    case OS_CTRL:
    case OS_ALT:
    case OS_CMD:
        return true;
    default:
        return false;
    }
}

oneshot_state os_shft_state = os_up_unqueued;
oneshot_state os_ctrl_state = os_up_unqueued;
oneshot_state os_alt_state = os_up_unqueued;
oneshot_state os_cmd_state = os_up_unqueued;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    update_oneshot(
        &os_shft_state, KC_LSFT, OS_SHFT,
        keycode, record
    );
    update_oneshot(
        &os_ctrl_state, KC_LCTL, OS_CTRL,
        keycode, record
    );
    update_oneshot(
        &os_alt_state, KC_LALT, OS_ALT,
        keycode, record
    );
    update_oneshot(
        &os_cmd_state, KC_LCMD, OS_CMD,
        keycode, record
    );

    return true;
}

// fancy way to say when num and snm layer are pressed, so now is tye sym layer
// layer_state_t layer_state_set_user(layer_state_t state) {
//     return update_tri_layer_state(state, _NUM, _SNM, _SYM);
// }

/* OLD BELOW */
#ifdef OLED_DRIVER_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

#define L_BASE 0
#define L_LOWER 2
#define L_RAISE 4
#define L_ADJUST 8

void oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);
    switch (layer_state) {
        case L_BASE:
            oled_write_ln_P(PSTR("Default"), false);
            break;
        case L_LOWER:
            oled_write_ln_P(PSTR("Lower"), false);
            break;
        case L_RAISE:
            oled_write_ln_P(PSTR("Raise"), false);
            break;
        case L_ADJUST:
        case L_ADJUST|L_LOWER:
        case L_ADJUST|L_RAISE:
        case L_ADJUST|L_LOWER|L_RAISE:
            oled_write_ln_P(PSTR("Adjust"), false);
            break;
    }
}


char keylog_str[24] = {};

const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
  char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) { keycode = keycode & 0xFF; }
  if (keycode < 60) {
    name = code_to_name[keycode];
  }

  // update keylog
  snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
           record->event.key.row, record->event.key.col,
           keycode, name);
}

void oled_render_keylog(void) {
    oled_write(keylog_str, false);
}

void render_bootmagic_status(bool status) {
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
        oled_render_keylog();
    } else {
        oled_render_logo();
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    set_keylog(keycode, record);
  }
  return true;
}
#endif // OLED_DRIVER_ENABLE
