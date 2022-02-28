#include <stdio.h>  
#include <stdlib.h>  
  
int main(){  
    int a, f = 0;  
    scanf("%d", &a);  
    if(a <= 1){  
        printf("NO\n");  
    }  
    else if(a <= 3 && a >= 2){  
        printf("YES\n");  
    }  
    else{  
        for(int i = 2; i <= a/2; i++){  
            if(a % i == 0){  
                f = 1;  
                break;  
            }  
        }  
        if(f == 1){  
            printf("NO\n");  
        }  
        else{  
            printf("YES\n");  
        }  
    }  
  
    return 0;  
}
