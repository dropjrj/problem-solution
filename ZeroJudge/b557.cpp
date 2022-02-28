#include <iostream>
using namespace std;

bool isRtri(int a, int b, int c) {
    if (a * a + b * b == c * c) return 1;
    return 0;
}

int main() {
    int task, num[101];
    cin >> task;
    while (task--) {
        int numC, cases = 0;
        cin >> numC;
        for (int i = 0; i < numC; i++) {
            cin >> num[i];
        }
        for (int i = 0; i < numC; i++)
            for (int j = 0; j < numC; j++)
                for (int k = 0; k < numC; k++) {
                    cases += isRtri(num[i], num[j], num[k]);
                }
        printf("%d\n", cases / 2);
    }

    return 0;
}
