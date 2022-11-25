#pragma once
#include <iostream>
#include <random>

int rolling() {
	std::random_device random;
	std::mt19937 dice(random());
	std::uniform_int_distribution<int> roll(0, 100);
	return(roll(dice));
}
