/*
 blink.h - Simple example in creating your own Arduino Library
 Copyright (c) 2017 op of TMM. All right reserved.

 A pin is blinked automatically by one second intervals or by a specified interval
 Methods:
 
 Blink(pin) - Constructor. Specify pin to blink
 blink(value) - Enable blinking. Accepts 1, 0 or ON and OFF
 blink(value, length) - Enable blinking and specify interval of blinking.
*/

#ifndef breath_h
#define breath_h

#include <Arduino.h>

#define ON true
#define OFF false


class Breath
{
public:
	Breath(int pin);  //Constructor. attach pin to blink
	void breath(bool value);  //enable blinking with 1s duration
	void breath(bool value, int blinkLength);   //enable blinking with blink duration
	void breath(bool value, int blinkLength, int blinkLoops);  //enable blinking with blink duration and number of loops

private:
	uint8_t pinNumber;
};

#endif
