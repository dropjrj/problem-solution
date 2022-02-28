#include <stdio.h>  
#include <stdlib.h>  
  
int main()  
{  
    int input, temp, total = 0;  
    char a[100] = {};  
    scanf("%d", &input);  
    temp = input;  
    while(temp != 0){  
        a[total] = temp % 10;  
        temp /= 10;  
        total++;  
    }  
    temp = 0;  
    for(int i = 0; i <= total/2; i++){  
        if(a[i] != a[total - i - 1]){  
            temp++;  
            break;  
        }  
    }  
    if(temp == 0){  
        printf("YES\n");  
    }  
    else{  
        printf("NO\n");  
    }  
    return 0;  
}  
