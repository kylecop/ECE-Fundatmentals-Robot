/* main.c - main routine goes here
 * Author: Kyle Coppedge   
 * Purpose: Project 2
 * date: 1/11/2018
 */
#include <stdio.h> //to resolve printf error
#include <p30f3013.h>
#include "definitions.h"
#include "aliases.h"
#include "utilities.h"


#include <uart.h>
#include <stdarg.h>
#include <adc12.h>
#include <p30fxxxx.h> //?
#include <libpic30.h>

int checkLight(int& speed, int& rightTurnSpeed, int& leftTurnSpeed)
{
    int result = 0;
    int leftCount = 0, rightCount = 0;
    int rightLight, leftLight;
    int i = 0;
    for(i = 0; i < 3; i++)
    {
        rightLight = 9000;
        leftLight = 9000;
		pin11Direction = OUTPUT;  // make this output
		pin12Direction = OUTPUT;
		digOutput11 = 1;		// ready the RC Circuit!
		digOutput12 = 1;
		pause(5);		// wait for it?.
		pin11Direction = INPUT;	// Go! Change to input pin type
		pin12Direction = INPUT;
		startPinTimer11();	// start the timer
		startPinTimer12();
		pause(5);		// let the capacitor charge
		/*  Print the values.. Just use them as integers */
        rightLight = readPinTimer11();
        leftLight = readPinTimer12();
        
        rightLight = rightLight / 2;// + 200;
//        if((rightLight > 800 && leftLight > 800) && (leftLight-rightLight > 300))
//        {
            if(rightLight > leftLight)
                leftCount++;
            else if(leftLight > rightLight)
                rightCount++;
        //}
        
        if(leftLight < 200 && rightLight < 200)
            halt();
        else if (leftLight < 160 || rightLight < 160)
            halt();
        
		printf("Right Light: %d\r\n", rightLight);
		printf("Left Light:  %d\r\n", leftLight);
		printf("leftCount: %d       rightCount: %d\r\n", leftCount, rightCount);
		//pause(1000);  // wait one second to slow down the UART Display
    }
    if(leftCount > rightCount)
    {
        turnGreenLEDOn();
        pause(10);
        result = 1;
        turnLEDsOff();
//        if(leftLight < 500 && rightLight < 500)
//            result = 5;
    }
    else if(rightCount > leftCount) // i changed this
    {
        result = 2;
        turnRedLEDOn();
        pause(10);
        turnLEDsOff();
//        if(rightLight < 500)
//            result = 4;
    }
    if(leftLight > 9300 && rightLight > 9300)
        result = 3;
    
    
    if(leftLight < 800 || rightLight < 800)
    {
        speed = forwardDelaySlow;
    }
    else
    {
        speed = forwardDelay;
    }
    return result;
}
void resetSRLatch()
{
    //printf("the latch is reset\n");
    turnRedLEDOn();
    resetLatch = ON;
    pause(5);
    resetLatch = OFF;
    turnLEDsOff();
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
    //printf("motorsOff\n");
    leftMotorCW = OFF;
    leftMotorCCW = OFF;
    rightMotorCW = OFF;
    rightMotorCCW = OFF;
    //turnLEDsOff();
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

