#include <iostream>
using namespace std;

int main(){
    int task, row, col;
    cin >> task;
    while (task--) {
        cin >> row >> col;
        int num[row * col];
        for (int i = 0; i < row * col; i++) {
            cin >> num[i];
        }
        bool go = true;
        for (int i = 0; i < row * col / 2; i++) {
            if (num[i] != num[row * col - i - 1]) {
                go = false;
                break;
            }
        }
        if (go) {
            cout << "go forward\n";
        }
        else {
            cout << "keep defending\n";
        }
    }

    return 0;
}
