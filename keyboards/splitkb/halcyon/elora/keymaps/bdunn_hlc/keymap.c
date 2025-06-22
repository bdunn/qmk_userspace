#include QMK_KEYBOARD_H
#include QMK_KEYBOARD_H

// Custom keycodes
enum custom_keycodes {
    VOICE_HOLD = SAFE_RANGE,
};

void keyboard_post_init_user(void) {
    rgb_matrix_enable();
}


// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * Base Layer: QWERTY
 *
 * ,-------------------------------------------.                              ,-------------------------------------------.
 * |  Esc   |   1  |   2  |   3  |   4  |   5  |                              |   6  |   7  |   8  |   9  |   0  |  Esc   |
 * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
 * |  Tab   |   Q  |   W  |   E  |   R  |   T  |                              |   Y  |   U  |   I  |   O  |   P  |  Bksp  |
 * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
 * |Ctrl/Esc|   A  |   S  |   D  |   F  |   G  |                              |   H  |   J  |   K  |   L  | ;  : |Ctrl/' "|
 * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  | [ {  |CapsLk|  |F-keys|  ] } |   N  |   M  | ,  < | . >  | /  ? | RShift |
 * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
 *                        |Adjust| LGUI | LAlt/| Space| Nav  |  | Sym  | Space| AltGr| RGUI | Menu |
 *                        |      |      | Enter|      |      |  |      |      |      |      |      |
 *                        `----------------------------------'  `----------------------------------'
 * ,-----------------------------------.                                              ,-----------------------------------.
 * | MUTE | ____ | _____ | ____ | ____ |                                              | MUTE | ____ | _____ | ____ | ____ |
 * `-----------------------------------'                                              `-----------------------------------'
 */
   [0] = LAYOUT_elora_hlc(
       KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,                                   KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,   KC_BSPC,
       KC_TAB,   KC_V,   KC_W,   KC_G,   KC_M,    KC_J,                                     KC_SCLN,   KC_DOT,   KC_QUOT,   KC_EQL,   KC_SLSH, KC_BSLS,
       KC_NO,  LGUI_T(KC_S), LALT_T(KC_N), LCTL_T(KC_T), LSFT_T(KC_H), KC_K,                KC_COMMA, RSFT_T(KC_A), RCTL_T(KC_E), RALT_T(KC_I), RGUI_T(KC_C), KC_Q,
       KC_NO,  KC_F,  KC_P,    KC_D,    KC_L,   KC_X,  KC_ESC, KC_Q,                       KC_Z, KC_DEL, KC_MINS,   KC_U,   KC_O,   KC_Y,   KC_B,   KC_Z,
                               KC_LALT, KC_LGUI,  KC_NO,  KC_R, MO(1),                     KC_ENT,  KC_BSPC, KC_SPC, KC_LGUI, KC_DEL,
       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                           KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
   ),


   [1] = LAYOUT_elora_hlc(
       KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,                                   KC_F7,    KC_F8,    KC_F9,    KC_F10,    KC_F11,   KC_F12,
              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,                                KC_LCBR,   KC_RCBR,   KC_MINS,   KC_EQL,   KC_HOME, KC_PGUP,
              KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                          KC_LEFT, KC_DOWN, KC_UP,  KC_RIGHT,  KC_END, KC_PGDN,
              TO(5),  KC_NO,  KC_NO,    KC_NO,    KC_NO,   KC_NO,  KC_ESC, KC_TRNS,                 TO(9), KC_NO, KC_LBRC,   KC_RBRC,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                      KC_TRNS, KC_TRNS,  KC_TRNS,  KC_NO, KC_TRNS,                KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
   ),

    [2] = LAYOUT_elora_hlc(
          KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                                   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,
                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,                                KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
                 KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                          KC_NO, KC_NO, KC_NO,  KC_NO,  KC_NO, KC_NO,
                 KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,   KC_NO,  KC_NO, KC_NO,                  KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                         KC_NO, KC_NO,  KC_NO,  KC_NO, KC_NO,                        KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO,
                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
    ),

    [3] = LAYOUT_elora_hlc(
              KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                                   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,
                     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,                                KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
                     KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                          KC_NO, KC_NO, KC_NO,  KC_NO,  KC_NO, KC_NO,
                     KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,   KC_NO,  KC_NO, KC_NO,                  KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                             KC_NO, KC_NO,  KC_NO,  KC_NO, KC_NO,                        KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO,
                     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
       ),

    [4] = LAYOUT_elora_hlc(
              KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                                   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,
                     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,                                KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
                     KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                          KC_NO, KC_NO, KC_NO,  KC_NO,  KC_NO, KC_NO,
                     KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,   KC_NO,  KC_NO, KC_NO,                  KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                             KC_NO, KC_NO,  KC_NO,  KC_NO, KC_NO,                        KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO,
                     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
       ),

    [5] = LAYOUT_elora_hlc(
                KC_1 ,  KC_2   ,  KC_3  ,   KC_4 ,   KC_5 ,    KC_6 ,                                        KC_7,   KC_8 ,   KC_9 ,  KC_0 , KC_GRV, KC_BSPC,
                KC_TAB  , KC_Q ,  KC_W   ,  KC_E  ,   KC_R ,   KC_T ,                                        KC_Y,   KC_U ,  KC_I ,   KC_O ,  KC_P , KC_BSLS,
                KC_LCTL , KC_A ,  KC_S   ,  KC_D  ,   KC_F ,   KC_G ,                                        KC_H,   KC_J ,  KC_K ,   KC_L ,KC_SCLN, KC_QUOT,
                KC_LSFT , KC_Z ,  KC_X   ,  KC_C  ,   KC_V ,   KC_B , KC_ESC, KC_NO,        KC_NO  , KC_NO,  KC_N,   KC_M ,KC_COMM, KC_DOT ,KC_SLSH, KC_RSFT,
                                            KC_LALT , KC_LGUI , MO(6), KC_SPC , KC_SPC,     KC_ENT  , KC_SPC ,KC_SPC, KC_RGUI, KC_DEL,
                KC_MUTE, KC_NO,  KC_NO, KC_NO, KC_NO,                                                                KC_MUTE, KC_NO, KC_NO, KC_NO, KC_NO
       ),

    [6] = LAYOUT_elora_hlc(
           KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,                                   KC_F7,    KC_F8,    KC_F9,    KC_F10,    KC_F11,   KC_F12,
                  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,                                KC_LCBR,   KC_RCBR,   KC_MINUS,   KC_EQL,   KC_HOME, KC_PGUP,
                  KC_LCTL,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                          KC_LEFT, KC_DOWN, KC_UP,  KC_RIGHT,  KC_END, KC_PGDN,
                  KC_LSFT,  KC_NO,  KC_NO,    KC_NO,    KC_NO,   KC_NO,  KC_ESC, TO(0),                 TO(9), KC_NO, KC_LBRC,   KC_RBRC,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                          KC_TRNS, KC_TRNS,  KC_TRNS,  KC_NO, KC_TRNS,                KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
       ),

    [7] = LAYOUT_elora_hlc(
                  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                                   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,
                         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,                                KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
                         KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                          KC_NO, KC_NO, KC_NO,  KC_NO,  KC_NO, KC_NO,
                         KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,   KC_NO,  KC_NO, KC_NO,                  KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                                 KC_NO, KC_NO,  KC_NO,  KC_NO, KC_NO,                        KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO,
                         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
           ),

    [8] = LAYOUT_elora_hlc(
                  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                                   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,
                         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,                                KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
                         KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                          KC_NO, KC_NO, KC_NO,  KC_NO,  KC_NO, KC_NO,
                         KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,   KC_NO,  KC_NO, KC_NO,                  KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                                 KC_NO, KC_NO,  KC_NO,  KC_NO, KC_NO,                        KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO,
                         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
           ),

    [9] = LAYOUT_elora_hlc(
                    KC_1 ,  KC_2   ,  KC_3  ,   KC_4 ,   KC_5 ,    KC_6 ,                                        KC_7,   KC_8 ,   KC_9 ,  KC_0 , KC_GRV, KC_BSPC,
                    KC_TAB  , KC_Q ,  KC_W   ,  KC_E  ,   KC_R ,   KC_T ,                                        KC_Y,   KC_U ,  KC_I ,   KC_O ,  KC_P , KC_BSLS,
                    KC_LCTL , KC_A ,  KC_S   ,  KC_D  ,   KC_F ,   KC_G ,                                        KC_H,   KC_J ,  KC_K ,   KC_L ,KC_SCLN, KC_QUOT,
                    KC_LSFT , KC_Z ,  KC_X   ,  KC_C  ,   KC_V ,   KC_B , KC_ESC, VOICE_HOLD,        KC_NO  , KC_NO,  KC_N,   KC_M ,KC_COMM, KC_DOT ,KC_SLSH, KC_RSFT,
                                                KC_LALT , KC_LGUI , MO(10), KC_SPC , LSFT(KC_SPC),     KC_ENT  , KC_SPC ,KC_SPC, KC_RGUI, KC_DEL,
                    KC_MUTE, KC_NO,  KC_NO, KC_NO, KC_NO,                                                                KC_MUTE, KC_NO, KC_NO, KC_NO, KC_NO
           ),

    [10] = LAYOUT_elora_hlc(
           KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,                                   KC_F7,    KC_F8,    KC_F9,    KC_F10,    KC_F11,   KC_F12,
                  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,                                KC_LCBR,   KC_RCBR,   KC_MINUS,   KC_EQL,   KC_HOME, KC_PGUP,
                  KC_LCTL,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                          KC_LEFT, KC_DOWN, KC_UP,  KC_RIGHT,  KC_END, KC_PGDN,
                  KC_LSFT,  KC_NO,  KC_NO,    KC_NO,    KC_NO,   KC_NO,  KC_ESC, KC_NO,                 TO(5), KC_NO, KC_LBRC,   KC_RBRC,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                          KC_TRNS, KC_TRNS,  KC_TRNS,  KC_NO, KC_TRNS,                KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
       ),




// /*
//  * Layer template
//  *
//  * ,-------------------------------------------.                              ,-------------------------------------------.
//  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
//  * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
//  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
//  * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
//  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
//  * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
//  * |        |      |      |      |      |      |      |      |  |      |      |      |      |      |      |      |        |
//  * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
//  *                        |      |      |      |      |      |  |      |      |      |      |      |
//  *                        |      |      |      |      |      |  |      |      |      |      |      |
//  *                        `----------------------------------'  `----------------------------------'
//  * ,-----------------------------------.                                              ,-----------------------------------.
//  * |      |      |       |      |      |                                              |      |      |       |      |      |
//  * `-----------------------------------'                                              `-----------------------------------'
//  */
//     [_LAYERINDEX] = LAYOUT_elora_hlc(
//       _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
//       _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
//       _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
//       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
//                                  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
//      _______, _______,  _______, _______, _______,                                                       _______, _______, _______, _______, _______
//     ),
//
};

// Process custom keycodes for press-and-hold behavior
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case VOICE_HOLD:
            if (record->event.pressed) {
                register_code(KC_LCTL);
                register_code(KC_LGUI);
                register_code(KC_SPC);
                rgblight_enable();  // just enable it
                rgblight_sethsv(0, 255, 255);  // solid red
            } else {
                unregister_code(KC_SPC);
                unregister_code(KC_LGUI);
                unregister_code(KC_LCTL);
                rgblight_disable(); // turns lighting off
            }
            return false;
    }
    return true;
}
