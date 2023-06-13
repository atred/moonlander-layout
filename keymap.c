#include QMK_KEYBOARD_H

#include "features/achordion.h"

#define HOME_C LALT_T(KC_C)
#define HOME_R LGUI_T(KC_R)
#define HOME_S LSFT_T(KC_S)
#define HOME_T LCTL_T(KC_T)
#define HOME_N LCTL_T(KC_N)
#define HOME_E LSFT_T(KC_E)
#define HOME_I LGUI_T(KC_I)
#define HOME_A LALT_T(KC_A)

#define MO_NAV MO(_NAV)
#define MO_SYM MO(_SYM)
#define MO_FNC MO(_FUNC)
#define MO_BRD MO(_BOARD)

#define GUI_TAB G(KC_TAB)

enum layers {
    _BASE,
    _NAV,
    _SYM,
    _FUNC,
    _BOARD,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_moonlander(
        KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   ,           KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   ,
        KC_NO   , KC_W    , KC_L    , KC_Y    , KC_P    , KC_B    , KC_NO   ,           KC_NO   , KC_Z    , KC_F    , KC_O    , KC_U    , KC_GRV  , KC_NO   ,
        KC_NO   , HOME_C  , HOME_R  , HOME_S  , HOME_T  , KC_G    , KC_NO   ,           KC_NO   , KC_M    , HOME_N  , HOME_E  , HOME_I  , HOME_A  , KC_NO   ,
        KC_NO   , KC_Q    , KC_J    , KC_V    , KC_D    , KC_K    ,                               KC_X    , KC_H    , KC_SLSH , KC_COMM , KC_DOT  , KC_NO   ,
        KC_NO   , KC_NO   , KC_NO   , KC_NO   , MO_SYM  ,           KC_NO   ,           KC_NO   ,           MO_NAV  , KC_NO   , KC_NO   , KC_NO   , KC_NO   ,
                                                KC_BSPC , KC_NO   , KC_NO   ,           KC_NO   , KC_NO   , KC_SPC
    ),

    [_NAV] = LAYOUT_moonlander(
        _______ , _______ , _______ , _______ , _______ , _______ , _______ ,           _______ , _______ , _______ , _______ , _______ , _______ , _______ ,
        _______ , KC_VOLU , G(KC_9) , G(KC_5) , G(KC_4) , KC_MNXT , _______ ,           _______ , KC_MPLY , KC_PSTE , KC_COPY , KC_CUT  , KC_HOME , _______ ,
        _______ , GUI_TAB , G(KC_3) , G(KC_2) , G(KC_1) , G(KC_0) , _______ ,           _______ , KC_LEFT , KC_UP   , KC_DOWN , KC_RGHT , KC_ENT  , _______ ,
        _______ , KC_VOLD , G(KC_8) , G(KC_7) , G(KC_6) , KC_MPRV ,                               KC_INS  , KC_PGUP , KC_PGDN , KC_UNDO , KC_END  , _______ ,
        _______ , _______ , _______ , _______ , MO_FNC  ,           _______ ,           _______ ,           _______ , _______ , _______ , _______ , _______ ,
                                                KC_NO   , _______ , _______ ,           _______ , _______ , MO_BRD
    ),

    [_SYM] = LAYOUT_moonlander(
        _______ , _______ , _______ , _______ , _______ , _______ , _______ ,           _______ , _______ , _______ , _______ , _______ , _______ , _______ ,
        _______ , KC_EXLM , KC_AT   , KC_HASH , KC_LCBR , KC_LT   , _______ ,           _______ , KC_GT   , KC_RCBR , KC_DLR  , KC_AMPR , KC_BSLS , _______ ,
        _______ , KC_COLN , KC_SCLN , KC_ASTR , KC_LPRN , KC_LBRC , _______ ,           _______ , KC_RBRC , KC_RPRN , KC_MINS , KC_UNDS , KC_EQL  , _______ ,
        _______ , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    ,                               KC_6    , KC_7    , KC_8    , KC_9    , KC_0    , _______ ,
        _______ , _______ , _______ , _______ , _______ ,           _______ ,           _______ ,           MO_FNC  , _______ , _______ , _______ , _______ ,
                                                MO_BRD  , _______ , _______ ,           _______ , _______ , KC_NO
    ),

    [_FUNC] = LAYOUT_moonlander(
        _______ , _______ , _______ , _______ , _______ , _______ , _______ ,           _______ , _______ , _______ , _______ , _______ , _______ , _______ ,
        _______ , _______ , _______ , _______ , _______ , _______ , _______ ,           _______ , _______ , _______ , _______ , _______ , _______ , _______ ,
        _______ , _______ , _______ , _______ , KC_F11  , KC_F12  , _______ ,           _______ , _______ , _______ , _______ , _______ , _______ , _______ ,
        _______ , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   ,                               KC_F6   , KC_F7   , KC_F8   , KC_F9   , KC_F10  , _______ ,
        _______ , _______ , _______ , _______ , _______ ,           _______ ,           _______ ,           _______ , _______ , _______ , _______ , _______ ,
                                                KC_NO   , _______ , _______ ,           _______ , _______ , KC_NO
    ),

    [_BOARD] = LAYOUT_moonlander(
        _______ , _______ , _______ , _______ , _______ , _______ , _______ ,           _______ , _______ , _______ , _______ , _______ , _______ , _______ ,
        _______ , _______ , _______ , _______ , _______ , _______ , QK_BOOT ,           QK_BOOT , _______ , _______ , _______ , _______ , _______ , _______ ,
        _______ , _______ , _______ , _______ , _______ , _______ , _______ ,           _______ , _______ , _______ , _______ , _______ , _______ , _______ ,
        _______ , _______ , _______ , _______ , _______ , _______ ,                               _______ , _______ , _______ , _______ , _______ , _______ ,
        _______ , _______ , _______ , _______ , _______ ,           _______ ,           _______ ,           _______ , _______ , _______ , _______ , _______ ,
                                                _______ , _______ , _______ ,           _______ , _______ , _______
    ),

};
// clang-format on

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t* record) {
  switch (keycode) {
    // Increase the tapping term a little for slower ring and pinky fingers.
    case HOME_C:
    case HOME_R:
    case HOME_I:
    case HOME_A:
      return TAPPING_TERM + 15;

    default:
      return TAPPING_TERM;
  }
}

uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t* record) {
    switch (keycode) {
    case HOME_N:
        return QUICK_TAP_TERM;
    default:
        return 0;
    }
}

bool achordion_chord(uint16_t tap_hold_keycode,
                     keyrecord_t* tap_hold_record,
                     uint16_t other_keycode,
                     keyrecord_t* other_record) {
  return achordion_opposite_hands(tap_hold_record, other_record);
}

uint16_t achordion_timeout(uint16_t tap_hold_keycode) {
  return 1000;
}

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  if (!process_achordion(keycode, record)) { return false; }
  // Your macros ...

  return true;
}

void matrix_scan_user(void) {
  achordion_task();
}
