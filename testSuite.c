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
    pause(100);
    motorsOff();
    pause(500);
    
    turnRightMotorForward();
    pause(100);
    motorsOff();
    pause(500);
    
    turnLeftMotorBackward();
    pause(100);
    motorsOff();
    pause(500);
    
    turnRightMotorBackward();
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
       int leftLight = 0, rightLight = 0;
       getLightValues(&leftLight, &rightLight);
       
	printf("Right Light: %d\r\n", leftLight);
	printf("Left Light:  %d\r\n", rightLight);
	printf("                \r\n");
	if(rightLight > leftLight)
		turnGreenLEDOn();
	else
		turnRedLEDOn();
	//pause(1000);  // wait one second to slow down the UART Display
	pause(25);
	turnLEDsOff();
   }
}




