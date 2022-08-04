# ESP32-VSC-DVD-STEPPER
## What does it do?
This simple piece of code controls a small stepper motor you can find in a DVD or CD player.

## partlist:
- ESP32 WiFi and Bluetooth Board - CP2102 [NL](https://www.tinytronics.nl/shop/en/development-boards/microcontroller-boards/with-wi-fi/esp32-wifi-and-bluetooth-board-cp2102)  [AliExpress](https://www.aliexpress.com/wholesale?catId=0&initiative_id=AS_20220804005026&isPremium=y&SearchText=esp32+development+board&spm=a2g0o.productlist.1000002.0)
- Easy Driver Stepper Motor Driver [NL](https://www.tinytronics.nl/shop/en/development-boards/microcontroller-boards/with-wi-fi/esp32-wifi-and-bluetooth-board-cp2102) [Sparkfun](https://www.sparkfun.com/products/12779) [AliExpress](https://www.aliexpress.com/wholesale?catId=0&initiative_id=SB_20220804005024&isPremium=y&SearchText=A3967+EasyDriver+&spm=a2g0o.productlist.1000002.0)
- External power supply [NL](https://www.tinytronics.nl/shop/en/power/power-supplies/12v/12v-1a-adapter-with-dc-jack) [Sparkfun](https://www.sparkfun.com/products/15313)
- Old DVD player

## How to make it work;
1. Open the DVD player and remove the tiny stepper motor. Solder some dupont wires to the motor. Be sure to dicover the coil-sets on the stepper motor. If two of the outputs on the motor measure no resistance you found a coil-set.
![DVD motor](/assets/images/DVD-motor.jpg)

2. Before connecting the dupont wires prepare the easydriver to be compatible with an ESP32 be sure to connect the solder "jumper" on the easydriver.
![close up](/assets/images/3-5V.png)

3. Connect the ESP32 to the Easydriver stepper driver.
![FRITZINGG](/assets/images/fritz.png)

4. Load the software in this repository
5. Enjoy :zany_face:

