#pragma once
#include <iostream>
#include <random>
#include "Fight.h"
#include "Class.h"

using namespace std;

int rolling();

extern player alpha;
extern monster beta;

int buff(char action[6]) {
	int buff_sort;
	int degree;
	if (!strcmp(action, "fight")) {
		fight(action);
		return (0);
	}
	if (!strcmp(action, "buff")) {
		buff_sort = rolling();
		if (buff_sort == 1) {
			degree = rolling();
			alpha.op = alpha.op + degree;
		}
		if (buff_sort == 2) {
			degree = rolling();
			alpha.hp = alpha.hp + degree;
			if (alpha.hp > 10) {
				alpha.hp = 10;
			}
		}
		if (buff_sort == 3) {
			degree = rolling();
			alpha.hp = alpha.hp - degree;
		}
	}
	return (0);
}

int rolling() {
	std::random_device random;
	std::mt19937 dice(random());
	std::uniform_int_distribution<int> roll(1, 4);
	return(roll(dice));
}
