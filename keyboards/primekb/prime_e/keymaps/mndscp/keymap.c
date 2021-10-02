#include QMK_KEYBOARD_H

enum layers {
  L_COLEMAK,
  L_QWERTY,
  L_GAME,
  L_LOWER,
  L_RAISE,
  L_ADJUST,
  L_LEFT,
  L_RIGHT,
  L_BOTH,
  L_TAB,
  L_CTRL
};

enum combos {
  C_SMILEY_1,
  C_SMILEY_2,
  C_SMILEY_3,
  C_SMILEY_4,
  C_PAREN_L,
  C_PAREN_R,
  C_CURLY_L,
  C_CURLY_R,
  C_BRACE_L,
  C_BRACE_R,
  C_ANGLE_L,
  C_ANGLE_R
};

enum macros {
  COLEMAK = SAFE_RANGE,
  QWERTY,
  GAME,
  LOWER,
  RAISE,
  LEFT,
  RIGHT,
  AE,      // ä
  OE,      // ö
  UE,      // ü
  SZ,      // ß
  AE_CAP,  // Ä
  OE_CAP,  // Ö
  UE_CAP   // Ü
};

// Layer keys
#define LOW_SPC   LT(L_LOWER, KC_SPC)
#define LT_CTRL   LT(L_CTRL, KC_ESC)
#define LT_LEFT   LT(L_LEFT, KC_SPC)
#define LT_RGHT   LT(L_RIGHT, KC_SPC)
#define LT_SPC    LT(L_LEFT, KC_SPC)
#define LT_TAB    LT(L_TAB, KC_TAB)
#define BTH_SPC   LT(L_BOTH, KC_SPC)
#define BTH_TAB   LT(L_BOTH, KC_TAB)
#define RAI_ENT   LT(L_RAISE, KC_ENT)
#define RAI_SPC   LT(L_RAISE, KC_SPC)
#define SFT_0     SFT_T(KC_0)
#define SFT_CIR   SFT_T(KC_CIRC)
#define SFT_CLN   SFT_T(KC_COLN)
#define SFT_ENT   SFT_T(KC_ENT)
#define SFT_F22   SFT_T(KC_F22)
#define SFT_SPC   SFT_T(KC_SPC)
#define SFT_TAB   SFT_T(KC_TAB)
#define SFT_Z     SFT_T(KC_Z)
#define TG_ADJS   TG(L_ADJUST)

// Custom keys
#define _BCKTAB   S(KC_TAB)
#define _CLMK     DF(L_COLEMAK)
#define _COPY     C(KC_C)
#define _CUT      C(KC_X)
#define _DELWRD   C(KC_BSPC)
#define _LOCK     G(KC_L)
#define _PASTE    C(KC_V)
#define _QWERTY   DF(L_QWERTY)
#define _REDO     C(KC_Y)
#define _SELALL   C(KC_A)
#define _UNDO     C(KC_Z)

#define S_A       S(KC_A)
#define S_B       S(KC_B)
#define S_C       S(KC_C)
#define S_D       S(KC_D)
#define S_E       S(KC_E)
#define S_F       S(KC_F)
#define S_G       S(KC_G)
#define S_H       S(KC_H)
#define S_I       S(KC_I)
#define S_J       S(KC_J)
#define S_K       S(KC_K)
#define S_L       S(KC_L)
#define S_M       S(KC_M)
#define S_N       S(KC_N)
#define S_O       S(KC_O)
#define S_P       S(KC_P)
#define S_Q       S(KC_Q)
#define S_R       S(KC_R)
#define S_S       S(KC_S)
#define S_T       S(KC_T)
#define S_U       S(KC_U)
#define S_V       S(KC_V)
#define S_W       S(KC_W)
#define S_X       S(KC_X)
#define S_Y       S(KC_Y)
#define S_Z       S(KC_Z)

#define C_A       C(KC_A)
#define C_B       C(KC_B)
#define C_C       C(KC_C)
#define C_D       C(KC_D)
#define C_E       C(KC_E)
#define C_F       C(KC_F)
#define C_G       C(KC_G)
#define C_H       C(KC_H)
#define C_Q       C(KC_Q)
#define C_R       C(KC_R)
#define C_S       C(KC_S)
#define C_T       C(KC_T)
#define C_V       C(KC_V)
#define C_W       C(KC_W)
#define C_X       C(KC_X)
#define C_Y       C(KC_Y)
#define C_Z       C(KC_Z)
#define C_0       C(KC_0)
#define C_BSPC    C(KC_BSPC)
#define C_COMM    C(KC_COMM)
#define C_DOT     C(KC_DOT)
#define C_EQL     C(KC_EQL)
#define C_MINS    C(KC_MINS)

// Homerow mods Colemak
#define HA_4      LALT_T(KC_KP_4)
#define HC_5      LCTL_T(KC_KP_5)
#define HS_6      LSFT_T(KC_KP_6)
#define HA_R      LALT_T(KC_R)
#define HC_S      LCTL_T(KC_S)
#define HS_T      LSFT_T(KC_T)
#define HS_N      RSFT_T(KC_N)
#define HC_E      LCTL_T(KC_E)
#define HA_I      LALT_T(KC_I)

// Homerow mods QWERTY
#define HA_S      LALT_T(KC_S)
#define HC_D      LCTL_T(KC_D)
#define HS_F      LSFT_T(KC_F)
#define HS_J      RSFT_T(KC_J)
#define HC_K      LCTL_T(KC_K)
#define HA_L      LALT_T(KC_L)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [L_COLEMAK] = LAYOUT(
    LT_TAB,  KC_Q,    KC_L,    KC_C,    KC_M,    KC_K,    KC_J,    KC_F,    KC_U,    KC_Y,    KC_QUOT, KC_MINS, KC_BSPC,
    LT_CTRL, KC_A,    HA_R,    HC_S,    HS_T,    KC_G,    KC_P,    HS_N,    HC_E,    HA_I,    KC_O,    KC_ENT,
    SFT_Z,   KC_X,    KC_W,    KC_D,    KC_V,    KC_MPLY, KC_ESC,  KC_B,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_DEL,
    KC_LCTL, KC_LALT,                   LOWER,   LT_LEFT,          LT_RGHT, RAISE,                     KC_LEFT, KC_RGHT
  ),

  [L_LEFT] = LAYOUT(
    _______, KC_EQL,  KC_7,    KC_8,    KC_9,    KC_PLUS, _UNDO,   KC_HOME, KC_UP,   KC_END,  KC_DQUO, KC_UNDS, _______,
    KC_MINS, KC_0,    HA_4,    HC_5,    HS_6,    KC_PGUP, KC_BSPC, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,
    KC_COMM, KC_DOT,  KC_1,    KC_2,    KC_3,    KC_PGDN, _______, KC_DEL,  _PASTE,  _COPY,   _CUT,    _SELALL, _______,
    _______, _______,                   _______, _______,          BTH_TAB, _______,                   _______, _______
  ),

  [L_RIGHT] = LAYOUT(
    _______, KC_TILD, KC_AMPR, KC_ASTR, KC_QUES, KC_GRV,  _______, AE_CAP,  OE_CAP,  UE_CAP,  _______, _______, _______,
    _______, KC_MINS, KC_DLR,  KC_PERC, KC_CIRC, KC_COLN, _______, AE,      OE,      UE,      SZ,      _______,
    _______, KC_SCLN, KC_EXLM, KC_AT,   KC_HASH, KC_UNDS, COLEMAK, QWERTY,  KC_PLUS, KC_BSLS, KC_PIPE, _______, _______,
    _______, _______,                   _______, BTH_SPC,          _______, _______,                   _______, _______
  ),

  [L_BOTH] = LAYOUT(
    _______, S_Q,     S_L,     S_C,     S_M,     S_K,     S_J,     S_F,     S_U,     S_Y,     KC_DQUO, KC_UNDS, _______,
    _______, S_A,     S_R,     S_S,     S_T,     S_G,     S_P,     S_N,     S_E,     S_I,     S_O,     _______,
    _______, S_X,     S_W,     S_D,     S_V,     S_Z,     _______, S_B,     S_H,     KC_LABK, KC_RABK, KC_QUES, _______,
    _______, _______,                   _______, _______,          _______, _______,                   _______, _______
  ),

  [L_QWERTY] = LAYOUT(
    _______, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    _______, _______,
    _______, KC_A,    HA_S,    HC_D,    HS_F,    KC_G,    KC_H,    HS_J,    HC_K,    HA_L,    KC_QUOT, _______,
    _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    _______, KC_N,    KC_M,    _______, _______, _______, _______,
    _______, _______,                   _______, _______,          _______, _______,                   _______, _______
  ),

  [L_TAB] = LAYOUT(
    _______, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    _______, _______, _______, _______, _______, _______, _______,
    _______, KC_A,    HA_S,    HC_D,    HS_F,    _______, _______, _______, _______, _______, _______, _______,
    _______, KC_Z,    KC_X,    KC_C,    _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_PSCR,                   KC_F21,  SFT_F22,          _______, _______,                   _______, _______
  ),

  [L_CTRL] = LAYOUT(
    _______, C_Q,     C_W,     C_E,     C_R,     C_T,     C_Y,     _______, _______, _______, KC_DQUO, _______, C_BSPC,
    _______, C_A,     C_S,     C_D,     C_F,     C_G,     C_H,     _______, _______, _______, _______, _______,
    _______, C_Z,     C_X,     C_C,     C_V,     C_B,     _______, _______, _______, C_COMM,  C_DOT,   _______, C_0,
    _______, _______,                   KC_BSPC, SFT_ENT,          _______, _______,                   C_MINS,  C_EQL
  ),

  [L_LOWER] = LAYOUT(
    _______, KC_TILD, KC_SCLN, KC_EXLM, _______, _______, _______, KC_7,    KC_8,    KC_9,    _______, _______, _______,
    _______, KC_GRV,  KC_MINS, KC_QUES, KC_LSFT, _______, _______, KC_4,    KC_5,    KC_6,    KC_DOT,  _______,
    _______, _______, KC_BSLS, KC_PIPE, KC_SLSH, KC_UNDS, _______, _______, KC_1,    KC_2,    KC_3,    KC_COMM, _______,
    _______, _______,                   _______, _______,          KC_0,    _______,                   _______, _______
  ),

  [L_RAISE] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______,                   _______, _______,          _______, _______,                   _______, _______
  ),

  [L_ADJUST] = LAYOUT(
    RESET,   _______, KC_7,    KC_8,    KC_QUES, KC_TILD, _______, KC_F7,   KC_F8,   KC_F9,   KC_F11,  _______, _LOCK,
    _______, _______, KC_4,    KC_5,    KC_6,    KC_COLN, COLEMAK, KC_F4,   KC_F5,   KC_F6,   KC_F12,  _______,
    _______, _______, KC_1,    KC_2,    KC_3,    KC_SCLN, _______, QWERTY,  KC_F1,   KC_F2,   KC_F3,   KC_F10,  _______,
    _______, _______,                   _______, SFT_0,            _______, _______,                   _______, _______
  )

  // [L_TEMPLATE] = LAYOUT(
  //   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  //   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  //   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  //   _______, _______,                   _______, _______,          _______, _______,                   _______, _______
  // ),
};

// Wrap keypresses from layers in F keys for AHK
// ----------------------------------------------------------------------------

layer_state_t layer_state_set_user(layer_state_t state)
{
  static bool TAB_is_pressed;

  if (layer_state_cmp(state, L_TAB)) {
    register_code(KC_F14);
    TAB_is_pressed = true;
  } else {
    if (TAB_is_pressed) unregister_code(KC_F14);
    TAB_is_pressed = false;
  }

  static bool CTRL_is_pressed;

  if (layer_state_cmp(state, L_CTRL)) {
    register_code(KC_F13);
    CTRL_is_pressed = true;
  } else {
    if (CTRL_is_pressed) unregister_code(KC_F13);
    CTRL_is_pressed = false;
  }

  // state = update_tri_layer_state(state, L_LEFT, L_RIGHT, L_BOTH);

  return state;
};

// Different tapping terms for slow fingers
// ----------------------------------------------------------------------------

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case HA_I:
    case HA_R:
      return TAPPING_TERM + 85;
    case LT_CTRL:
      return 100;
    case LT_TAB:
      return 120;
    default:
      return TAPPING_TERM;
  }
};

// Turn off key repeat for index shift keys
// ----------------------------------------------------------------------------

bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case HS_N:
    case HS_T:
      return true;
    default:
      return false;
  }
};

// Combos
// ----------------------------------------------------------------------------

const uint16_t PROGMEM COMBO_SMILEY_1[] = {KC_L, KC_M, COMBO_END};      // :)
const uint16_t PROGMEM COMBO_SMILEY_2[] = {KC_W, KC_V, COMBO_END};      // :P
const uint16_t PROGMEM COMBO_SMILEY_3[] = {KC_F, KC_Y, COMBO_END};      // : D
const uint16_t PROGMEM COMBO_SMILEY_4[] = {KC_H, KC_DOT, COMBO_END};    // :D
const uint16_t PROGMEM COMBO_PAREN_L[]  = {KC_L, KC_C, COMBO_END};      // (
const uint16_t PROGMEM COMBO_PAREN_R[]  = {KC_C, KC_M, COMBO_END};      // )
const uint16_t PROGMEM COMBO_BRACE_L[]  = {KC_W, KC_D, COMBO_END};      // [
const uint16_t PROGMEM COMBO_BRACE_R[]  = {KC_D, KC_V, COMBO_END};      // ]
const uint16_t PROGMEM COMBO_CURLY_L[]  = {KC_F, KC_U, COMBO_END};      // {
const uint16_t PROGMEM COMBO_CURLY_R[]  = {KC_U, KC_Y, COMBO_END};      // }
const uint16_t PROGMEM COMBO_ANGLE_L[]  = {KC_H, KC_COMM, COMBO_END};   // <
const uint16_t PROGMEM COMBO_ANGLE_R[]  = {KC_COMM, KC_DOT, COMBO_END}; // >

combo_t key_combos[COMBO_COUNT] = {
  [C_SMILEY_1] = COMBO_ACTION(COMBO_SMILEY_1),
  [C_SMILEY_2] = COMBO_ACTION(COMBO_SMILEY_2),
  [C_SMILEY_3] = COMBO_ACTION(COMBO_SMILEY_3),
  [C_SMILEY_4] = COMBO_ACTION(COMBO_SMILEY_4),
  [C_PAREN_L]  = COMBO_ACTION(COMBO_PAREN_L),
  [C_PAREN_R]  = COMBO_ACTION(COMBO_PAREN_R),
  [C_BRACE_L]  = COMBO_ACTION(COMBO_BRACE_L),
  [C_BRACE_R]  = COMBO_ACTION(COMBO_BRACE_R),
  [C_CURLY_L]  = COMBO_ACTION(COMBO_CURLY_L),
  [C_CURLY_R]  = COMBO_ACTION(COMBO_CURLY_R),
  [C_ANGLE_L]  = COMBO_ACTION(COMBO_ANGLE_L),
  [C_ANGLE_R]  = COMBO_ACTION(COMBO_ANGLE_R)
};

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case C_SMILEY_1:
      if (pressed) {
        tap_code16(KC_COLN);
        tap_code16(KC_RPRN);
      }
      break;
    case C_SMILEY_2:
      if (pressed) {
        tap_code16(KC_COLN);
        tap_code16(S(KC_P));
      }
      break;
    case C_SMILEY_3:
      if (pressed) {
        tap_code16(KC_COLN);
        tap_code16(KC_SPC);
        tap_code16(S(KC_D));
      }
      break;
    case C_SMILEY_4:
      if (pressed) {
        tap_code16(KC_COLN);
        tap_code16(S(KC_D));
      }
      break;
    case C_PAREN_L:
      if (pressed) {
        tap_code16(KC_LPRN);
      }
      break;
    case C_PAREN_R:
      if (pressed) {
        tap_code16(KC_RPRN);
      }
      break;
    case C_BRACE_L:
      if (pressed) {
        tap_code16(KC_LBRC);
      }
      break;
    case C_BRACE_R:
      if (pressed) {
        tap_code16(KC_RBRC);
      }
      break;
    case C_CURLY_L:
      if (pressed) {
        tap_code16(KC_LCBR);
      }
      break;
    case C_CURLY_R:
      if (pressed) {
        tap_code16(KC_RCBR);
      }
      break;
    case C_ANGLE_L:
      if (pressed) {
        tap_code16(KC_LABK);
      }
      break;
    case C_ANGLE_R:
      if (pressed) {
        tap_code16(KC_RABK);
      }
      break;
  }
};

// ----------------------------------------------------------------------------

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case COLEMAK:
      if (record->event.pressed) {
        tap_code16(KC_HAEN);
        set_single_persistent_default_layer(L_COLEMAK);
      }
      return false;
      break;
    case QWERTY:
      if (record->event.pressed) {
        tap_code16(KC_HAEN);
        set_single_persistent_default_layer(L_QWERTY);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(L_LOWER);
        update_tri_layer(L_LOWER, L_RAISE, L_ADJUST);
      } else {
        layer_off(L_LOWER);
        update_tri_layer(L_LOWER, L_RAISE, L_ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(L_RAISE);
        update_tri_layer(L_LOWER, L_RAISE, L_ADJUST);
      } else {
        layer_off(L_RAISE);
        update_tri_layer(L_LOWER, L_RAISE, L_ADJUST);
      }
      return false;
      break;
    case AE:
      if (record->event.pressed) {
        register_code(KC_LALT);
        tap_code16(KC_KP_1);
        tap_code16(KC_KP_3);
        tap_code16(KC_KP_2);
        unregister_code(KC_LALT);
      }
      return false;
      break;
    case OE:
      if (record->event.pressed) {
        register_code(KC_LALT);
        tap_code16(KC_KP_1);
        tap_code16(KC_KP_4);
        tap_code16(KC_KP_8);
        unregister_code(KC_LALT);
      }
      return false;
      break;
    case UE:
      if (record->event.pressed) {
        register_code(KC_LALT);
        tap_code16(KC_KP_0);
        tap_code16(KC_KP_2);
        tap_code16(KC_KP_5);
        tap_code16(KC_KP_2);
        unregister_code(KC_LALT);
      }
      return false;
      break;
    case SZ:
      if (record->event.pressed) {
        register_code(KC_LALT);
        tap_code16(KC_KP_2);
        tap_code16(KC_KP_2);
        tap_code16(KC_KP_5);
        unregister_code(KC_LALT);
      }
      return false;
      break;
    case AE_CAP:
      if (record->event.pressed) {
        register_code(KC_LALT);
        tap_code16(KC_KP_0);
        tap_code16(KC_KP_1);
        tap_code16(KC_KP_9);
        tap_code16(KC_KP_6);
        unregister_code(KC_LALT);
      }
      return false;
      break;
    case OE_CAP:
      if (record->event.pressed) {
        register_code(KC_LALT);
        tap_code16(KC_KP_0);
        tap_code16(KC_KP_2);
        tap_code16(KC_KP_1);
        tap_code16(KC_KP_4);
        unregister_code(KC_LALT);
      }      return false;
      break;
    case UE_CAP:
      if (record->event.pressed) {
        register_code(KC_LALT);
        tap_code16(KC_KP_0);
        tap_code16(KC_KP_2);
        tap_code16(KC_KP_2);
        tap_code16(KC_KP_0);
        unregister_code(KC_LALT);
      }
      return false;
      break;
    }

  return true;
};

// Always enable numlock
// ----------------------------------------------------------------------------

void led_set_keymap(uint8_t usb_led) {
  if (!(usb_led & (1<<USB_LED_NUM_LOCK))) {
    register_code(KC_NUMLOCK);
    unregister_code(KC_NUMLOCK);
  }
}

// void matrix_init_user(void) {
//   // set CapsLock LED to output and low
//   setPinOutput(B1);
//   writePinLow(B1);
//   // set NumLock LED to output and low
//   setPinOutput(B2);
//   writePinLow(B2);
//   // set ScrollLock LED to output and low
//   setPinOutput(B3);
//   writePinLow(B3);
// }

// void matrix_scan_user(void) {

// }


// void led_set_user(uint8_t usb_led) {
//   if (IS_LED_ON(usb_led, USB_LED_NUM_LOCK)) {
//     writePinHigh(B2);
//   } else {
//     writePinLow(B2);
//   }
//   if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {
//     writePinHigh(B1);
//   } else {
//     writePinLow(B1);
//   }
// }

// //function for layer indicator LED
// layer_state_t layer_state_set_user(layer_state_t state)
// {
//   if (get_highest_layer(state) == 1) {
//     writePinHigh(B3);
// 	} else {
// 		writePinLow(B3);
//   }

//   return state;
// }
