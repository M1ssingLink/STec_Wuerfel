/*
 * Implementation of the functions prototyped by initialize.h, 
 * therefore also the core part of the code
 */

#include "Arduino.h"


/* LED-Declaration */
#define ledUpperRight 2
#define ledMiddleRight 3
#define ledLowerRight 4
#define ledMiddle 5
#define ledUpperLeft 6
#define ledMiddleLeft 7
#define ledLowerLeft 8


/* Button-Declaration */
int triggerButton = 11;

void initializer() {

    pinMode(ledUpperRight, OUTPUT);
    pinMode(ledMiddleRight, OUTPUT);
    pinMode(ledLowerRight, OUTPUT);
    pinMode(ledMiddle, OUTPUT);
    pinMode(ledUpperLeft, OUTPUT);
    pinMode(ledMiddleLeft, OUTPUT);
    pinMode(ledLowerLeft, OUTPUT);
    pinMode(triggerButton, INPUT);

}

void reset() {

    digitalWrite(ledUpperRight, LOW);
    digitalWrite(ledMiddleRight, LOW);
    digitalWrite(ledLowerRight, LOW);
    digitalWrite(ledMiddle, LOW);
    digitalWrite(ledUpperLeft, LOW);
    digitalWrite(ledMiddleLeft, LOW);
    digitalWrite(ledLowerLeft, LOW);

}

void weAreNumberOne() {

    reset();
    digitalWrite(ledMiddle, HIGH);
}

void weAreNumberTwo() {

    reset();
    digitalWrite(ledUpperRight, HIGH);
    digitalWrite(ledLowerLeft, HIGH);
}

void weAreNumberThree() {

    reset();
    digitalWrite(ledUpperRight, HIGH);
    digitalWrite(ledMiddle, HIGH);
    digitalWrite(ledLowerLeft, HIGH);
}

void weAreNumberFour() {

    reset();
    digitalWrite(ledUpperRight, HIGH);
    digitalWrite(ledLowerRight, HIGH);
    digitalWrite(ledUpperLeft, HIGH);
    digitalWrite(ledLowerLeft, HIGH);
}

void weAreNumberFive() {

    reset();
    digitalWrite(ledUpperRight, HIGH);
    digitalWrite(ledLowerRight, HIGH);
    digitalWrite(ledMiddle, HIGH);
    digitalWrite(ledUpperLeft, HIGH);
    digitalWrite(ledLowerLeft, HIGH);

}

void weAreNumberSix() {

    reset();
    digitalWrite(ledUpperRight, HIGH);
    digitalWrite(ledMiddleRight, HIGH);
    digitalWrite(ledLowerRight, HIGH);
    digitalWrite(ledUpperLeft, HIGH);
    digitalWrite(ledMiddleLeft, HIGH);
    digitalWrite(ledLowerLeft, HIGH);
}

void d6Roller(int lowerBorder, int upperBorder) {


    int randomNumber = 0;

    randomNumber = random(lowerBorder, upperBorder);
    Serial.println(randomNumber);
    switch (randomNumber) {
        case 1:
            weAreNumberOne();
            break;

        case 2:
            weAreNumberTwo();
            break;

        case 3:
            weAreNumberThree();
            break;

        case 4:
            weAreNumberFour();
            break;

        case 5:
            weAreNumberFive();
            break;

        case 6:
            weAreNumberSix();
            break;

        default:
            break;
    }
}

void startAnimation() {
    unsigned long time = millis();
    unsigned long timePassed = 0;
    while (timePassed < 3000) {
        d6Roller(1, 7);
        timePassed = millis() - time;
        delay(75);
        reset();
    }

}

void LEDTestUR() {
    reset();
    digitalWrite(ledUpperRight, HIGH);
}

void LEDTestMR() {
    reset();
    digitalWrite(ledMiddleRight, HIGH);
}

void LEDTestLR() {
    reset();
    digitalWrite(ledLowerRight, HIGH);
}

void LEDTestM() {
    reset();
    digitalWrite(ledMiddle, HIGH);
}

void LEDTestUL() {
    reset();
    digitalWrite(ledUpperLeft, HIGH);
}

void LEDTestML() {
    reset();
    digitalWrite(ledMiddleLeft, HIGH);
}

void LEDTestLL() {
    reset();
    digitalWrite(ledLowerLeft, HIGH);
}

void LEDTestConsecutive() {
    delay(100);
    LEDTestUR();
    delay(100);
    LEDTestMR();
    delay(100);
    LEDTestLR();
    delay(100);
    LEDTestM();
    delay(100);
    LEDTestUR();
    delay(100);
    LEDTestMR();
    delay(100);
    LEDTestLR();
    delay(100);
}

void LEDTestSimultaneously() {
    reset();
    digitalWrite(ledUpperRight, HIGH);
    digitalWrite(ledMiddleRight, HIGH);
    digitalWrite(ledLowerRight, HIGH);
    digitalWrite(ledMiddle, HIGH);
    digitalWrite(ledUpperLeft, HIGH);
    digitalWrite(ledMiddleLeft, HIGH);
    digitalWrite(ledLowerLeft, HIGH);

}

void rollTester(int lowerBorder, int upperBorder) {
    d6Roller(lowerBorder, upperBorder);
    Serial.println(randomNumber);

}