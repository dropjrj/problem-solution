#include <stdio.h>

int main(){
    int from, to;
    while(~scanf("%d%d", &from, &to)){
        int count = 1, sum = from;
        while(sum <= to){
            sum += from + count++;
        }
        printf("%d\n", count);
    }

    return 0;
}
