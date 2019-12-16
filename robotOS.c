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
    movePause = 1200,
    transitionPause = 1500,
    forwardDelay = 125,
    backwardDelay = 95,
    leftOnMs = 15,  //moving forward turn on left first for x ms
    rightOnMs = 30, //moving backward turn on right first for x ms
    turnRightDelay = 102,
    turnLeftDelay = 70;

void runRobotOS()
{
    printf("The robot is up and running!!\n");
    theSequence(); // FFF RRR FFFF L RRRRR LL
    printf("Robot will shut down... \n");
    halt();
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
    pause(movePause);
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
    turnLEDsOnIfMoving();
    pause(turnLeftDelay);
    turnLEDsOff();
    motorsOff();
    pause(movePause);
}


