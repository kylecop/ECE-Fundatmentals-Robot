/* main.c - main routine goes here
 * Author: Kyle Coppedge   
 * Purpose: Project 1
 * date: 1/11/2018
 */

#include <p30f3013.h>
#include "aliases.h"
#include "utilities.h"

int main() {
  /* initialize the ability to send messages to the
   * PICKit 2 using printf.
   */
  initializeUART();

  // put code here!
  printf("ECE Rules!\r\n");

  return(0);
}
