# QMK Steno Firmware

This repository is a fork of the [QMK firmware](https://github.com/qmk/qmk_firmware)
containing changes specific to hobbyist steno keyboards that are not currently
merged into upstream QMK:

- Support for protocols like [Plover HID](https://github.com/dnaq/plover-machine-hid)
- New keyboards, such as Ecosteno
- Optional behavior changes such as first-up chord send and chord repeat

See the [QMK firmware](https://github.com/qmk/qmk_firmware) repository and
documentation for more information on QMK itself.

## Keyboards Supported

| Keyboard     | Source                                                                                               | Binaries                                                                             |
| ------------ | ---------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------ |
| Georgi       | [`gboards/georgi`](https://github.com/openstenoproject/qmk/tree/main/keyboards/gboards/georgi)       |                                                                                      |
| Splitography | [`splitography`](https://github.com/openstenoproject/qmk/tree/main/keyboards/splitography)           |                                                                                      |
| The Uni (v2) | [`the_uni/pro_micro`](https://github.com/openstenoproject/qmk/tree/main/keyboards/the_uni/pro_micro) | [StenoKeyboards](https://github.com/petercpark/stenokeyboards-firmware)              |
| The Uni (v3) | [`the_uni/usb_c`](https://github.com/openstenoproject/qmk/tree/main/keyboards/the_uni/usb_c)         | [StenoKeyboards](https://github.com/petercpark/stenokeyboards-firmware)              |
| Ecosteno     | [`noll/ecosteno`](https://github.com/openstenoproject/qmk/tree/main/keyboards/noll/ecosteno)         | [Nolltronics](https://github.com/nkotech/EcoSteno-Firmware/tree/main/keyboards/noll) |
| Multisteno   |                                                                                                      | [Nolltronics](https://github.com/nkotech/EcoSteno-Firmware/tree/main/keyboards/noll) |
