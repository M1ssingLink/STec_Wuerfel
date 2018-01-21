/*
 * Simple d6 visualizer via the use of 7 LED´s
 * and a single Button which is declaring the intention to roll.
 */

#include "initialize.h"

/* Testfunctions, swap the 0´s with 1´s to enable tests */
int LEDTestConsecutive = 0;
int LEDTestSimultaneous = 0;
int rollTestState = 0;

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

    int buttonState = 0;
    buttonState = digitalRead(triggerButton);

    if (buttonState == HIGH) {
        Serial.println("button pressed");
        d6Roller(1, 7);
        delay(1000);
        reset();

    }

    /* Tests if enabled */
    if (LEDTestConsecutive == 1) {
        LEDTestConsecutively();
    }
    if (LEDTestSimultaneous == 1) {
        LEDTestSimultaneously();
    }
    if (rollTestState == 1) {
        rollTester(1, 7);
    }
}


