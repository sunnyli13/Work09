#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "player.h"

struct player *new_player(char *n, int h, int hu) {
	struct player *user;
	user = malloc(sizeof(struct player));

	strncpy(user->name, n, sizeof(user->name)-1);
	user->hearts = h;
	user->hunger = hu;

	return user;
}

void display_player(struct player *p) {
	printf("Name:\t%s\nHearts:\t%d\nHunger:\t%d\n", p->name, p->hearts, p->hunger);
}

void take_damage(struct player *p, int damage) {
	p->hearts -= damage;
}

void use_energy(struct player *p, int energy) {
	p->hunger -= energy;
}

void erase_player(struct player *player_name) {
	free(player_name);
}