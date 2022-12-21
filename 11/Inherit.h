#pragma once
#include <iostream>
#include <string>

class parent {
public:
	char sex;
	int age;
};

class child : public parent {
public:
	char school[11];
};
