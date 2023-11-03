#ifndef DICE_H
#define DICE_H

int roll_die(int num_sides);
int* roll_dice(int num_sides, int num_dice);

#endif
#ifndef DICE_SRC
#define DICE_SRC
#include<stdlib.h>

int roll_die(int num_sides){
	return ((rand() % num_sides) + 1);
}

int* roll_dice(int num_dice, int num_sides){
	int* ret_arr = calloc(num_dice, sizeof(int));
	
	for(int i = 0; i < num_dice; i++){
		ret_arr[i] = roll_die(num_sides);
	}

	return ret_arr;
}

#endif

