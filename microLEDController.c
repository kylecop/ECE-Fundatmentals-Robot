
#include <stdio.h> //to resolve printf error
#include <p30f3013.h>
#include "definitions.h"
#include "aliases.h"
#include "utilities.h"

void turnLEDsOff()
{
    turnRedLEDOff();//left
    turnGreenLEDOff();//right
}

void turnRedLEDOn() // left
{
    //printf("The red LED is on.\n");
    redLED = ON;
}

void turnRedLEDOff()
{
    //printf("The red LED is off.\n");
    redLED = OFF;
}

void turnGreenLEDOn() //left
{
    //printf("The green LED is on.\n");
    greenLED = ON;
}

void turnGreenLEDOff()
{
    //printf("The green LED is off.\n");
    greenLED = OFF;
}
