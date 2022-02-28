#include <stdio.h>

int main(){
    int num, pow = 0;
    scanf("%d", &num);
    for(int i = 2; i <= num; i++){
        while(num % i == 0){
            pow++;
            num /= i;
        }
        if(pow != 0){
            printf("%d", i);
            if(pow > 1){
                printf("^%d", pow);
            }
            if(num != 1){
                printf(" * ");
            }
            pow = 0;
        }
    }
    puts("");

    return 0;
}
