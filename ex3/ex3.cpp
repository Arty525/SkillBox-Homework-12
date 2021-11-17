#include <iostream>
using namespace std;

int main() {
	float numbers[15];
	float number;

	cout << "Input 15 numbers: " << endl;
	for (int i = 0; i != 15; ++i) {
		cout << i + 1 << ") ";
		cin >> number;
		if (i > 0 && number >= numbers[i - 1]) {
			numbers[i] = number;
		}
		else if (i == 0) {
			numbers[i] = number;
		}
		else {
			for (int x = i;number < numbers[x - 1]; --x) {
				numbers[x] = numbers[x - 1];
				numbers[x - 1] = number;
			}
		}
	}
	for (int i = 0; i != 15; ++i) cout << numbers[i] << endl;
}
