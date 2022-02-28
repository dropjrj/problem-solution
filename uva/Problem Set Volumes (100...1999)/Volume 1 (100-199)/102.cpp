#include <bits/stdc++.h>
using namespace std;

int main() {
	string s[] = {"BCG", "BGC", "CBG", "CGB", "GBC", "GCB"};
	int bin[5][5];
    while (cin >> bin[0][0]) {
        int moveC[10] = {0};
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (i == 0 && j == 0) continue;
                cin >> bin[i][j];
            }
        }
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 3; j++) {
                if (s[i][j] == 'B') moveC[i] += bin[j][1] + bin[j][2];
                else if (s[i][j] == 'G') moveC[i] += bin[j][0] + bin[j][2];
                else moveC[i] += bin[j][0] + bin[j][1];
            }
        }
        int minindex = *min_element(moveC, moveC + 6);
        for (int i = 0; i < 6; i++)
            if (moveC[i] == minindex) {
                cout << s[i] << ' ' << minindex << endl;
                break;
            }
    }

	return 0;
}
