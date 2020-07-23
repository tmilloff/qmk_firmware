#include QMK_KEYBOARD_H

// Tap Dance declarations
enum {
    TD_F12_RESET,
};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TD_F12_RESET] = ACTION_TAP_DANCE_DOUBLE(KC_F12, RESET),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_horizontal(
		KC_F9 , KC_F10 , KC_F11 , TD(TD_F12_RESET),
        KC_F5 , KC_F6, KC_F7, KC_F8,
        KC_F1 , KC_F2, KC_F3, KC_F4
    )
};
