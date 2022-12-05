#include <iostream>

using namespace std;

int main() {
	int tmp;
	int n;
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i < n; i++) {
		if (arr[i] < arr[i - 1]) {
			tmp = arr[i];
			arr[i] = arr[i - 1];
			arr[i - 1] = tmp;
			i = 1;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	delete[] arr;
}
