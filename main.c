#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "view_console.h"


int main(){ 
	printf("Digitstore v0.1.0\n");
	printf(">");

	output *out = (output*)malloc(sizeof(output));

	while (TRUE){
		command *cmd = getCommand();
		switch(cmd->cmd){
			case CMD_QUIT:
				return 0;
			case CMD_GET:
				
				break;
			case CMD_SET:

				break;
			case CMD_DELETE:

				break;
		}
	printf (">");
	}

	free(out);
}