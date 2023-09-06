#ifndef DCC_H
#define DCC_H

#define MAX_NAME_LEN 64
#define NUM_ATTRS	  6
#define NUM_ALIGNS	  3

typedef enum {
	STR,
	AGI,
	STA,
	PER,
	INT,
	LUC
} attr_t;

typedef enum {
	LAWFUL,
	NEUTRAL,
	CHAOTIC
} align_t;

typedef struct player_char_t {
	char name[MAX_NAME_LEN];
	unsigned int attrs[NUM_ATTRS];
	unsigned int mods[NUM_ATTRS];
	align_t alignment;
} player_char_t;

#endif