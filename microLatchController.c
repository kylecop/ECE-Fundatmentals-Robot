
#include <stdio.h> //to resolve printf error
#include <p30f3013.h>
#include "definitions.h"
#include "aliases.h"
#include "utilities.h"


void resetSRLatch()
{
    //printf("the latch is reset\n");
    //turnRedLEDOn();
    resetLatch = ON;
    pause(50);
    resetLatch = OFF;
    //turnLEDsOff();
}
