#ifndef DICE_H
#define DICE_H

typedef struct {
	unsigned int num_dice;
	unsigned int num_sides;
} dice_t;

dice_t dice_init(unsigned int num_dice, unsigned int num_sides);
unsigned int* roll_dice(dice_t dice);

#endif
#ifndef DICE_SRC
#define DICE_SRC
#include <stdlib.h>
#include <assert.h>

dice_t dice_init(unsigned int num_dice, unsigned int num_sides){
	assert(num_dice  != 0);
	assert(num_sides != 0);

	dice_t dice;
	dice.num_dice = num_dice;
	dice.num_sides = num_sides;

	return dice;
}

unsigned int* roll_dice(dice_t dice){
	srand(time(NULL));
	unsigned int* results = calloc(dice.num_dice, sizeof(unsigned int));
	
	for(unsigned int i = 0; i < dice.num_dice; i++)
		results[i] = (rand() % dice.num_sides) + 1;

	return results;
}

#endif

