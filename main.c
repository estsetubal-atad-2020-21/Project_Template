#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

#include "list.h"
#include "listElem.h"
#include "map.h"
#include "mapElem.h"


#include "stringCode.h"
#include "input.h"
#include "utils.h"

void printCommandsMenu();
void waitFunction();


int main() {

	setlocale(LC_ALL, "Portuguese");
	setlocale(LC_ALL, "PT");

    /* commands interpreter */
	String command;
	int quit = 0;
	
	while (!quit) {
		
		printCommandsMenu();
		fgets(command, sizeof(command), stdin);
		/* descartar 'newline'. Utilizar esta técnica sempre que for lida uma
		* string para ser utilizada, e.g., nome de ficheiro, chave, etc.. */
		command[strlen(command) - 1] = '\0';

		if (equalsStringIgnoreCase(command, "QUIT")) {
			quit = 1; /* vai provocar a saída do interpretador */				
		}
		else if (equalsStringIgnoreCase(command, "LOADCL")) {
			// Insert call for function here ...

			waitFunction();			
		}
		else {
			printf("Command not found!");
			waitFunction();	
		}
	}

}


void printCommandsMenu() {
	printf("\n\n");
	printf("COMMAND> ");
}

void waitFunction() {
	printf("\nPress enter to continue ...");
	getchar();
}
