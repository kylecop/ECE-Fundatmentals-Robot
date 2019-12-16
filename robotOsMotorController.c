
#include <stdio.h> //to resolve printf error
#include <p30f3013.h>
#include "definitions.h"
#include "aliases.h"
#include "utilities.h"


void moveForward()
{
	turnGreenLEDOn();
	int forwardMs;
	if(checkIfUnderLight() == YES)
		halt();

	if(checkIfCloseToLight() == YES)
		forwardMs = forwardDelaySlow;
	else
		forwardMs = forwardDelay;
	
	
	//printf("I am moving forward\n");
	turnLeftMotorForward();
	pause(leftOnMs);
	turnRightMotorForward();
	pause(forwardMs);
	motorsOff();
	
	turnGreenLEDOff();
}


void moveBackward()
{
	if(checkIfUnderLight() == YES)
		halt();
	
	//printf("I am moving backward\n");
	turnRightMotorBackward();
	pause(rightOnMs);
	turnLeftMotorBackward();
	pause(backwardDelay);
	motorsOff();
}

void turnRight()
{
	int rightMs;
	if(checkIfUnderLight() == YES)
		halt();

	if(checkIfCloseToLight() == YES)
		rightMs = turnRightDelaySlow;
	else
		rightMs = turnRightDelay;
	
	//printf("I am pivoting right\n");
	turnLeftMotorForward();
	turnRightMotorBackward();
	pause(rightMs);
	motorsOff();
}

void turnLeft()
{
	int leftMs;
	if(checkIfUnderLight() == YES)
		halt();

	if(checkIfCloseToLight() == YES)
		leftMs = turnLeftDelaySlow;
	else
		leftMs = turnLeftDelay;

	//printf("I am pivoting left\n");
	turnRightMotorForward();
	turnLeftMotorBackward();
	pause(leftMs);
	motorsOff();
}

