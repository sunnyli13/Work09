#ifndef PLAYER_H
#define PLAYER_H

struct player {
	char *name[256];
	int hearts;
	int hunger;
};

struct player *new_player(char *n, int h, int hu);

void display_player(struct player *p);

void take_damage(struct player *p, int damage);

void use_energy(struct player *p, int energy);

void erase_player(struct player *player_name);

#endif