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
/*
 * function definitions
 */
void setupPins();
void turngreenLEDOn();
void turngreenLEDOff();
void turnRedLEDOn();
void turnRedLEDOFF();
void runRobotOS();

#endif // DEFINITIONS_H_ 
