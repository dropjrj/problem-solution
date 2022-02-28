#include <stdio.h>

int main()
{
    long long int total, task, a, b;
    //測資這麼大，要 long long 大家一起 long long 啊
    scanf("%lld", &total);
    for (int i = 0; i < total; i++) {
        scanf("%lld%lld%lld", &task, &a, &b);
        switch(task) {
            case 1:
                printf("%lld\n", a + b);
                break;
            case 2:
                printf("%lld\n", a - b);
                break;
            case 3:
                printf("%lld\n", a * b);
                break;
            case 4:
                printf("%lld\n", a / b);
                break;
            default:
                puts("boom");
        }
    }

    return 0;
}
