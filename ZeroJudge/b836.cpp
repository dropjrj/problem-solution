#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int petal, d, take = 1;
    while (cin >> petal >> d) {
        if (d == 0) {
            cout << "Go Kevin!!";
        }
        else {
            while (petal > 0) {
                petal -= take;
                take += d;
            }
            if (petal == 0) {
                cout << "Go Kevin!!";
            }
            else {
                cout << "No Stop!!";
            }
        }
        cout << endl;
    }

    return 0;
}
