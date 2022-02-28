#include <iostream>
using namespace std;

#define CNT 5

int coinC, total, coinlist[CNT], coin[CNT];

void print() {
    cout << "(";
    for (int i = 0; i < coinC; i++) {
        cout << coin[i];
        if (i != coinC - 1) cout << ",";
    }
    cout << ")" << endl;
}

void recursive(int remainder, int index) {
    if (index == coinC - 1) {
        if (remainder % coinlist[index] == 0) {
            coin[index] = remainder / coinlist[index];
            print();
        }
        return;
    }
    int maxq = remainder / coinlist[index];
    for (int i = 0; i <= maxq; i++) {
        coin[index] = i;
        recursive(remainder - coinlist[index] * i, index + 1);
    }
}

int main(){
    cin >> coinC;
    for (int i = 0; i < coinC; i++) {
        cin >> coinlist[i];
    }
    cin >> total;
    recursive(total, 0);

    return 0;
}
