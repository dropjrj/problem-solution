#include <stdio.h>
#include <string.h>

int gcd(int a, int b) {
    if (a == 0) return b;
    gcd(b % a, a);
}

int main()
{
    int a, b;
    while (~scanf("%d%d", &a, &b)) {
        printf("%d\n", gcd(a, b));
    }

    return 0;
}
