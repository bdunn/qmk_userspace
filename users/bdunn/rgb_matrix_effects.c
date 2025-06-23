#include QMK_KEYBOARD_H
#include "rgb_matrix.h"
#include "timer.h"

// Configurable options
#define FADE_TIMEOUT 2000 // milliseconds after layer switch before fade
#define FADE_SPEED   1    // how fast it fades per matrix scan (brightness step)

// Internal state
static uint16_t last_layer_change = 0;
static uint8_t brightness = 255;
static bool fading = false;

// Track current HSV color for fading
static uint16_t last_h = 0;
static uint8_t last_s = 0;
static uint8_t last_v = 255;

/**
 * Called automatically when layer changes.
 */
layer_state_t layer_state_set_user(layer_state_t state) {
    uint8_t layer = get_highest_layer(state);

    switch (layer) {
        case 0:
            last_h = 0;      // RED
            last_s = 255;
            last_v = 255;
            break;
        case 1:
            last_h = 21;     // YELLOW
            last_s = 255;
            last_v = 255;
            break;
        case 5:
            last_h = 85;     // GREEN
            last_s = 255;
            last_v = 255;
            break;
        case 6:
            last_h = 170;    // BLUE
            last_s = 255;
            last_v = 255;
            break;
        case 9:
            last_h = 255;    // Orange
            last_s = 191;
            last_v = 255;
            break;
        case 10:
            last_h = 302;    // Purple
            last_s = 100;
            last_v = 255;
            break;
        default:
            last_h = 0;      // WHITE (no hue, no saturation, max value)
            last_s = 0;
            last_v = 255;
            break;
    }

    rgb_matrix_set_speed_noeeprom(0);
    rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
    rgb_matrix_sethsv_noeeprom(last_h, last_s, last_v);

    last_layer_change = timer_read();
    brightness = 255;
    fading = false;

    return state;
}

/**
 * Runs continuously, fades after timeout.
 */
void matrix_scan_user(void) {
    if (!fading && timer_elapsed(last_layer_change) > FADE_TIMEOUT) {
        fading = true;
    }

    if (fading && brightness > 0) {
        brightness = (brightness > FADE_SPEED) ? (brightness - FADE_SPEED) : 0;

        uint8_t v = (last_v * brightness) / 255;
        rgb_matrix_sethsv_noeeprom(last_h, last_s, v);
    }
}
