#include <stdio.h>  
  
int main(){  
    int money, fruit[3], cost[3] = {15, 20, 30}, change[3] = {0}, coin[3] = {1, 5, 50};  
    scanf("%d,%d,%d,%d", &money, &fruit[0], &fruit[1], &fruit[2]);  
    for(int i = 0; i < 3; i++){  
        money -= fruit[i] * cost[i];  
    }  
    if(money < 0){  
        printf("0\n");  
        return 0;  
    }  
    for(int i = 2; i >= 0; i--){  
        change[i] = money / coin[i];  
        money %= coin[i];  
    }  
    printf("%d,%d,%d\n", change[0], change[1], change[2]);  
  
    return 0;  
}  
