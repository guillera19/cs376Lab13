/**
 * main.c
 * 
 * The main entrypoint of the "I really love robots" program.  The
 * program prints the phrase "I really love robots!" to the screen.
 *
 * @author Tanya L. Crenshaw
 * @since August 2013
 *
 */
#include "robot.h"
#include <ctype.h>
#include <stdlib.h>
/**
 * main()
 *
 * The main entrypoint of the program.
 * 
 * @param command line arguments.
 * 
 * @returns nothing.
 */
int main(int argc, const char * argv[])
{

  int a = atoi(argv[1]);
  printf("%d",a);  
  printf("%d", argc);
  if(argc > 0){
     for (int i = 0; i < a; i++){
       robotPrintAscii();
       dalekPrintAscii();
       robotPrintMessage();
      }
  } 
  else{
    robotPrintAscii();
  }
  return 0;
}
