#pragma once
#include <iostream>

using namespace std;

class Circle {
	int r;

public:
	Circle(int r) {
		this->r = r;
	}
	~Circle() {
	}
	void showArea() {
		cout << "원의 넓이:" << r*r*3.14 <<endl;
	}
};
