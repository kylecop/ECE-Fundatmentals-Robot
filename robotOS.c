/* main.c - main routine goes here
 * Author: Kyle Coppedge   
 * Purpose: Project 2
 * date: 1/11/2018
 */
#include "stdio.h"
#include "definitions.h"
#include "aliases.h"
#include "utilities.h"

void runRobotOS()
{
    printf("The robot is up and running!!\n");
    
    int i;
    
    for(i=0; i<5;i++)
    {
        turnRedLEDOn();
        pause(1000);
        turnRedLEDOff();
        pause(250);
        turnGreenLEDOn();
        pause(1000);
        turnGreenLEDOff();
        pause(250);
        
    }
    printf("Robot will shut down... \n");
    halt();
}   
