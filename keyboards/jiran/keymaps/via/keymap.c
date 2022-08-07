#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(
  //          ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
               KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  // ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐
      KC_LGUI, KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, RGUI_T(KC_RBRC),
  // └────────┼────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┼────────┘
               KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, RSFT_T(KC_QUOT),
  //          ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
               KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, RCTL_T(KC_BSLS),
  //          └────────┴────────┴────────┴────────┼────────┼────────┤                          ├────────┼────────┼────────┴────────┴────────┴────────┘
                                          MO(1),   KC_SPC,  KC_LALT,                     RALT_T(KC_ENT), KC_BSPC, MO(1)
                                  //     └────────┴────────┴────────┘                          └────────┴────────┴────────┘
  ),

  [1] = LAYOUT(
  //          ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
               KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_EQL,
  // ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐
      KC_F11,  KC_TAB,  RGB_HUI, KC_HOME, QK_BOOT,   RGB_SAI, RGB_VAI,                            KC_VOLU, KC_PGUP, QK_BOOT,   KC_HOME, KC_INS,  KC_DEL,  KC_F12,
  // └────────┼────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┼────────┘
               KC_LSFT, RGB_HUD, KC_LEFT, KC_UP,   KC_RGHT, RGB_VAD,                            KC_MUTE, KC_LEFT, KC_UP,   KC_RGHT, KC_PSCR, RSFT_T(KC_LSCR),
  //          ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
               KC_LCTL, RGB_M_B, KC_END,  KC_DOWN, RGB_SAD, RGB_TOG,                            KC_VOLD, KC_PGDN, KC_DOWN, KC_END,  KC_PAUS, RCTL_T(KC_LNUM),
  //          └────────┴────────┴────────┴────────┼────────┼────────┤                          ├────────┼────────┴────────┴────────┴────────┴────────┘
                                          KC_TRNS, KC_SPC,  KC_LALT,                     RALT_T(KC_ENT), KC_BSPC, KC_TRNS
                                    //   └────────┴────────┴────────┘                          └────────┴────────┴────────┘
  ),

  [2] = LAYOUT(
  //          ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
               _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  // ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐
      _______, _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______, _______,
  // └────────┼────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┼────────┘
               _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //          ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
               _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //          └────────┴────────┴────────┴────────┼────────┼────────┤                          ├────────┼────────┴────────┴────────┴────────┴────────┘
                                          _______, _______, _______,                            _______, _______, _______
                                    //   └────────┴────────┴────────┘                          └────────┴────────┴────────┘
  ),

  [3] = LAYOUT(
  //          ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
               _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  // ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐
      _______, _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______, _______,
  // └────────┼────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┼────────┘
               _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //          ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
               _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //          └────────┴────────┴────────┴────────┼────────┼────────┤                          ├────────┼────────┴────────┴────────┴────────┴────────┘
                                          _______, _______, _______,                            _______, _______, _______
                                    //   └────────┴────────┴────────┘                          └────────┴────────┴────────┘
  ),

};
