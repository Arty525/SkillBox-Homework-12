#include <iostream>
using namespace std;
int main() {
	float numbers[15];
	float number;

	cout << "Input 15 numbers: " << endl;
	//Input values
	for (int i = 0; i != 15; ++i) {
		cout << i + 1 << ") ";
		cin >> number;
		numbers[i] = number;
	}
	float sort[15];

	//Searching minimal value
	for (int x = 0; x != 15; ++x) {
		for (int i = 0; i != 15; ++i) {
			bool found = false;
			if (numbers[i] == sort[x - 1] && x > 0)++i;
			for (int n = 0; n != 15 && found != true; ++n) {
				if (numbers[n] == sort[x - 1] && x > 0) ++n;
				if (numbers[n] < numbers[i] && numbers[n] > sort[x-1]) {
					found = true;
					sort[x] = numbers[n];
				}
			}
		}
	}

	for(int i = 0;i != 15;++i) cout << sort[i] << endl;
}