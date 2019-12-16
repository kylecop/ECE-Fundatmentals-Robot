
#include <stdio.h> //to resolve printf error
#include <p30f3013.h>
#include "definitions.h"
#include "aliases.h"
#include "utilities.h"

void motorsOff()
{
    //printf("motorsOff\n");
    leftMotorCW = OFF;
    leftMotorCCW = OFF;
    rightMotorCW = OFF;
    rightMotorCCW = OFF;
    //turnLEDsOff();
}

void turnLeftMotorForward()
{
    //printf("leftMotorForward\n");
    leftMotorCW = ON;
}


void turnLeftMotorBackward()
{
    //printf("leftMotorBackward\n");
    leftMotorCCW = ON;
}


void turnRightMotorForward()
{
    
    //printf("rightMotorForward\n");
    rightMotorCW = ON;
}


void turnRightMotorBackward()
{
    //printf("rightMotorBackward\n");
    rightMotorCCW = ON;
}
