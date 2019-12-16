/* main.c - main routine goes here
 * Author: Kyle Coppedge   
 * Purpose: Project 2
 * date: 1/11/2018
 */
#include "stdio.h"
#include "definitions.h"
#include "aliases.h"
#include "utilities.h"


void turnRedLEDOn()
{
    printf("The red LED is on.\n");
    redLED = ON;
}

void turnRedLEDOff()
{
    printf("The red LED is off.\n");
    redLED = OFF;
}

void turnGreenLEDOn()
{
    printf("The green LED is on.\n");
    greenLED = ON;
}

void turnGreenLEDOff()
{
    printf("The green LED is off.\n");
    greenLED = OFF;
}
