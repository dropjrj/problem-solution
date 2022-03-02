#include <bits/stdc++.h>
using namespace std;

int degree[15000];
int pointC;

bool cmp (int a, int b) {
    return a > b;
}

bool g() {
    for (int i = 0; i < pointC; i++) {
        sort(degree + i, degree + pointC, cmp);
        for (int j = i + 1; j < pointC && degree[i] != 0; j++) {
            degree[i]--;
            degree[j]--;
            if (degree[j] < 0) return 0; // deficient
        }
        if (degree[i]) return 0; // abundant
    }
    return 1;
}

int main()
{
    while (cin >> pointC && pointC) {
        for (int i = 0; i < pointC; i++) {
            cin >> degree[i];
        }

        if (!g()) cout << "Not possible\n";
        else cout << "Possible\n";
    }
    return 0;
}
