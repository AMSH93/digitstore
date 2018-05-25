#include <stdlib.h>

#ifndef COMMON
#define COMMON true

/*we have booleans now*/
typedef int bool;
#define TRUE 1
#define FALSE 0


/*Input:*/
typedef struct command {
	int cmd;
	int key;
	char *value;
} command;



/*Output:*/
typedef struct output {
	bool success;
	int key;
	char *value;
} output;

#endif