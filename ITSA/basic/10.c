#include <stdio.h>  
#include <stdlib.h>  
  
int gcd(int a, int b){  
    int r = b % a;  
    if(a % r != 0){  
        gcd(r, a);  
    }  
    else{  
        return r;  
    }  
}  
  
int main(){  
    int a, b;  
    scanf("%d %d", &a, &b);
    printf("%d\n", gcd(a, b));  
    return 0;  
}  
