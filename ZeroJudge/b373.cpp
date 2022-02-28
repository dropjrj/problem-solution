#include <iostream>
using namespace std;

int main(){
    int carriageC, times = 0;
    cin >> carriageC;
    int carriage[carriageC];
    for (int i = 0; i < carriageC; i++) {
        cin >> carriage[i];
    }
    for (int i = 0; i < carriageC; i++) {
        for (int j = i + 1; j < carriageC; j++) {
            if (carriage[i] > carriage[j]) {
                swap(carriage[i], carriage[j]);
                times++;
            }
        }
    }
    cout << times << endl;

    return 0;
}
