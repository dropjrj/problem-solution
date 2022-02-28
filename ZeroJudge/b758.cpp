#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, m;
    cin >> h >> m;
    m += h * 60 + 150;
    m %= 24 * 60;
    h = m / 60;
    m %= 60;
    printf("%02d:%02d\n", h, m);

    return 0;
}
