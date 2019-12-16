
#include "aliases.h"
#include "utilities.h"
#include "setup.h"

/*
 * definitions.h
 *
 */
#ifndef DEFINITIONS_H_
#define DEFINITIONS_H_

/**
 * constants
 *  -- NOTICE - DO NOT END THESE STATEMENTS WITH SEMICOLONS
 */
#define forwardDelay 155
#define forwardDelaySlow 100

#define backwardDelay 120

#define leftOnMs 30  //moving forward turn on left first for x ms
#define rightOnMs 120 //moving backward turn on right first for x ms

#define turnRightDelay 80
#define turnRightDelaySlow 70
#define turnLeftDelay 105
#define turnLeftDelaySlow 85

#define targetLightValueLeft 170
#define targetLightValueRight 350
#define targetLightValueLeftSingle 135
#define targetLightValueRightSingle 270

#define lightAdjustment2000to5000 2
#define lightAdjustment5000toInfinity 3


#define movePause 50
#define transitionPause 100

#define ON 1
#define OFF 0
#define LEFT 1
#define RIGHT 0
#define YES 1
#define NO 0
#define BOTH 2
#define CLEAR 3
#define TRUE 1
#define FALSE 0

#define redLED digOutput5
#define greenLED digOutput6
#define testPin3 digInput3
#define testPin4 digInput4
#define leftMotorCW digOutput24
#define leftMotorCCW digOutput23
#define rightMotorCW digOutput26
#define rightMotorCCW digOutput25
#define leftBumper digInput14
#define rightBumper digInput7
#define resetLatch digOutput2
#define leftPhotoResistor digOutput11
#define rightPhotoResistor digInput12

/*
 * function definitions
 */

void resetSRLatch();
void setupPins();
void runRobotOS();
void runTestSuite();
void runMotorTest();
void runBumperTest();
void runLightTest();

void turnLEDsOff();
void turngreenLEDOn();
void turnGreenLEDOff();
void turnRedLEDOn();
void turnRedLEDOff();


void moveForward();
void moveBackward();
void turnRight();
void turnLeft();

void turnLeftMotorForward();
void turnLeftMotorBackward();
void turnRightMotorForward();
void turnRightMotorBackward();
void motorsOff();

int checkBumpers();
void clearObstacle(int bumperState);
void clearDoubleBumperObstacle();
void clearLeftBumperObstacle();
void clearRightBumperObstacle();

void getLightValues(int* leftLightValue, int* rightLightValue);
int getLightDirection(const int leftLightValue, const int rightLightValue);







#endif // DEFINITIONS_H_ 
