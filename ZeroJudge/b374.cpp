#include <iostream>
using namespace std;

#define LEN 30001

int main(){
    int numC;
    int list[LEN] = {0};
    int min = LEN, max = 0, maxC = 0;
    cin >> numC;
    for (int i = 0; i < numC; i++) {
        int index;
        cin >> index;
        if (index < min) min = index;
        if (index > max) max = index;
        list[index]++;
    }
    for (int i = min; i <= max; i++) {
        if (list[i] > maxC) maxC = list[i];
    }
    for (int i = min; i <= max; i++) {
        if (list[i] == maxC) {
            cout << i << ' ' << maxC << endl;
        }
    }

    return 0;
}
