#include "process_plover_hid.h" 
#include "keymap_plover_hid.h"
#include "plover_hid.h"

// Simple report consists of a single byte set to one
// followed by one bit for each of the 64 buttons defined
// in the report type.
static uint8_t report[PLOVER_HID_SIMPLE_REPORT_SIZE] = {1};

bool process_plover_hid(uint16_t keycode, keyrecord_t *record) {
    if (keycode < PLV__MIN || keycode > PLV__MAX) {
        return true;
    }
    keycode = keycode - PLV__MIN;
    if (record->event.pressed) {
        report[1 + keycode/8] |= (1 << (7 - (keycode % 8)));
    } else {
        report[1 + keycode/8] &= ~(1 << (7 - (keycode % 8)));
    }

    plover_hid_send(report);
    return false;
}
