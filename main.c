/* main.c - main routine goes here
 * Author: Kyle Coppedge  
 */
#include <stdio.h> //to resolve printf error
#include <p30f3013.h>
#include "definitions.h"
#include "aliases.h"
#include "utilities.h"


int main() {
    /* initialize the ability to send messages to the
     * PICKit 2 using printf.
     */
    initializeUART();
    pause(1000);
    setupPins();
    printf("I'm in the main!\n");

    if (testPin3 || testPin4)
        runTestSuite();
    else
        runRobotOS();

    halt();
    return (0);
}

