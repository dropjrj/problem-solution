#include <stdio.h> 
#include <stdlib.h> 
 
int main() 
{ 
    int number, i, f; 
    scanf("%d", &number); 
    i = f = 0; 
    int binary[8] = {0}; 
    if(number < 0){ 
        f = -1; 
        number *= -1; 
        number --; 
    } 
    while(number != 0){ 
        binary[i] = number % 2; 
        number /= 2; 
        i++; 
    } 
    if(f == 0){ 
        for(int j = 7; j >= 0; j--){ 
            printf("%d", binary[j]); 
        } 
        printf("\n"); 
    } 
    else{ 
        for(int j = 7; j >= 0; j--){ 
            if(binary[j] == 0) 
                printf("1"); 
            else 
                printf("0"); 
        } 
        printf("\n"); 
    } 
    return 0; 
}  
