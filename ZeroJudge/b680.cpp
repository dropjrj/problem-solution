#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    map <double, int> s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        double score;
        cin >> num >> score;
        s.insert(make_pair(score, num));
    }
    int teamC = n / 8;
    int t[teamC + 2][10];
    int dir[] = {4, 5, 3, 6, 2, 7, 1, 8};
    auto x = s.begin();
    for (int i = 0; i < 8; i++) {
        if (i % 2) {
            for (int j = teamC; j >= 1; j--) {
                t[j][dir[i]] = (*x).second;
                x++;
            }
        }
        else {
            for (int j = 1; j <= teamC; j++) {
                t[j][dir[i]] = (*x).second;
                x++;
            }
        }
    }

    for (int i = 1; i <= teamC; i++) {
        cout << i;
        for (int j = 1; j <= 8; j++) {
            cout << " " << t[i][j];
        }
        cout << endl;
    }

    return 0;
}
