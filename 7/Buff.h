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
			cout << "att_up : " << degree << endl;
		}
		if (buff_sort == 2) {
			degree = rolling();
			alpha.hp = alpha.hp + degree;
			cout << "hp_up : " << degree << endl;
			if (alpha.hp > 10) {
				alpha.hp = 10;
			}
		}
		if (buff_sort == 3) {
			degree = rolling();
			alpha.hp = alpha.hp - degree;
			cout << "hp_down : " << degree << endl;
		}
	}
	fight(action);
	return (0);
}

int rolling() {
	std::random_device random;
	std::mt19937 dice(random());
	std::uniform_int_distribution<int> roll(1, 3);
	return(roll(dice));
}
