#pragma once

#define PLOVER_HID_SIMPLE_REPORT_SIZE 9
void plover_hid_update(uint8_t button, bool pressed);
void plover_hid_task(void);
