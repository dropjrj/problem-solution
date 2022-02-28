#include <stdio.h>  
#include <stdlib.h>  
  
int main(){  
    int a, sum = 0;  
    scanf("%d", &a);  
    for(int i = 3; i <= a; i++){  
        if(i % 3 == 0){  
            sum += i;  
        }  
    }  
    printf("%d\n", sum);  
    return 0;  
} 
