#include <stdio.h>  
#include <stdlib.h>  
  
int main()  
{  
    int input;  
    scanf("%d", &input);  
    input /= 3;  
    if(input == 1){  
        printf("Spring\n");  
    }  
    else if(input == 2){  
        printf("Summer\n");  
    }  
    else if(input == 3){  
        printf("Autumn\n");  
    }  
    else{  
        printf("Winter\n");  
    }  
    return 0;  
} 
