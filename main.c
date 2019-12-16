/* main.c - main routine goes here
 * Author: Kyle Coppedge  
 */
#include <stdio.h> //to resolve printf error
#include <p30f3013.h>
#include "aliases.h"
#include "utilities.h"



int main() {
  /* initialize the ability to send messages to the
   * PICKit 2 using printf.
   */
  initializeUART();
  setupPins();
  runRobotOS();
  // put code here!
  printf("ECE Rules!");
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
    
}
