#include "view_console.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char inputBuffer[1024];

command *getCommand(){
	while(TRUE) {
		fgets((char *)&inputBuffer, 1024, stdin);

		char cmdName[1024];
		int digit;
		char value[1024]; 

		sscanf(inputBuffer, "%s %d %s", (char*)&cmdName, &digit, (char*)&value);  

		if(strcmp("QUIT",cmdName)==3) {
			printf("Ok QUIT\n");
			return NULL;	
		}
		printf("UNKNOWN COMMAND\n");
		printf(">");
	}
}	
