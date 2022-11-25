#include <iostream>
#include "헤더.h"

using namespace std;

int main() {
	int random_num;
	int answer;

	random_num = rolling();
	for (int i = 0; i < 5; i++) {
		cin >> answer;
		if (answer > random_num) {
			cout << "down" << endl;
		}
		if (answer < random_num) {
			cout << "up" << endl;
		}
		if (answer == random_num) {
			cout << "correct" << endl;
			break;
		}
	}
	cout << "Correct answer is " << random_num;
	return (0);
}
