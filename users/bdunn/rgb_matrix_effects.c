#include QMK_KEYBOARD_H
#include "rgb_matrix.h"
#include "timer.h"

// Configurable options
#define FADE_TIMEOUT 3000 // milliseconds after layer switch before fade
#define FADE_SPEED   1    // how fast it fades per matrix scan (brightness step)

// Internal state
static uint16_t last_layer_change = 0;
static uint8_t brightness = 255;
static bool fading = false;

/**
 * Called automatically when layer changes.
 */
layer_state_t layer_state_set_user(layer_state_t state) {
    uint8_t layer = get_highest_layer(state);

    fading = false;
    brightness = 255;
    last_layer_change = timer_read();

    // Set color immediately on layer change
    switch (layer) {
        case 1:
            rgb_matrix_set_color_all(255, 165, 0); // Orange
            break;
        case 2:
            rgb_matrix_set_color_all(0, 255, 0);   // Green
            break;
        case 3:
            rgb_matrix_set_color_all(0, 0, 255);   // Blue
            break;
        default:
            rgb_matrix_set_color_all(100, 100, 100); // Soft white
            break;
    }

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

        // Scale color down by brightness
        rgb_matrix_set_color_all(
            (brightness),     // Red
            (brightness),     // Green
            (brightness)      // Blue
        );
    }
}
