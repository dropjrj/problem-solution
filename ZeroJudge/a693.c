#include <stdio.h>
#include <string.h>

#define LEN 150000

int main() {
    int foodC, task;
    int food[LEN], from, to;
    memset(food, 0, sizeof(food));
    while (~scanf("%d%d", &foodC, &task)) {
        for (int i = 1; i <= foodC; i++) {
            int tmp;
            scanf("%d", &tmp);
            food[i] = food[i - 1] + tmp;
        }
        for (int i = 0; i < task; i++) {
            scanf("%d%d", &from, &to);
            printf("%d\n", food[to] - food[from - 1]);
        }
    }
    return 0;
}
