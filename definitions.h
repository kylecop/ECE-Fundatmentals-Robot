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
#define ON 1
#define OFF 0

#define redLED digOutput5
#define greenLED digOutput6
#define testPin3 digInput3
#define testPin4 digInput4
#define leftMotorCW digOutput23
#define leftMotorCCW digOutput24
#define rightMotorCW digOutput25
#define rightMotorCCW digOutput26
#define leftBumper digInput14
#define rightBumper digInput7
#define resetLatch digOutput10


/*
 * function definitions
 */

void resetSRLatch();
void setupPins();
void turngreenLEDOn();
void turngreenLEDOff();
void turnRedLEDOn();
void turnRedLEDOFF();
void runRobotOS();
void runTestSuite();
void runMotorTest();
void runBumperTest();
void runLightTest();
void moveForward();
void moveBackward();
void turnRight();
void turnLeft();
void theSequence();
void turnLEDsOff();
void checkBumpers();

#endif // DEFINITIONS_H_ 
