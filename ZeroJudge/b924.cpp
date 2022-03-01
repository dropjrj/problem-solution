#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int pointC, sideC;
    while (cin >> pointC >> sideC) {
        int g[10050];
        for (int i = 0; i < sideC; i++) {
            int s1, s2;
            cin >> s1 >> s2;
            g[s1]++;
            g[s2]++;
        }
        int odd = 0;
        for (int i = 1; i <= pointC; i++) {
            if (g[i] % 2) odd++;
        }
        if (odd > 2) cout << "NO\n";
        else cout << "YES\n";
        cout << endl;
    }

    return 0;
}
