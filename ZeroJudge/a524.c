#include <stdio.h>
#include <stdlib.h>

char list[9];
int visited[9] = {0};
char password[9];
int digit;

void dfs(int layer) {
    if (layer == digit) {
        printf("%s\n", password);
        return;
    }
    int i;
    for (i = 0; i < digit; i++) {
        if (visited[i]) {
            continue;
        }
        visited[i] = 1;
        password[layer] = list[i];
        dfs(layer + 1);
        visited[i] = 0;
    }
}

int main()
{
    while (~scanf("%d", &digit)) {
        int i;
        memset(list, 0, sizeof(list));
        memset(password, 0, sizeof(password));
        for (i = 0; i < digit; i++) {
            list[i] = digit - i + '0';
        }
        dfs(0);
    }

    return 0;
}
