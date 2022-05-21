#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_std_2x4(
        KC_0,   KC_1,   KC_2,   KC_3,
        KC_4,   KC_5,   KC_6,   KC_7
    )
};

const uint16_t PROGMEM test_combo[] = {KC_0, KC_4, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {COMBO_ACTION(test_combo)};


void process_combo_event(uint16_t combo_index, bool pressed) {

   if(pressed){
       backlight_toggle();
   }
   
}

static bool encoder_pressed;

void matrix_scan_user(void) {
  if (readPin(B4)) {
    encoder_pressed = false;
  } else {
    if (!encoder_pressed) {
      tap_code(KC_MUTE);
    }
    encoder_pressed = true;
  }
}


bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code_delay(KC_VOLU, 10);
        } else {
            tap_code_delay(KC_VOLD, 10);
        }
    } else if (index == 1){
        if (clockwise) {
            backlight_increase();
        } else {
            backlight_decrease();
        }
    }
    return false;
}