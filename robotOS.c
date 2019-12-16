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
    backwardDelay = 185,
    leftOnMs = 30,  //moving forward turn on left first for x ms
    rightOnMs = 30, //moving backward turn on right first for x ms
    //turnRightDelay = 102, // theSequence() value
    //turnLeftDelay = 70; // theSequence value
    turnRightDelay = 110,
    turnLeftDelay = 85;
void runRobotOS()
{
    printf("The robot is up and running!!\n");
    while(1)
    {
        int i = 0;
        int bump = 0;
        int tempLight = 0;
        for(i = 0; i < 1; i++)
        {
            tempLight = checkLight();
            bump = checkBumpers(tempLight);
            moveForward();
            moveForward();
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
    
int checkBumpers(int tempLight)
{
    int result = 0;
    pause(10);
    int i = 0;
    int leftReaction = 0, rightReaction = 0;
//    for(i = 0; i < 10; i++)
//    {
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
//    if(tempLight = 4)
//    {
//        
//            pause(movePause);
//            moveBackward();
//            pause(movePause);
//            turnRight();
//            pause(movePause);
//            moveForward();
//    }
//    else if (tempLight = 5)
//    {
//        
//            pause(movePause);
//            moveBackward();
//            pause(movePause);
//            turnLeft();
//            pause(movePause);
//            moveForward();
//    }else{
        if(leftReaction && !rightReaction)
        {
            pause(movePause);
            moveBackward();
            pause(movePause);
            turnLeft();
            pause(movePause);
            moveForward();
            
        }
        if(rightReaction && !leftReaction)
        {
            
            pause(movePause);
            moveBackward();
            pause(movePause);
            turnRight();
            pause(movePause);
            moveForward();
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
            turnLeft();
            pause(movePause);
            moveForward();
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

