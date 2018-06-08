#include <stdio.h>
#include "common.h"
#include "view_console.h"


int main(){
	printf("Digitstore v0.1.0\n");
	printf(">");
	while (1){
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
}