#include<iostream>
#include "Inherit.h"
using namespace std;

int main() {
	parent mom;
	child son;

	cout << "부모 성별 : ";
	cin >> mom.sex;
	cout << mom.sex << endl;
	cout << "부모 나이 : ";
	cin >> mom.age;
	cout << mom.age << endl;
	cout << "자식 성별 : ";
	cin >> son.sex;
	cout << son.sex << endl;
	cout << "자식 나이 : ";
	cin >> son.age;
	cout << son.age << endl;
	cout << "자식 학교 : ";
	cin >> son.school;
	cout << son.school << endl;
}
