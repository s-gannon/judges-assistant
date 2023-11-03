#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "dice.h"

char ** options = {
	"Roll dice",
	"Exit program",
	NULL
};

int main(int argc, char** argv){
	srand(time(NULL));

	int menu_opt = 0;
	char * menu_str = options[menu_opt];
	while(menu_str){
		printf("%d. %s\n", menu_opt, menu_str);
	}

	exit(EXIT_SUCCESS);
}
