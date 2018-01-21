/*
 * Headerdata for the dice.cpp, builds the prototypes for the functions used in there. 
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

/*
 * Lights up all LED in consecutive order, if testState variable is set to 1
 */
void LEDTestConsecutively();

/*
 * Lights up all LED at the same time, if testState2 variable is set to 1
 */
void LEDTestSimultaneously();

/*
 * Rolls a random Number and prints it into the Serial Output
 */
void rollTester(int lowerBorder, int upperBorder);

/*
 * Plays the starting Animation of the dice, rolling and displaying random numbers with a small
 * delay for a total of 3 seconds
 */
void startAnimation();


#endif      

