#include <iostream>
using namespace std;

int main() {
    int numbers[15] = {114,111,106,107,108,105,115,108,110,109,112,113,116,117,118};
    int repeat = 0;
    for (int i = 0; i < 15; ++i) {
        for (int n = i+1; n < 15; ++n) {
            if (numbers[n] == numbers[i]) {
                repeat = numbers[n];
                break;
            }
        }
        if (repeat != 0) break;
    }
    cout << "Repeated number: " << repeat << endl;
}