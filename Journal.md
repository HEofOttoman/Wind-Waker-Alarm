# Journal for the Wind Waker
## Initial plan
![design](designsketch.png)
For my alarm, I thought of a design like a macropad, able to stand up and lay horizontally at the same time. This idea is because of the simple reason that we will be getting keyswitches as buttons.


## PCB Design
![3dpcb](<3d pcb.png>)
I tried thinking of extra features to add. I thought of adding a USB-A port with a speaker to act as an mp3 player, though I decided against it in favor of time. At oone point I forgot that a buzzer needs to be connected to a digital pin, connecting both pins to GND & 3.3v instead.

## CAD
![plate](https://cdn.hackclub.com/019f726f-200d-7216-9b75-c56820f25147/image.png)
![base](https://cdn.hackclub.com/019f726f-235c-760d-86ce-5a5a57c7bf0b/image.png)
I really tried to get myself familiar with onshape, uhh never mind then. I don't like it. I decided to follow the tutorial for the hackpad, as it was essentially a macropad. I had to account for the battery shield, so I had to shape a bulge, or rather a support 'cavity'. I had a hard time figuring out onshape, but I somewhat got the hang of it

## Firmware
8 July 2026 - I had to download platformIO because I didn't want time untracked by hackatime, and also because it's much more convenient.
I had to deal with the continuous missing header error spam, solved by me opening the project in platformio, which opened the project folder in the workspace

I am trying to frame this part of the project as practice for my upcoming robotics exam, and things like switch-case statements, purposeful data types, and switchghosting prevention are being asked.