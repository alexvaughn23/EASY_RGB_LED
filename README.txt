# EASY_RGB_LED
This Arduino Program provides an easy way to add multiple color cues to your project, giving you the versatility to light multiple RGB lights with different colors simultaneously using very little code.

Special Thanks to everyone involved in making this possible.
Created by Alexander Vaughn
Updated: 07/31/2018
********************************************************

Re: Turning On Multiple RGB LEDs at the Same Time With Different Colors

NOTE:
This IS NOT for those using a shield or addressable LEDs. This is only for those who need to light RGB LEDs connected directly to the Arduino. If that's you, then keep reading.

Typically, you'd need to set up each LED individually and then when it comes to changing colors you'd need to analogWrite each pin for each LED. With all those numbers floating around it can get confusing even with comments to help. So I found a slightly better way.

In the attached file, all you'll need to do is Select the LED you want to turn on and Choose the Color. Cutting it off is the same way. Choose what LED you wish to turn off and tell it you want it off. That looks something like this...

ColorExecute(1, Orange);
delay(1000);
ColorExecute(1, Off);

To change Multiple LEDs "simultaneously" after 2 seconds, it looks like this....

ColorExecute(1, Orange);
ColorExecute(2, Purple);
ColorExecute(3, Cyan);
delay(2000);
ColorExecute(1, Blue);
ColorExecute(2, Blue);
ColorExecute(3, Blue);

Short and simple, right!? This program works with up to 3 LEDs and it's set to work with an Arduino Uno. I've added a few extra lines so you can incorporate more LEDs easily. Simply change the Pin Numbers for any of the LEDs, and Add more LEDs by uncommenting/copying a few more lines of code.

The Current Color Types:
Off
Red
Green
Blue
Yellow
White
Purple
Cyan
Orange
Test (Allows you to manually set a LED color)

Anyway, I'm sure this can be turned into a library, somehow. Let me know if you have any questions.

Results tested on a SMD RGB LED on Arduino UNO.

Applications: This is great for projects where you have multiple LEDs that need to correspond to sensor data or program modes. Or projects that use multiple LEDs that need different colors in different parts on prop suit or weapon.
