#include <iostream>
using namespace std;

int main() {
    int numbers[15] = {114,111,106,107,108,105,115,108,110,109,112,113,116,117,118};
    int repeat = 0;
    int startPos = numbers[0];
    int sort[15];
    for (int i = 0; i < 15; ++i) {
        if (numbers[i] < startPos) {
            startPos = numbers[i];
        }
    }
    for (int i = 0; i < 15; ++i) {
        int x = numbers[i] - startPos;
        if (sort[x] == numbers[i]) repeat = numbers[i];
        else sort[x] = numbers[i];
    }
    cout << "Repeated number: " << repeat << endl;
}