#include "view_console.h"
#include <stdlib.h>
#include <stdio.h>

char inputBuffer[1024];

command *getCommand(){
	fgets((char *)&inputBuffer, 1024, stdin);

	printf("\n\n%s\n", inputBuffer);
}
