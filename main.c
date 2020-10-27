#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "player.h"

int main() {
	srand(time(NULL));

	struct player *One;
	struct player *Two;

	One = new_player("Steve", 10, 10);
	Two = new_player("Alex", 10, 10);

	int hearts = rand() % 10;
	int hunger = rand() % 10;

	display_player(One);
	printf("\nSteve loses %d heart(s) and %d hunger!\n\n", hearts, hunger);
	take_damage(One, hearts);
	use_energy(One, hunger);
	display_player(One);
	free(One);
	
	printf("\n");

	hearts = rand() % 10;
	hunger = rand() % 10;

	display_player(Two);
	printf("\nAlex loses %d heart(s) and %d hunger!\n\n", hearts, hunger);
	take_damage(Two, hearts);
	use_energy(Two, hunger);
	display_player(Two);
	free(Two);

	return 0;
}