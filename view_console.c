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
		
		/*Checking for the commands in user input*/
		if(strcmp("QUIT",cmdName)==0) {
			printf("Ok QUIT\n");
			command *outCmd = (command*)malloc(sizeof(command));
			outCmd->cmd = CMD_QUIT;
			outCmd->key = 0;
			outCmd->value = NULL;
			return outCmd;
		} else if(strcmp("GET",cmdName)==0) {
			printf("Ok GET\n");
			command *outCmd = (command*)malloc(sizeof(command));
			outCmd->cmd = CMD_GET;
			outCmd->key = digit;
			outCmd->value = NULL;
			return outCmd;
		} else if(strcmp("SET",cmdName)==0) {
			printf("Ok SET\n");
			command *outCmd = (command*)malloc(sizeof(command));
			outCmd->cmd = CMD_SET;
			outCmd->key = digit;
			outCmd->value = value;
			return outCmd;
		} else if(strcmp("DELETE",cmdName)==0) {
			printf("Ok DELETE\n");
			command *outCmd = (command*)malloc(sizeof(command));
			outCmd->cmd = CMD_DELETE;
			outCmd->key = digit;
			outCmd->value = NULL;
			return outCmd;
		}
		printf("UNKNOWN COMMAND\n");
		printf(">");
	}
}	
