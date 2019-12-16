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

/*
 * function definitions
 */
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

#endif // DEFINITIONS_H_ 
