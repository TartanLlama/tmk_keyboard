#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: dvorak */
    KEYMAP_ANSI(
        TAB, QUOT,COMM,DOT, P,   Y,   F,   G,   C,   R,   L,   BSPC,MACRO \
        LCTL,A,   O,   E,   U,   I,   D,   H,   T,   N,   S,   ENT        \
        LSFT,SCLN,Q,   J,   K,   X,   B,   M,   W,   V,   Z,             DEL, \
        CAPS,LGUI,LALT,ESC, SPC,      FN0, FN1, LEFT,DOWN,UP,RIGHT),

    /* 1: Raise */
    KEYMAP_ANSI(
        TAB, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   BSPC,MACRO \
        LCTL,[,   ],   /,   =,   -,   #,   \,   `,TRNS,TRNS,   ENT        \
        LSFT,F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10,      DEL, \
        CAPS,LGUI,LALT,ESC, SPC,      FN0, FN1, LEFT,DOWN,UP,RIGHT),

    /* 1: Lower */
    KEYMAP_ANSI(
        TAB, !,   @,   £,   $,   %,   ^,   &,   *,   (,   ),   BSPC,MACRO \
        LCTL,{,   },   ?,   +,   _,   ~,   |,   `,   TRNS,TRNS,   ENT      \
        LSFT,INS, HOME,PGUP,PGDN,END,PSCR, F11,  F12,TRNS,TRNS,      DEL, \
        CAPS,LGUI,LALT,ESC, SPC,      FN0, FN1, LEFT,DOWN,UP,RIGHT),

const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
    [1] = ACTION_LAYER_MOMENTARY(2)  // to Fn overlay
};
