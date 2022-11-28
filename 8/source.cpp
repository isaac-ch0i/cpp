#include <iostream>
#include "Buff.h"
#include "Fight.h"
#include "Class.h"

using namespace std;

int game_start();
int select_difficulty();
int player_status();
int monster_status();
int get_point();

extern player alpha;
extern monster beta;
char action[6] = {};

int main() {
	game_start();
}

int game_start() {
	char carr[8] = {};
	int turn = 0;

	alpha.hp = 10;
	alpha.op = 1;
	beta.hp = 10;

	select_difficulty();
	while (alpha.hp != 0 && beta.hp != 0) {
		cout << turn << "turn" << endl;
		monster_status();
		player_status();
		cout << "Select player's action" << endl;
		cin >> action;
		buff(action);
		turn++;
	}
	get_point();
	cout << "Select exit or restart" << endl;
	cin >> carr;
	if (!strcmp(carr, "restart")) {
		return (game_start());
	}
	return (0);
}

int select_difficulty() {

	char difficulty[11];

	cout << "Select difficulty" << endl;
	cin >> difficulty;

	if (!strcmp(difficulty, "easy")) {
		beta.op = 1;
	}
	if (!strcmp(difficulty, "normal")) {
		beta.op = 2;
	}
	if (!strcmp(difficulty, "hard")) {
		beta.op = 3;
	}
	if (!strcmp(difficulty, "impossible")) {
		beta.op = 5;
	}
	return (0);
}

int player_status() {
	cout << "player hp : ";
	for (int i = 0; i < alpha.hp; i++) {
		cout << "*" << " ";
	}
	cout << endl;
	cout << "player op : " << alpha.op << endl;
	return (0);
}

int monster_status() {
	cout << "moster hp : ";
	for (int i = 0; i < beta.hp; i++) {
		cout << "*" << " ";
	}
	cout << endl;
	cout << "monster op : " << beta.op << endl;
	return (0);
}

int get_point() {
	if (alpha.hp == 0) {
		cout << "You get 0 points" << endl;
	}
	else if (beta.hp == 0) {
		cout << "You get " << alpha.hp << " points" << endl;
	}
	return (0);
}
