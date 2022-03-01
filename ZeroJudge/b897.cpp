#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    while (cin >> n >> k) {
        double ans = 0;
        if (k > n / 2) k = n - k;
        for (int i = 0; i < k; i++) ans += log10(n - i);
        for (int i = 1; i <= k; i++) ans -= log10(i);
        cout << (int)ans + 1 << endl;
    }

    return 0;
}

