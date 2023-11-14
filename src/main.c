#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "dice.h"
#include "dcc.h"

typedef enum {
	ROLL_DICE,
	ROLL_PEASANT,
	EXIT,
	NUM_MENU_OPTIONS
} menu_opts_t;

char * options[NUM_MENU_OPTIONS] = {
	"Roll dice",
	"Roll peasant",
	"Exit program",
	NULL
};

int main(int argc, char** argv){
	srand(time(NULL));

	int menu_opt = 0;
	char * menu_str = options[menu_opt];
	while(menu_str){
		printf("%d. %s\n", menu_opt, menu_str);
		menu_str = options[++menu_opt];
	}
	
	int user_choice = -1;
	// get user input
	
	switch(user_choice){
		case EXIT:
			return 0;
			break;
		case ROLL_PEASANT:
			break;
		default:
			printf("[ERR] Menu choice invalid!\n");
			break;
	}

	exit(EXIT_SUCCESS);
}
