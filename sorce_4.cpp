#include <iostream>

using namespace std;

int main() {
	int arr[5][5];
	int i = 0, j = 0;

	while (i < 5) {
		while (j < 5) {
			arr[i][j] = i * j;
			cout << arr[i][j];
			cout << ' ';
			j++;
		}
		cout << endl;
		j = 0;
		i++;
	}
	return 0;
}
