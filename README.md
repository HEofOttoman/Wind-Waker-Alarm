# Wind Waker Alarm
<!-- ![ideasketch](designsketch.png) -->
![assembly](https://cdn.hackclub.com/019f708d-03d7-7fab-abe8-6136cfd4587b/image.png)

A waker/alarm to wake me up that also can act as a macropad, including a rechargable battery and wireless capabilities.

This repository contains folders for the following:
- Schematics: Designs for the wiring (pcb?)
- Case: CAD models of the alarm
- Firmware: Firmware for the alarm clock


### Future Plans for a V2

- Reading music from USB
- Speaker/audio module to play the music
- Time from a real RTC
- Radio receiver


## Gallery
![ideasketch](designsketch.png)
![wiring schematic](schematic.png)
![pcb1](pcb1.png)
![3d pcb](<3d pcb.png>)

## BOM (TBC)
| Qty | Part Name                    | Source                                                                                                                                                                                                                                              | Price (AUD) |
|-----|------------------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|-------------|
| 1   | Lolin C3-Mini ESP32          | Provided in Kit                                                                                                                                                                                                                                     | -           |
| 1   | 2.5in TFT Display            | Provided in Kit                                                                                                                                                                                                                                     | -           |
| 12  | MX Switches                  | Provided in Kit                                                                                                                                                                                                                                     | -           |
| 1   | 3.3v Piezo Buzzer            | Provided in Kit                                                                                                                                                                                                                                     | -           |
| -   | Jumper cables                | Provided in Kit                                                                                                                                                                                                                                     | -           |
| 1   | WEMOS D1 Mini Battery Shield | [Aliexpress?](https://www.aliexpress.com/item/1005010742110580.html)                                                                                                                                                                                | $1.44       |
| 16  | Stackable Header Pins        | [core electronics](https://core-electronics.com.au/header-stackable-01x20-254mm-tht.html)                                                                                                                                                           | $0.90       |
| 1   | 3.7v LiPo Battery            | [Temu (polarity with shield check needed)](https://www.temu.com/au/302025-3-7v-150mah-lithium-polymer-battery-with-built-in-multi-protection-circuitry-a-compact-rechargeable-lithium-polymer-battery-suitable-for-dashcams-g-606328114217288.html) | $           |
| 1   | Custom PCB                   | JLCPCB                                                                                                                                                                                                                                              | ~$5         |

*Made with [Markdown tablesgenerator.com](https://www.tablesgenerator.com/markdown_tables)*

<!-- - 1x Lolin C3 Mini ESP 32
- 1x 2.25in TFT display
- 12x Keyboard Switches
- 1x 3.3V Piezo Buzzer
- Some Jumper Cables for wiring
- 1x WEMOS D1 Mini Battery Shield
- 16x Stackable header pins
- 1x 3.7v LiPo battery (check the polarity of the shield)
- PCB 93.620mm x 51.380mm
    - 4.380 -->

## References
- [Guide](https://blare.hackclub.com)!
- Several google searches
- Battery shield [docs?](https://www.wemos.cc/en/latest/d1_mini_shield/battery.html)

*Made for [blare](https://blare.hackclub.com)!*