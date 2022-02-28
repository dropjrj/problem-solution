#include <stdio.h>
#include <string.h>

void bracket(int, int, int, int, char*);

int main()
{
    int pair;
    while (~scanf("%d", &pair)) {
        char output[pair * 2];
        bracket(0, 0, 0, pair * 2, output);
        puts("");
    }

    return 0;
}

void bracket(int left, int right, int count, int limit, char *output) {
    if (left > limit / 2 || right > left) {
        return;
    }
    if (count == limit) {
        output[count] = '\0';
        printf("%s\n", output);
    }
    output[count] = '(';
    bracket(left + 1, right, count + 1, limit, output);
    output[count] = ')';
    bracket(left, right + 1, count + 1, limit, output);
}
