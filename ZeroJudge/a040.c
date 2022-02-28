#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int min, max, temp, flag = 0, sum, n, num[7];
    scanf("%d%d", &min, &max);
    for(; min <= max; min++){
        sum = 0;
        memset(num, 0, sizeof(num));
        temp = min;
        for(n = 0; temp != 0; n++){
            num[n] = temp % 10;
            temp /= 10;
        }
        for(int i = 0; i < n; i++){
            sum += pow(num[i], n);
        }
        if(sum == min){
            printf("%d ", min);
            flag = 1;
        }
    }
    if(flag == 0){
        printf("none");
    }
    puts("");

    return 0;
}
