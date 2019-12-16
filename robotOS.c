/* main.c - main routine goes here
 * Author: Kyle Coppedge   
 * Purpose: Project 2
 * date: 1/11/2018
 */
#include "stdio.h"
#include "definitions.h"
#include "aliases.h"
#include "utilities.h"

void runRobotOS();

void runRobotOS()
{
    printf("The robot is up and running!!\n");
    motorsOff();
    
    moveForward();    
    pause(250);
    moveForward();    
    pause(250);
    moveForward();    
    pause(250);
    
    turnRight();
    pause(250);
    turnRight();
    pause(250);
    turnRight();
    pause(250);
    
    moveForward();    
    pause(250);
    moveForward();    
    pause(250);
    moveForward();    
    pause(250);
    moveForward();    
    pause(250);
    
    turnLeft();
    pause(250);
    
    moveBackward();
    pause(250);
    moveBackward();
    pause(250);
    moveBackward();
    pause(250);
    moveBackward();
    pause(250);
    moveBackward();
    pause(250);
    
    turnLeft();
    pause(250);
    turnLeft();
    pause(250);

        
 
//    
//    int i;
//    
//    for(i=0; i<5;i++)
//    {
//        turnRedLEDOn();
//        pause(1000);
//        turnRedLEDOff();
//        pause(250);
//        turnGreenLEDOn();
//        pause(1000);
//        turnGreenLEDOff();
//        pause(250);
//        
//    }
    printf("Robot will shut down... \n");
    halt();
}   


void moveForward()
{
    printf("I am moving forward\n");
    turnLeftMotorForward();
    turnRightMotorForward();
    turnLEDsOnIfMoving();
    pause(1000);
    turnLEDsOff();
    motorsOff();
    
}

void moveBackward()
{
    printf("I am moving backward\n");
    turnLeftMotorBackward();
    turnRightMotorBackward();
    turnLEDsOnIfMoving();
    pause(1000);
    turnLEDsOff();
    motorsOff();
}

void turnRight()
{
    printf("I am pivoting right\n");
    turnLeftMotorForward();
    turnLEDsOnIfMoving();
    pause(1000);
    turnLEDsOff();
    motorsOff();
}

void turnLeft()
{
    printf("I am pivoting left\n");
    turnRightMotorForward();
    turnLEDsOnIfMoving();
    pause(1000);
    turnLEDsOff();
    motorsOff();
}