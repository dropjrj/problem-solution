#include <stdio.h>

int main()
{
    int pw[4], trys, guess[4], A, B;
    while (~scanf("%d", &pw[0])) {
        for (int i = 1; i < 4; i++) {
            scanf("%d", &pw[i]);
        }
        scanf("%d", &trys);
        for (int i = 0; i < trys; i++) {
            int temp[4];
            for (int i = 0; i < 4; i++) {
                temp[i] = pw[i];
            }
            A = B = 0;
            for (int j = 0; j < 4; j++) {
                scanf("%d", &guess[j]);
            }
            for (int j = 0; j < 4; j++) {
                if (temp[j] == guess[j]) {
                    A++;
                    temp[j] = guess[j] = -1;
                }
            }
            for (int j = 0; j < 4; j++) {
                if (temp[j] != -1) {
                    for (int k = 0; k < 4; k++) {
                        if (temp[j] == guess[k]) {
                            B++;
                            guess[k] = -1;
                            break;
                        }
                    }
                }
            }
            printf("%dA%dB\n", A, B);
        }
    }

    return 0;
}
