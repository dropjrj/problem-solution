#include <stdio.h>

#define LEN 200


int main()
{
    int task;
    scanf("%d", &task);
    int x[task], y[task];
    for (int i = 0; i < task; i++) {
        scanf("%d%d", &x[i], &y[i]);
    }
    for (int i = 0; i < task; i++) {
        for (int j = i + 1; j < task; j++) {
            if (x[i] > x[j]) {
                int tmp = x[i];
                x[i] = x[j];
                x[j] = tmp;
                tmp = y[i];
                y[i] = y[j];
                y[j] = tmp;
            }
        }
    }
    for (int i = 0; i < task; i++) {
        for (int j = i + 1; j < task; j++) {
            if (x[i] == x[j] && y[i] > y[j]) {
                int tmp = x[i];
                x[i] = x[j];
                x[j] = tmp;
                tmp = y[i];
                y[i] = y[j];
                y[j] = tmp;
            }
        }
    }
    for (int i = 0; i < task; i++) {
        printf("%d %d\n", x[i], y[i]);
    }

    return 0;
}
