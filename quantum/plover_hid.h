#pragma once

#define PLOVER_HID_SIMPLE_REPORT_SIZE 9
void plover_hid_send(uint8_t data[PLOVER_HID_SIMPLE_REPORT_SIZE]);
