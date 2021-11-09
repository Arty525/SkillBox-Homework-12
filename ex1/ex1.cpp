#include <iostream>
using namespace std;

int main() {
    string tenants[10];
    int apart;
    cout << "Input 10 surnames of tenants: " << endl;
    for(int i = 0; i < 10; ++i){
        cin >> tenants[i];
    }
    do{
        cout << "Input apartment number (from 1 to 10): ";
        cin >> apart;
        if(apart < 1 || apart > 10) cout << "Error! Incorrect number. Try again.";
    } while(apart >= 10);
    cout << tenants[apart - 1];
    return 0;
}
