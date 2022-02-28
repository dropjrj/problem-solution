#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 1001

int cmprule(const void *, const void *);

int main()
{
    int task, num[10][LEN], digitIndex[10];
    while (~scanf("%d", &task)) {
        memset(digitIndex, 0, sizeof(digitIndex));
        for (int i = 0; i < task; i++) {
            int input;
            scanf("%d", &input);
            num[input % 10][digitIndex[input % 10]++] = input;
        }
        for (int i = 0; i < 10; i++) {
            qsort(num[i], digitIndex[i], sizeof(int), cmprule);
        }
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < digitIndex[i]; j++){
                printf("%d ", num[i][j]);
            }
        }
        puts("");
    }

    return 0;
}

int cmprule(const void  *a, const void *b) {
    return *(int *)b - *(int *)a;
}
