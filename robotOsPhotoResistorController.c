
#include <stdio.h> //to resolve printf error
#include <p30f3013.h>
#include "definitions.h"
#include "aliases.h"
#include "utilities.h"

void turnTowardLight()
{
	int leftLightValue, rightLightValue;
	getLightValues(&leftLightValue, &rightLightValue);
	
	if(getLightDirection(leftLightValue, rightLightValue) == LEFT)
		turnLeft();
	else
		turnRight();
}

int getLightDirection(int leftLightValue, int rightLightValue)
{
	int direction;
	if(leftLightValue + 100 < rightLightValue)
		direction = LEFT; //left
	else
		direction = RIGHT;
	return direction;
}

int checkIfUnderLight()
{
	int leftLightValue, rightLightValue;
	getLightValues(&leftLightValue, &rightLightValue);
	
	int underLight;
        if(leftLightValue < targetLightValueLeft && rightLightValue < targetLightValueRight)
		underLight = YES;
	else if (leftLightValue < targetLightValueLeftSingle || rightLightValue < targetLightValueRightSingle)
		underLight = YES;
	else
		underLight = NO;
	return underLight;
}

int checkIfCloseToLight()
{
	int leftLightValue, rightLightValue;
	getLightValues(&leftLightValue, &rightLightValue);
	
	int closeToLight;
        if(leftLightValue < 1000 || rightLightValue < 1000)
		closeToLight = YES;
	else
		closeToLight = NO;
	return closeToLight;
	
}



