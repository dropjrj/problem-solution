#include <iostream>
using namespace std;

int main() {
    int task, h[2], m[2], cost;
    cin >> task;
    while (task--) {
        cin >> h[0] >> m[0] >> h[1] >> m[1] >> cost;
        m[0] += cost;
        h[0] += m[0] / 60;
        m[0] %= 60;
        if (h[0] < h[1] || (h[0] == h[1] && m[0] <= m[1])) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }

    return 0;
}
