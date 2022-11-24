#pragma once
#include <iostream>
#include "Class.h"

using namespace std;

extern player alpha;
extern monster beta;

int fight(char action[6]) {
	if (!strcmp(action, "fight")) {
		beta.hp = beta.hp - alpha.op;
	}
	alpha.hp = alpha.hp - beta.op;
	if (alpha.hp < 0) {
		alpha.hp = 0;
	}
	if (beta.hp < 0) {
		beta.hp = 0;
	}
	return (0);
}
