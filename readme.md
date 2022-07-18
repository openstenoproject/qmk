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

- Georgi (`gboards/georgi`): [source](https://github.com/openstenoproject/qmk/tree/main/keyboards/gboards/georgi)
- Splitography (`splitography`): [source](https://github.com/openstenoproject/qmk/tree/main/keyboards/splitography)
- The Uni (`the_uni/pro_micro` for v2, `the_uni/usb_c` for v3): [source](https://github.com/openstenoproject/qmk/tree/main/keyboards/the_uni), [binary](https://github.com/petercpark/stenokeyboards-firmware)
- Ecosteno (`noll/ecosteno`): [source](https://github.com/openstenoproject/qmk/tree/main/keyboards/noll/ecosteno), [binary](https://github.com/nkotech/EcoSteno-Firmware/tree/main/keyboards/noll)
- Multisteno: [binary](https://github.com/nkotech/EcoSteno-Firmware/tree/main/keyboards/noll)
