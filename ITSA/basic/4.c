#include <stdio.h>  
#include <stdlib.h>  
  
int main()  
{  
    int h1, m1, h2, m2, time, total = 0;  
    scanf("%d%d%d%d", &h1, &m1, &h2, &m2);  
    m1 += h1 * 60;  
    m2 += h2 * 60;  
    time = m2 - m1;  
    time /= 30;  
    while(time > 8){  
        total += 60;  
        time--;  
    }  
    while(time > 4){  
        total += 40;  
        time--;  
    }  
    while(time > 0){  
        total += 30;  
        time--;  
    }  
    printf("%d\n", total);  
    return 0;  
}  
