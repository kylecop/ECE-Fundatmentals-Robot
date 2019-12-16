/* main.c - main routine goes here
 * Author: Kyle Coppedge   
 * Purpose: Project 2
 * date: 1/11/2018
 */
#include "stdio.h"
#include "definitions.h"
#include "aliases.h"
#include "utilities.h"

void resetSRLatch()
{
    printf("the latch is reset\n");
    resetLatch = ON;
    pause(20);
    resetLatch = OFF;
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


void motorsOff()
{
    printf("motorsOff\n");
    leftMotorCW = OFF;
    leftMotorCCW = OFF;
    rightMotorCW = OFF;
    rightMotorCCW = OFF;
    turnLEDsOff();
}


void turnLEDsOnIfMoving()
{
    
    if(leftMotorCCW == ON || leftMotorCW == ON)
        turnGreenLEDOn();//left
        
    if(rightMotorCW == ON || rightMotorCCW == ON)
        turnRedLEDOn();//right
}

void turnLEDsOff()
{
    turnRedLEDOff();//left
    turnGreenLEDOff();//right
}

void turnLeftMotorForward()
{
    printf("leftMotorForward\n");
    leftMotorCW = ON;
}


void turnLeftMotorBackward()
{
    printf("leftMotorBackward\n");
    leftMotorCCW = ON;
}


void turnRightMotorForward()
{
    
    printf("rightMotorForward\n");
    rightMotorCW = ON;
}


void turnRightMotorBackward()
{
    printf("rightMotorBackward\n");
    rightMotorCCW = ON;
}

