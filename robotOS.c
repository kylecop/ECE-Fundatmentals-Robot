/* main.c - main routine goes here
 * Author: Kyle Coppedge   
 * Purpose: Project 2
 * date: 1/11/2018
 */
#include "stdio.h"
#include "definitions.h"
#include "aliases.h"
#include "utilities.h"
const int 
    movePause = 100,
    transitionPause = 100,
    //forwardDelay = 125, // theSequence() values
    forwardDelay = 80,
    backwardDelay = 95,
    leftOnMs = 15,  //moving forward turn on left first for x ms
    rightOnMs = 30, //moving backward turn on right first for x ms
    //turnRightDelay = 102, // theSequence() value
    //turnLeftDelay = 70; // theSequence value
    turnRightDelay = 80,
    turnLeftDelay = 60;

void runRobotOS()
{
    printf("The robot is up and running!!\n");
    //theSequence(); // FFF RRR FFFF L RRRRR LL
    while(1)
    {
        moveForward();
        checkBumpers();
        pause(transitionPause);
    }
    printf("Robot will shut down... \n");
    halt();
}

void moveForward()
{
    printf("I am moving forward\n");
    turnLeftMotorForward();
    pause(leftOnMs);
    turnRightMotorForward();
    turnLEDsOnIfMoving();
    pause(forwardDelay);
    turnLEDsOff();
    motorsOff();
    //pause(movePause);
}
void checkBumpers()
{
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
            pause(movePause);
            turnLeft();
            pause(movePause);
            turnLeft();
            pause(movePause);
            turnLeft();
            pause(movePause);
            moveForward();
        }
        pause(10);
        if(leftReaction || rightReaction)
        {
            resetSRLatch();
            
        }
    //}
    pause(movePause);
}

void theSequence() // FFF RRR FFFF L RRRRR LL
{
    
    motorsOff();
    int i = 0;
    for(i = 0; i<3; i++) // F F F
        moveForward();    
    
    motorsOff();
    pause(transitionPause);
    
    for(i = 0; i<3; i++) // R R R
        turnRight();
    
    motorsOff();
    pause(transitionPause);
    
    for(i = 0; i<4; i++) // F F F F
        moveForward();    
    
    motorsOff();
    pause(transitionPause);
    
    turnLeft();            // L
    motorsOff();
    pause(transitionPause);
    
    for(i = 0; i<5; i++)   // R R R R R
        moveBackward();    
    
    motorsOff();
    pause(transitionPause);
    
    for(i = 0; i<2; i++)    // L L
        turnLeft();
    
    motorsOff();
}


void moveBackward()
{
    printf("I am moving backward\n");
    turnRightMotorBackward();
    pause(rightOnMs);
    turnLeftMotorBackward();
    turnLEDsOnIfMoving();
    pause(backwardDelay);
    turnLEDsOff();
    motorsOff();
    pause(movePause);
}

void turnRight()
{
    printf("I am pivoting right\n");
    turnLeftMotorForward();
    turnRightMotorBackward();
    turnLEDsOnIfMoving();
    pause(turnRightDelay);
    turnLEDsOff();
    motorsOff();
    pause(movePause);
}

void turnLeft()
{
    printf("I am pivoting left\n");
    turnRightMotorForward();
    turnLeftMotorBackward();
    turnLEDsOnIfMoving();
    pause(turnLeftDelay);
    turnLEDsOff();
    motorsOff();
    pause(movePause);
}

