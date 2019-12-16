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
const int 
    movePause = 50,
    transitionPause = 100,
    //forwardDelay = 125, // theSequence() values
    forwardDelay = 155,
    forwardDelaySlow = 100,
    backwardDelay = 185,
    leftOnMs = 30,  //moving forward turn on left first for x ms
    rightOnMs = 30, //moving backward turn on right first for x ms
    turnRightDelay = 110,
    turnLeftDelay = 85,
    turnLeftDelaySlow = 65,
    turnRightDelaySlow = 90;

void runRobotOS()
{
    printf("The robot is up and running!!\n");
    while(1)
    {
        int speed = 0, leftTurnSpeed = 0, rightTurnSpeed = 0;
        int i = 0;
        int bump = 0;
        int tempLight = 0;
        for(i = 0; i < 1; i++)
        {
            tempLight = checkLight(speed, leftTurnSpeed, rightTurnSpeed);
            bump = checkBumpers(tempLight);
            moveForward(speed);
            moveForward(speed);
        }
        if(bump == 0 && checkBumpers(0) == 0)
        {
            
            if(checkLight() != 3)
            {
                if(checkLight() == 1)
                    turnLeft();
                else
                    turnRight();
            
            }
        }
        
        //pause(transitionPause);
    }
    printf("Robot will shut down... \n");
    halt();
}

void moveForward()
{
    //printf("I am moving forward\n");
    turnLeftMotorForward();
    pause(leftOnMs);
    turnRightMotorForward();
    //turnLEDsOnIfMoving();
    pause(forwardDelay);
    //turnLEDsOff();
    motorsOff();
    pause(movePause);
}
    
int checkBumpers(const int speed, const int leftTurnSpeed, const int rightTurnSpeed)
{
    int result = 0;
    pause(10);
    int i = 0;
    int leftReaction = 0, rightReaction = 0;
    
        if(leftBumper && rightBumper)
        {
            leftReaction = 1;
            rightReaction = 1;
        }
        else if(leftBumper)
        {
            leftReaction = 1;
        }

        else if (rightBumper)
        {
            rightReaction = 1;
        }
        else
        {
            pause(10);
        }
        if(leftReaction && !rightReaction)
        {
            pause(movePause);
            moveBackward();
            pause(movePause);
            turnLeft(leftTurnSpeed);
            pause(movePause);
            moveForward(speed);
            
        }
        if(rightReaction && !leftReaction)
        {
            
            pause(movePause);
            moveBackward();
            pause(movePause);
            turnRight(rightTurnSpeed);
            pause(movePause);
            moveForward(speed);
        }
        if(leftReaction && rightReaction)
        {
            
            pause(movePause);
            moveBackward();
            //pause(movePause);
            //turnLeft();
            //pause(movePause);
            //turnLeft();
            pause(movePause);
            turnLeft(leftTurnSpeed);
            pause(movePause);
            moveForward(speed);
        }
    //}
        pause(10);
        if(leftReaction || rightReaction)
        {
            resetSRLatch();
            result = 1;
        }
    //}
    pause(movePause);
    return result;
}


void moveBackward()
{
    //printf("I am moving backward\n");
    turnRightMotorBackward();
    pause(rightOnMs);
    turnLeftMotorBackward();
    //turnLEDsOnIfMoving();
    pause(backwardDelay);
    //turnLEDsOff();
    motorsOff();
    pause(movePause);
}

void turnRight()
{
    //printf("I am pivoting right\n");
    turnLeftMotorForward();
    turnRightMotorBackward();
    //turnLEDsOnIfMoving();
    pause(turnRightDelay);
    //turnLEDsOff();
    motorsOff();
    pause(movePause);
}

void turnLeft()
{
    //printf("I am pivoting left\n");
    turnRightMotorForward();
    turnLeftMotorBackward();
    //turnLEDsOnIfMoving();
    pause(turnLeftDelay);
    //turnLEDsOff();
    motorsOff();
    pause(movePause);
}

