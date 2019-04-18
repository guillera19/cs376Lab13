/**
 * robot.c
 *
 * A file that contains the supporting functions for main() in the
 * ~/robots example source for Software Engineering.
 *
<<<<<<< HEAD
 * @author Tanya L. Crenshaw, Nathan Schmedake, Kayla Moore
=======
<<<<<<< HEAD
 * @author Kama Simon
=======
 * @author Tanya L. Crenshaw, Nathan Schmedake, Avery
>>>>>>> f235b1e8fcac7e2391710e854027d35da39fe7df
>>>>>>> 3e1dd6c25e5b2211808893e9ecd9906ff9d24922
 * @since August 2013
 *
 */

#include "robot.h"

/**
 * robotPrintMessage
 *
 * This function prints the message, "I really love robots!"
 *
 * @returns none 
 */
void robotPrintMessage(void)
{
  printf("\n\nRobots are scary!\n\n");
  return;
}

/**
 * robotPrintAscii
 *
 */
void robotPrintAscii(void)
{
  int i;
  char* blank = "                              ";
  blank = blank +30;
  printf("\n\n"
	 "UWR: Unidentified Wheeled Robot\n"
<<<<<<< HEAD
	 "%s    i_i    \n"
	 "%s   [*_*]   \n"
=======
<<<<<<< HEAD
	 "%s    V_V    \n"
	 "%s   [0_0]   \n"
=======
	 "%s    !_!    \n"
	 "%s   [!_!]   \n"
>>>>>>> f235b1e8fcac7e2391710e854027d35da39fe7df
>>>>>>> 3e1dd6c25e5b2211808893e9ecd9906ff9d24922
	 "%s  /|___|\\ \n"
	 "%s   d   b   \n",blank, blank, blank, blank);

  blank = blank - 10;
}

/**
 * dalekPrintAscii
 *
 */
void dalekPrintAscii(void)
{
  int i;
  char* blank = "                              ";
  blank = blank +30;
  printf("\n\n"
	 "I am Dalek, from Dr. Who\n"
	 "%s      <----->      \n" 
         "%s     <  (0)  >     \n"        
         "%s     |       |     \n"
         "%s    < ------- >    \n"
         "%s    o         o    \n"
         "%s    o  0  ()  o    \n"
	 "%s   o           o   \n"
   	 "%s o o o o o o o o o \n"
   	 "%s o o o o o o o o o \n"
   	 "%s o o o o o o o o o \n", blank, blank, blank, blank, blank, blank, 
	 blank, blank, blank, blank);
  blank = blank - 10;
}
