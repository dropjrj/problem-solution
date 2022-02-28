#include <stdio.h>  
  
int main()  
{  
    int task, times[25] = {0}, s, d, max = 0;  
    scanf("%d", &task);  
    for(int i = 0; i < task; i++){  
        scanf("%d%d", &s, &d);  
        for(int j = s; j < d; j++){  
            times[j]++;  
        }  
    }  
    for(int j = 0; j < 25; j++){  
        if(times[j] > max){  
            max = times[j];  
        }  
    }      
    printf("%d\n", max);  
      
    return 0;  
}  
