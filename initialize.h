/*
 * Headerdata for initialize, builds the prototypes for the functions used in there. 
 */

#ifndef initialize_h
#define initialize_h

#include "Arduino.h"


extern int triggerButton;


/*
 * Inizializes the LED´s and the Button
 */
void initializer();

/* 
 * resets the LED-board to the OFF-State
 */
void reset();

/*
 * Displays the d6 LED-equivalent of 1
 */
void weAreNumberOne();

/*
 * Displays the d6 LED-equivalent of 2
 */
void weAreNumberTwo();

/*
 * Displays the d6 LED equivalent of 3
 */
void weAreNumberThree();
/*
 * Displays the d6 LED-equivalent of 4
 */
void weAreNumberFour();

/*
 * Displays the d6 LED-equivalent of 5
 */
void weAreNumberFive();

/*
 * Displays the d6 LED-equivalent of 6
 */
void weAreNumberSix();

/*
 * Rolls a random d6, and displays the result via LED
 */
void d6Roller(int lowerBorder, int upperBorder);

/*
 * Lights up the upper right LED alone
 */
void LEDTestUR();

/*
 * Lights up the middle right LED alone
 */
void LEDTestMR();

/*
 * Lights up the lower right LED alone
 */
void LEDTestLR();

/*
 * Lights up the middle LED alone
 */
void LEDTestM();

/*
 * Lights up the upper left LED alone
 */
void LEDTestUL();

/*
 * Lights up the middle left LED alone
 */
void LEDTestML();

/*
 * Lights up the lower left LED alone
 */
void LEDTestLL();


void LEDTest1();

void LEDTest2();

void rollTester();

void startAnimation();

#endif      

