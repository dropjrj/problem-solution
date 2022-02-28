#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, D;
    scanf("%d%d%d", &a, &b, &c);
    D = b * b - 4 * a * c;
    if(D < 0){
        printf("No real root\n");
        return 0;
    }

    if(D == 0){
        printf("Two same roots x=%d\n", (int)((- b + sqrt(D)) / (2 * a)));
        return 0;
    }

    printf("Two different roots x1=%d , x2=%d\n", (int)((- b + sqrt(D)) / (2 * a)), (int)((- b - sqrt(D)) / (2 * a)));

    return 0;
}
