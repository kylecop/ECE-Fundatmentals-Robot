/*
 * testSuite.c
 * Created on Feb 6, 2018
 * author: kyle.coppedge
 */

#include <stdio.h> //to resolve printf error
#include <p30f3013.h>
#include "aliases.h"
#include "utilities.h"
#include "definitions.h"


//=====================================================
void runTestSuite()
{
    printf("I am in the test suite\n");
    if(testPin3&&!testPin4)
        runMotorTest();
    else if(!testPin3&&testPin4)
        while(testPin4)
        {
            runBumperTest();
        }
    else
        runLightTest();
    
}

void runMotorTest()
{
    printf("I'm in the motor test.\n");
    motorsOff();
    
    turnLeftMotorForward();
    turnLEDsOnIfMoving();
    pause(100);
    motorsOff();
    pause(500);
    
    turnRightMotorForward();
    turnLEDsOnIfMoving();
    pause(100);
    motorsOff();
    pause(500);
    
    turnLeftMotorBackward();
    turnLEDsOnIfMoving();
    pause(100);
    motorsOff();
    pause(500);
    
    turnRightMotorBackward();
    turnLEDsOnIfMoving();
    pause(100);
    motorsOff();
}

void runBumperTest()
{
    
    printf("I'm in the bumper test.\n");
    
    while(1)
    {
        if(leftBumper)
        {
            printf("the left switch is closed\n");
            turnRedLEDOn();
        }
        
        if(rightBumper)
        {
            
            printf("the right       switch is closed\n");
            turnGreenLEDOn();
        }
        if(leftBumper || rightBumper)
        {
            resetSRLatch();
            turnLEDsOff();
        }
        //pause(1000);
    }
}

void runLightTest()
{
    
    printf("I'm in the light test.\n");
   while(testPin3 && testPin4)
   {
       printf("i'm in the loop\n");
		pin11Direction = OUTPUT;  // make this output
		pin12Direction = OUTPUT;
		digOutput11 = 1;		// ready the RC Circuit!
		digOutput12 = 1;
		pause(5);		// wait for it?.
		pin11Direction = INPUT;	// Go! Change to input pin type
		pin12Direction = INPUT;
		startPinTimer11();	// start the timer
		startPinTimer12();
		pause(5);		// let the capacitor charge
		/*  Print the values.. Just use them as integers */
		printf("Right Light: %d\r\n", readPinTimer11());
		printf("Left Light:  %d\r\n", readPinTimer12());
		printf("                \r\n");
		pause(1000);  // wait one second to slow down the UART Display
   }
}




