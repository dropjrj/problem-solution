#include <stdio.h>

#define LEN 30001

int main(){
    long long int f[LEN] = {0}, g[LEN] = {0};
    f[1] = g[1] = 1;
    int day, i = 2;
    while(~scanf("%d", &day)){
        while(i <= day){
            f[i] = i + f[i - 1];
            g[i] = f[i] + g[i - 1];
            i++;
        }
        printf("%lld %lld\n", f[day], g[day]);
    }

    return 0;
}
