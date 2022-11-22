#pragma once
#include <iostream>

int calculate(Coordinate a0, Coordinate a1) {
	int d;

	d = sqrt(pow(a0.x - a1.x, 2) + pow(a0.y - a1.y, 2));
	return (d);
}
int calculate_pt(Coordinate *a0, Coordinate *a1) {
	int d;

	d = sqrt(pow(a0->x - a1->x, 2) + pow(a0->y - a1->y, 2));
	return (d);
}
