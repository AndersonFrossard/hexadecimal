/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 * Author  : Anderson Frossard
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           02/10/21  Created                                              *
 *                                                                          *
 * Kind regards to:															*
 * AnarkiA BBS																*
 * OutLaW! BBS																*
 * AcE!    BBS																*
 * MutantZ BBS																*
 * RebelZ  BBS																*
 ****************************************************************************/


/*************************** HEADER FILES ***************************/
#include <stdio.h>
#include <limits.h>
#include <string.h>

// https://www.freecodecamp.org/news/format-specifiers-in-c/

/*********************** FUNCTION DEFINITIONS ***********************/
int print_hex(char* sentence) {
	printf("Converting into HEX: %s\n\n", sentence);
	for (int i = 0; i < strlen(sentence); i++){
		printf(" %c ", sentence[i]);
	}
	printf("\n");
	for (int i = 0; i < strlen(sentence); i++) {
		printf("%x ", sentence[i]);
	}
	return 0;	
}

char * get_input(char * texto, int MAX){
	char buffer[MAX];
	printf("Enter a passphrase to convert into HEX: \n", texto);
	fgets(buffer, MAX-1, stdin);			// fgets leaves my string with \n at the end
	buffer[strlen(buffer) - 1] = '\0';		// Removes \n from the last position 
	memcpy(texto, buffer, sizeof(buffer)-1);
	return texto;

}

int main(int argc, char* argv[])
{
	int MAX = 4096;
	
    printf("... ASCII to HEX converter ...\n");

	char entrada[4096];
	char * saida;
	saida = get_input(entrada, MAX);
	print_hex(saida);
	printf("\n");
	printf("%d bytes, %d bits\n",strlen(saida), strlen(saida)*CHAR_BIT);		//Count number of characters and calculate its bits

	printf("Press any key to finish");
	scanf("%d");

	
    return 0;
}
