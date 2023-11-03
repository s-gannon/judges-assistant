#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "dice.h"

void print_arr(int* arr, int arr_size){
	for(int i = 0; i < arr_size; i++) printf("%d ", arr[i]);
}

int main(int argc, char** argv){
	srand(time(NULL));

	if(argc != 3){
		printf("[ERROR] Number of args is invalid!\n");
		printf("%s <num dice> <num sides>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	int num_dice = atoi(argv[1]);
	int num_sides = atoi(argv[2]);
	int* dice_rolls = NULL;

	printf("Rolling %dd%d...\n", num_dice, num_sides);
	printf("Rolled: ");
	
	if(num_dice == 1){
		printf("%d\n", roll_die(num_sides));
	}
	else{
		dice_rolls = roll_dice(num_dice, num_sides);
		print_arr(dice_rolls, num_dice);
		printf("\n");
	}

	exit(EXIT_SUCCESS);
}
