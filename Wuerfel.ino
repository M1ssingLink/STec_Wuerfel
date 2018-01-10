/*
 * Simple d6 visualizer via the use of 7 LED´s
 * and a single Button which is declaring the intention to roll.
 */

#include "initialize.h"



int buttonState = 0;
int testState = 0;
int test2 = 0;

/*
 * Initializer for the LED´s, and the Button
 */
void setup() {
    Serial.begin(9600);
    initializer();
    startAnimation();
}

/*
 * Every second the input of the Button-input is read
 * and if pressed the random d6 result gets displayed
 */
void loop() {

    buttonState = digitalRead(triggerButton);

    if (buttonState == HIGH) {
        Serial.println("button pressed");
        d6Roller(1, 7);
        delay(1000);
        reset();

    }
    
    /* Tests if enabled */
    if (testState == 1) {
        LEDTest1();
    }
    if (test2 == 1) {
        LEDTest2();
    }
}