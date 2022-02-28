#include <stdio.h>

int main()
{
    int a, b, n, r;
    while (~scanf("%d%d%d", &a, &b, &n)) {
        printf("%d.", a / b);
        r = a % b;
        for (int i = 0; i < n; i++) {
            r *= 10;
            printf("%d", r / b);
            r %= b;
        }
        puts("");
    }

    return 0;
}
