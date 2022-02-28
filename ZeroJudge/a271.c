#include <stdio.h>
#include <stdlib.h>

#define LEN 10000

int main()
{
    int task, weight, ispoison, eat, food[6] = {0};
    char eatstr[LEN];
    scanf("%d", &task);
    for (int i = 0; i < task; i++) {
        ispoison = 0;
        for (int j = 1; j < 6; j++) {
            scanf("%d", &food[j]);
            if(j >= 3) {
                food[j] *= -1;
            }
        }
        scanf("%d", &weight);
        getchar();
        gets(eatstr);
        if (!strcmp(eatstr, "\0")) {
            printf("%dg\n", weight);
            continue;
        }
        char *eatptr = eatstr;

        while (*eatptr) {
            weight += ispoison * food[5];
            if (weight <= 0) {
                break;
            }
            eat = strtol(eatptr, &eatptr, 10);
            weight += food[eat];
            if (eat == 4) {
                ispoison++;
            }
            if (weight <= 0) {
                break;
            }
            while (*eatptr == ' ') eatptr++;
        }
        if (weight > 0) {
            printf("%dg\n", weight);
        }
        else {
            printf("bye~Rabbit\n");
        }
    }

    return 0;
}
