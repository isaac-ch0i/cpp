#include <iostream>
#include "Coordinate.h"
#include "Inverse.h"

using namespace std;

int main() {
	Coordinate a0;
	Coordinate a1;
	double d;

	cin >> a0.x;
	cin >> a0.y;
	cin >> a1.x;
	cin >> a1.y;

	d = calculate(a0, a1);
	cout << d << endl;
	d = calculate_pt(&a0, &a1);
	cout << d;
}
