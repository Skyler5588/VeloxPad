// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    DESIGN,
    CHEM
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌──────┬───────┬───────┬───────┐
     * │ Save │  copy │ paste │ Cut   │
     * ├──────┼───────┼───────┼───────┤
     * │Alt+Tb│ Undo  │ PrSc  │ l swi │
     * ├──────┼───────┼───────┼───────┤
     */
    [DESIGN] = LAYOUT(
        C(KC_S),   KC_COPY,   KC_PASTE,   KC_CUT,
        A(KC_TAB),   KC_UNDO,   KC_PRINT_SCREEN,   TG(CHEM)
    ),

    /*
     * ┌──────┬───────┬───────┬───────┐
     * │ Save │  copy │ paste │ Cut   │
     * ├──────┼───────┼───────┼───────┤
     * │ Sub- │ Sub+  │ Undo  │ l swi │
     * ├──────┼───────┼───────┼───────┤
     */    
    [CHEM] = LAYOUT(
        C(KC_S),   KC_COPY,   KC_PASTE,   KC_CUT,
        C(S(KC_MINS)),  C(S(KC_EQL)),   KC_UNDO,   TG(DESIGN)
    )

};
