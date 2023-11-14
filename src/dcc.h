#ifndef DCC_H
#define DCC_H
#include "dice.h"

#define MAX_STR_LEN	128 
#define MAX_INIT_DICE 3

typedef enum {
	CLERIC,
	THIEF,
	WARRIOR,
	WIZARD,
	DWARF,
	ELF,
	HALFLING,
	NUM_CLASSES
} class_t;

typedef enum {
	STR,	// strength
	AGI,	// agility
	STA,	// stamina
	PER,	// personality
	INT,	// intelligence
	LUC,	// luck
	NUM_ATTRIBUTES	//will automatically be equal to # of attributes
} attribute_t;

typedef enum {
	LAWFUL,
	NEUTRAL,
	CHAOTIC,
	NUM_ALLIGNMENTS
} alignment_t;

typedef enum {
	FORT,
	REFL,
	WILL,
	NUM_SAVES
} saves_t;

typedef struct {
	char name[MAX_STR_LEN];
	unsigned int attributes[NUM_ATTRIBUTES];
	unsigned int current_hp;
	unsigned int max_hp;
	unsigned int armor_class;
	unsigned int lucky_sign;
	unsigned int num_initiative_dice;
	unsigned int movement;
	int modifiers[NUM_ATTRIBUTES];
	dice_t health_dice;
	dice_t initiative_dice[MAX_INIT_DICE];
	alignment_t alignment;
} peasant_t;

typedef struct {
	char name[MAX_STR_LEN];
} npc_t;

peasant_t dcc_generate_peasant(void);

#endif
#ifndef DCC_SRC
#define DCC_SRC

peasant_t dcc_generate_peasant(void){
	dice_t attribute_dice = {3, 6};
	peasant_t peasant;

	return peasant;
};

#endif
