#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "dice.h"

void print_arr(unsigned int* arr, unsigned int arr_size){
	for(unsigned int i = 0; i < arr_size; i++) printf("%d ", arr[i]);
}

int main(int argc, char** argv){
	srand(time(NULL));

	if(argc < 2){
		printf("[ERROR] Number of args is invalid!\n");
		printf("%s <dice format> ...\n", argv[0]);
		printf("Standard dice format is <number of dice>d<number of faces>\n");
		exit(EXIT_FAILURE);
	}
	
	dice_t dice;
	for(int i = 1; i < argc; i++){
		char del = 'd';
		dice = dice_init(atoi(strtok(argv[i], &del)), atoi(strtok(NULL, &del)));

		printf("Rolling %dd%d...\n", dice.num_dice, dice.num_sides);
		printf("Rolled: ");
	
		print_arr(roll_dice(dice), dice.num_dice);
		printf("\n");
	}

	exit(EXIT_SUCCESS);
}
