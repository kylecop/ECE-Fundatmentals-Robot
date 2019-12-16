/* main.c - main routine goes here
 * Author: Kyle Coppedge  
 */
#include <stdio.h> //to resolve printf error
#include <p30f3013.h>
#include "aliases.h"
#include "utilities.h"
#include "definitions.h"

void setupPins();

int main() {
  /* initialize the ability to send messages to the
   * PICKit 2 using printf.
   */
  initializeUART();
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

setupPins()
{
    //Define pin 5 to control the red LED
    pin5Direction = OUTPUT;
    pin5Type = DIGITAL;
    
    //Define pin 6 to control the green LED
    pin6Direction = OUTPUT;
    pin6Type = DIGITAL;
    
    //Define pins for the dip switch
    pin3Direction = INPUT;
    pin3Type = DIGITAL;
    pin4Direction = INPUT;
    pin4Type = DIGITAL;
    
    //Define pins for the motor drivers
    pin23Direction = OUTPUT;
    pin24Direction = OUTPUT;
    pin25Direction = OUTPUT;
    pin26Direction = OUTPUT;
    pin23Type = DIGITAL;
    pin24Type = DIGITAL;
    pin25Type = DIGITAL;
    pin26Type = DIGITAL;
    
}
