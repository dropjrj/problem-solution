#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n)
        cout << (n * n - n) / 2 + 1 << endl;

    return 0;
}
