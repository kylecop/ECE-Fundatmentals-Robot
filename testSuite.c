/*
 * testSuite.c
 * Created on Feb 6, 2018
 * author: jeff.bigelow
 */

#include "stdio.h"
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
        runBumperTest();
    else
        runLightTest();
    
}

void runMotorTest()
{
    printf("I'm in the motor test.\n");
    motorsOff();
    
    turnLeftMotorForward();
    turnLEDsOnIfMoving();
    pause(1000);
    motorsOff();
    
    pause(500);
    
    turnLeftMotorBackward();
    turnLEDsOnIfMoving();
    pause(1000);
    motorsOff();
    
    pause(500);
    
    turnRightMotorForward();
    turnLEDsOnIfMoving();
    pause(1000);
    motorsOff();
    
    pause(500);
    
    turnRightMotorBackward();
    turnLEDsOnIfMoving();
    pause(1000);
    motorsOff();
}


void runBumperTest()
{
    
    printf("I'm in the bumper test.\n");
}

void runLightTest()
{
    
    printf("I'm in the light test.\n");
}