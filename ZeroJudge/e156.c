#include <stdio.h>

int i = 1, sum = 0;
int addition(int num) {
    sum += i;
    i++;
    (num >= i) && addition(num);
    return 0;
}

int main() {
    int num;
    scanf("%d", &num);
    addition(num);
    printf("%d\n", sum);
    return 0;
}
