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

## Steno Protocols

### Serial (TX Bolt, Gemini PR)

The industry-standard TX Bolt and Gemini PR steno protocols are included in
upstream QMK, and [QMK's steno docs](https://docs.qmk.fm/#/feature_stenography)
go into more detail on how to set that up, but in summary:

Add the following definitions to your keymap's `rules.mk` file:

```
VIRTSER_ENABLE = yes
STENO_ENABLE = yes
```

And use the constants with the [`STN_` prefix](https://docs.qmk.fm/#/feature_stenography?id=keycode-reference)
to specify what steno key each key on your board should send. For example, the
base layer for the Uni looks as follows:

```c
#include "keymap_steno.h"

LAYOUT(
  STN_S1,  STN_TL,  STN_PL,  STN_HL,  STN_ST1,  STN_ST3,  STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR ,
  STN_S2,  STN_KL,  STN_WL,  STN_RL,  STN_ST2,  STN_ST4,  STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR ,
                    STN_N1,  STN_A,   STN_O,    STN_E,    STN_U,   STN_N2,
),
```

### Plover HID

The [Plover HID](https://github.com/dnaq/plover-machine-hid) protocol is an
in-development protocol that relies on the standard HID protocol rather than
USB serial, resulting in more customizability and a better user experience.

To use Plover HID, add the following definitions to your keymap's `rules.mk`:

```
STENO_ENABLE = no
PLOVER_HID_ENABLE = yes
```

The keycodes for Plover HID are the same as the _TX Bolt_ constants for serial,
but use the `PLV_` prefix instead of `STN_`:

```c
#include "keymap_plover_hid.h"

LAYOUT(
  PLV_SL,  PLV_TL,  PLV_PL,  PLV_HL,  PLV_STR,  PLV_STR,  PLV_FR,  PLV_PR,  PLV_LR,  PLV_TR,  PLV_DR ,
  PLV_SL,  PLV_KL,  PLV_WL,  PLV_RL,  PLV_STR,  PLV_STR,  PLV_RR,  PLV_BR,  PLV_GR,  PLV_SR,  PLV_ZR ,
                    PLV_NUM, PLV_A,   PLV_O,    PLV_E,    PLV_U,   PLV_NUM,
),
```
