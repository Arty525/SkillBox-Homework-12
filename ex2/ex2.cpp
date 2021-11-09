#include <iostream>
using namespace std;

int main() {
    int numbers[15] = {114,111,106,107,108,105,115,108,110,109,112,113,116,117,118};
    int sort[15];
    sort[0] = numbers[0];
    int current;
    int startPos;
    int repeat = 0;
    for(int i = 0;i < 15;++i){
        if(numbers[i] < sort[0]) sort[0] = numbers[i];
        startPos = i;
    }
    for(int i = 0; i < 15; ++i){
        if(i != startPos && repeat == 0) sort[numbers[i] - sort[0]] = numbers[i];
        else if(i == startPos && repeat == 0) ++i;
        if (numbers[i] == sort[numbers[i] - sort[0] - 1]) {
            int repeat = numbers[i];
            sort[numbers[i] - sort[0]] = numbers[i];
        }
        if(i != startPos && repeat != 0) {
            sort[numbers[i] - sort[0] + 1] = numbers[i];
        }
        else if (i == startPos && repeat == 0) ++i;
    }

    for(int i = 0;i < 15; ++i) cout << sort[i] << endl;
    cout << "Repeated number: " << repeat << endl;
}


//for(int n = 0;n < 15;++n){
//            if(numbers[n] - sort[i-1] == 1 && i != 0){
//                sort[i] = numbers[n];
//            }
//            else if (numbers[n] - sort[i-1] == 0){
//                repeat = numbers[n];
//                sort[i] = numbers[n];
//            }
//        }