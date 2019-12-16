/* main.c - main routine goes here
 * Author: Kyle Coppedge  
 */
#include <stdio.h> //to resolve printf error
#include <p30f3013.h>
#include "aliases.h"
#include "utilities.h"
#include "definitions.h"

int main() {
  /* initialize the ability to send messages to the
   * PICKit 2 using printf.
   */
  initializeUART();
  pause(1000);
  setupPins();
    

  printf("I'm in the main!\n");
  if(testPin3)
      printf("test pin 3 \n");
  if(testPin4)
      printf("test pin 4 \n");
  
  if(testPin3||testPin4)
      runTestSuite();
  else
      runRobotOS();
  
  halt();
  return(0);
}

void setupPins()
{
    pin3Direction = INPUT; //dip switch
    pin4Direction = INPUT; //dip switch
    pin5Direction = OUTPUT; //the red LED
    pin6Direction = OUTPUT; //the green LED
    pin7Direction = INPUT; // RIGHT BUMPER
    pin10Direction = OUTPUT; // RESET BUMPER
    pin11Direction = OUTPUT; // left photo resistor
    pin12Direction = INPUT; // right photo resistor
    pin14Direction = INPUT; // LEFT BUMPER
    pin21Direction = OUTPUT;
    pin23Direction = OUTPUT; //motor
    pin24Direction = OUTPUT; //motor
    pin25Direction = OUTPUT; //motor
    pin26Direction = OUTPUT; //motor
    pin3Type = DIGITAL; //dip switch
    pin4Type = DIGITAL; //dip switch
    pin5Type = DIGITAL; //the red LED
    pin6Type = DIGITAL; //the green LED
    pin7Type = DIGITAL; // RIGHT BUMPER
    //pin10Type = DIGITAL;
    //pin21Type = DIGITAL;
    pin23Type = DIGITAL; //motor
    pin24Type = DIGITAL; //motor
    pin25Type = DIGITAL; //motor
    pin26Type = DIGITAL; //motor
}
