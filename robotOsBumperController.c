
#include <stdio.h> //to resolve printf error
#include <p30f3013.h>
#include "definitions.h"
#include "aliases.h"
#include "utilities.h"

void clearObstacle(int bumperState)
{
	if(bumperState == BOTH)
	{
		clearDoubleBumperObstacle();
		//turnTowardLight();
	}
	if (bumperState == LEFT)
	{
		clearLeftBumperObstacle();
		//turnTowardLight();
	}
	if (bumperState == RIGHT)
	{
		clearRightBumperObstacle();
		//turnTowardLight();
	}
}
void clearLeftBumperObstacle()
{
	int bumperState = LEFT, count = 0;
	while(count < 5)//bumperState == LEFT)
	{
		count++;
		moveBackward();
		turnRight();
		moveForward();
		pause(200);
		moveForward();
		pause(200);
		moveForward();
		//bumperState = checkBumpers();
	}
	pause(200);
	//turnTowardLight();
	turnLeft();
}

void clearRightBumperObstacle()
{
	
	int bumperState = RIGHT, count = 0;
	while(count < 5)//bumperState == RIGHT)
	{
		count++;
		moveBackward();
		turnLeft();
		moveForward();
		pause(200);
		moveForward();
		pause(200);
		moveForward();
		//bumperState = checkBumpers();
	}
	pause(200);
	//turnTowardLight();
	turnRight();
}

void clearDoubleBumperObstacle()
{
	int leftLight = 0, rightLight = 0, leftLight2 = 0, rightLight2 = 0, count = 0;
	int lightValuesAreTheSame = TRUE;
	while(lightValuesAreTheSame && count < 4)
	{
		count++;
		getLightValues(&leftLight, &rightLight);
		moveBackward();
		pause(200);
		turnRight();
		pause(400);
		getLightValues(&leftLight2, &rightLight2);
		if((leftLight >= leftLight2 && leftLight - leftLight2 < 100) || (leftLight2 > leftLight && leftLight2 - leftLight < 100))
		{
			if((rightLight >= rightLight2 && rightLight - rightLight2 < 100) || (rightLight2 > rightLight && rightLight2 - rightLight < 100))
			{
				lightValuesAreTheSame = TRUE;
			}
		}
		else
			lightValuesAreTheSame = FALSE;
			
	}
	while(lightValuesAreTheSame && count < 4)
	{
		count++;
		getLightValues(&leftLight, &rightLight);
		moveBackward();
		pause(200);
		turnLeft();
		pause(400);
		getLightValues(&leftLight2, &rightLight2);
		if((leftLight >= leftLight2 && leftLight - leftLight2 < 100) || (leftLight2 > leftLight && leftLight2 - leftLight < 100))
		{
			if((rightLight >= rightLight2 && rightLight - rightLight2 < 100) || (rightLight2 > rightLight && rightLight2 - rightLight < 100))
			{
				lightValuesAreTheSame = TRUE;
			}
		}
		else
			lightValuesAreTheSame = FALSE;
			
	}
}

int checkBumpers()
{
	int result;
	if(leftBumper)
		result = LEFT;
	if (rightBumper)
		result = RIGHT;
	if (leftBumper && rightBumper)
		result = BOTH;
	if(!leftBumper && !rightBumper)
		result = CLEAR;
	
	if(result != CLEAR)
		resetSRLatch();
	
	return result;
}

