#include <stdio.h>
#include <string.h>

#define LEN 501

int main()
{
    int side, task;
    int food[LEN][LEN];
    while (~scanf("%d%d", &side, &task)) {
        memset(food, 0, sizeof(food));
        int i, j;
        for (i = 1; i <= side; i++) {
            for (j = 1; j <= side; j++) {
                scanf("%d", &food[i][j]);
                food[i][j] += food[i][j - 1] + food[i - 1][j] - food[i - 1][j - 1];
            }
        }
        //input and accumulate all data
        for (i = 0; i < task; i++) {
            int rowfrom, rowto, columnfrom, columnto, ans;
            scanf("%d%d%d%d", &rowfrom, &columnfrom, &rowto, &columnto);
            ans = food[rowto][columnto] - food[rowfrom - 1][columnto] - food[rowto][columnfrom - 1] + food[rowfrom - 1][columnfrom - 1];
            printf("%d\n", ans);
        }
    }

    return 0;
}
