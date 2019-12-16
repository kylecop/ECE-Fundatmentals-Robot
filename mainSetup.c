
#include <stdio.h> //to resolve printf error
#include <p30f3013.h>
#include "definitions.h"
#include "aliases.h"
#include "utilities.h"


void setupPins() {
	pin2Direction = OUTPUT; //reset bumper
    pin3Direction = INPUT; //dip switch
    pin4Direction = INPUT; //dip switch
    pin5Direction = OUTPUT; //the red LED
    pin6Direction = OUTPUT; //the green LED
    pin7Direction = INPUT; // RIGHT BUMPER
    //pin10Direction = OUTPUT; // broken pin?
    pin11Direction = OUTPUT; // left photo resistor
    pin12Direction = INPUT; // right photo resistor
    pin14Direction = INPUT; // LEFT BUMPER
    pin21Direction = OUTPUT; //reset bumper
    pin23Direction = OUTPUT; //motor
    pin24Direction = OUTPUT; //motor
    pin25Direction = OUTPUT; //motor
    pin26Direction = OUTPUT; //motor
    pin2Type = DIGITAL; //reset bumper
    pin3Type = DIGITAL; //dip switch
    pin4Type = DIGITAL; //dip switch
    pin5Type = DIGITAL; //the red LED
    pin6Type = DIGITAL; //the green LED
    pin7Type = DIGITAL; // RIGHT BUMPER
    //pin10Type = DIGITAL; //broken pin?
    pin23Type = DIGITAL; //motor
    pin24Type = DIGITAL; //motor
    pin25Type = DIGITAL; //motor
    pin26Type = DIGITAL; //motor
}


