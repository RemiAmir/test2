#include <stdio.h>
#include <hellomake.h>


void myPrintHelloMake(void) {

  printf("Hello makefiles 44 time!\n");


char command[50];
   strcpy( command, "ls -l" );
   system(command);

  return;
}
