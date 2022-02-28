#include <bits/stdc++.h>
using namespace std;

int main() {
    char input;
    deque <char> str;
    while (cin >> input) {
        str.push_back(input);
    }
    for (int i = 0; i < str.size(); i++) {
        for (auto x : str) {
            cout << x;
        }
        cout << endl;
        str.push_back(str.front());
        str.pop_front();
    }

    return 0;
}
