#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: dvorak */
    KEYMAP(
        TAB, QUOT,COMM,DOT, P,   Y,   F,   G,   C,   R,   L,   BSPC,MACRO, \
        LCTL,A,   O,   E,   U,   I,   D,   H,   T,   N,   S,   ENT,     \
        LSFT,SCLN,Q,   J,   K,   X,   B,   M,   W,   V,   Z,             DEL, \
        CAPS,LGUI,LALT,ESC, SPC,      FN0, FN1, LEFT,DOWN,UP,RIGHT)
};
/*
    KEYMAP(
        TAB, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   BSPC,MACRO, \
        LCTL,LBRC, RBRC,SLASH,EQL,MINS,NUHS,BSLASH,QUOTE,TRNS,TRNS,   ENT,     \
        LSFT,F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10,      DEL, \
        CAPS,LGUI,LALT,ESC, SPC,      FN0, FN1, LEFT,DOWN,UP,RIGHT),

    KEYMAP(
        TAB, KP_EXCLAMATION, KP_ATMARK, 0, 0, KP_PERC, KP_HAT, 0, PAST, KP_RPAREN,KP_LPAREN, BSPC,0, \
        LCTL,LBRC,RBRC,0,PPLS,0, GRAVE,BSLASH, QUOT, TRNS,TRNS,   ENT,  \
        LSFT,INS, HOME,PGUP,PGDN,END,PSCR, F11,  F12,TRNS,TRNS,      DEL, \
        CAPS,LGUI,LALT,ESC, SPC,      FN0, FN1, LEFT,DOWN,UP,RIGHT)
};*/

const action_t PROGMEM fn_actions[] = {
//    [0] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
//    [1] = ACTION_LAYER_MOMENTARY(2)  // to Fn overlay
};
