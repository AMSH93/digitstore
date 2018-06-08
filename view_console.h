/*Digitstore */
#include "common.h"

#ifndef VIEW_CONSOLE
#define VIEW_CONSOLE true


/*Letting the layer know what commands are, 
and assigns a number to them. */
#define CMD_GET 0
#define CMD_SET 1
#define CMD_DELETE 2
#define CMD_QUIT 3


command* getCommand();

void doOutput(output *out);

#endif