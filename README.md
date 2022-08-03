# ESP32-VSC-DVD-STEPPER
##What does it do?
This simple piece of code controls a small stepper motor you can find in a DVD or CD player.

##how does it work?
connect an ESP32 to an [easydriver](https://www.tinytronics.nl/shop/en/mechanics-and-actuators/motor-controllers-and-drivers/stepper-motor-controllers-and-drivers/a3967-easydriver-stepper-motor-controller) controller
(an ESP32 works with 3.3V signals. To prepare the easydriver to be compatible with an ESP32 be sure to connect the solder "jumper" on the easydriver)
![close up](/assets/images/3-5V.png)

Here is the connection diagram you can use:
![FRITZINGG](/assets/images/fritz.png)

Be sure to dicover the coil-sets on the stepper motor. This is important.
- [x] #739
- [ ] https://github.com/octo-org/octo-repo/issues/740
- [ ] Add delight to the experience when all tasks are complete :tada:

![gifanim](/assets/images/DVDmotor.mp4)
