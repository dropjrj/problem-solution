#include <stdio.h>  
#include <stdlib.h>  
  
int main()  
{  
    float input[10], max, min;  
    scanf("%f", &input[0]);  
    max = min = input[0];  
    for(int i = 1; i < 10; i++){  
        scanf("%f", &input[i]);  
        if(input[i] > max){  
            max = input[i];  
        }  
        if(input[i] < min){  
            min = input[i];  
        }  
    }  
    printf("maximum:%.2f\n", max);  
    printf("minimum:%.2f\n", min);  
  
    return 0;  
}  
