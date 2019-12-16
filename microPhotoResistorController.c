
#include <stdio.h> //to resolve printf error
#include <p30f3013.h>
#include "definitions.h"
#include "aliases.h"
#include "utilities.h"

void getLightValues(int* leftLightValue, int* rightLightValue)
{
	pin11Direction = OUTPUT;  // make this output
	pin12Direction = OUTPUT;
	digOutput11 = 1;  // ready the RC Circuit!
	digOutput12 = 1;  
	pause(5);  // wait for it?.
	pin11Direction = INPUT;	// Go! Change to input pin type
	pin12Direction = INPUT;
	startPinTimer11();	// start the timer
	startPinTimer12();
	pause(5);		// let the capacitor charge
	/*  Print the values.. Just use them as integers */
	*rightLightValue = readPinTimer11();
	*leftLightValue = readPinTimer12();
}

