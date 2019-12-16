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

void runRobotOS()
{
    printf("The robotOS is up and running!!\n");
    int bumperIsClearCount = 0;
    while(1)
    {
	    moveForward();
	    pause(300);
	    int bumperState = checkBumpers();
	    
	    if(bumperState == CLEAR && bumperIsClearCount > 1)
		    turnTowardLight();
	    else if(bumperState == CLEAR)
		    bumperIsClearCount++;
	    else
	    {
		    clearObstacle(bumperState);
		    bumperIsClearCount = 0;
	    }
	    pause(300);
    }
    printf("Robot will shut down... \n");
    halt();
}

    


