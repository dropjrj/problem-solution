#include <stdio.h>
#include <string.h>

#define LEN 501
void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int side, task, land[LEN][LEN], pre[2], now[2];
    while (~scanf("%d%d", &side, &task)) {
        memset(land, 0, sizeof(land));
        int i, j;
        for (i = 0; i < task; i++) {
            scanf("%d%d", &now[0], &now[1]);
            if (i == 0) {
                land[now[0]][now[1]] = 1;
            }
            else {
                if (pre[0] == now[0]) {
                    int y1 = pre[1], y2 = now[1];
                    if (y1 > y2) swap(&y1, &y2);
                    for (j = y1; j <= y2; j++) {
                        land[pre[0]][j] = 1;
                    }
                }
                else {
                    int x1 = pre[0], x2 = now[0];
                    if (x1 > x2) swap(&x1, &x2);
                    for (j = x1; j <= x2; j++) {
                        land[j][pre[1]] = 1;
                    }
                }
            }
            memcpy(pre, now, sizeof(now));
        }
        
        for (i = 0; i <= side + 1; i++) {
            printf("-");
        }
        puts("");
        for (i = 1; i <= side; i++) {
            printf("|");
            for (j = 1; j <= side; j++) {
                printf("%c", (land[i][j] == 1) ? '*' : ' ');
            }
            printf("|\n");
        }
        for (i = 0; i <= side + 1; i++) {
            printf("-");
        }
        puts("");
    }

    return 0;
}
