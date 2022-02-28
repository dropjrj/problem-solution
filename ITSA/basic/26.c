#include <stdio.h>  
  
int main(){  
    int task;  
    scanf("%d", &task);  
    int num[10], test[10];  
    for(int i = 0; i < task; i++){  
        scanf("%d", &num[i]);  
        test[i] = 0;  
    }  
    for(int i = 0; i < task; i++){  
        for(int j = i + 1; j < task; j++){  
            if(num[i] > num[j]){  
                int temp = num[i];  
                num[i] = num[j];  
                num[j] = temp;  
            }  
        }  
    }  
    for(int i = 0; i < task; i++){  
        int temp = num[i];  
        while(temp != 0){  
            test[i] += temp % 10;  
            temp /= 10;  
        }  
    }  
    for(int i = 0; i < task; i++){  
        for(int j = i + 1; j < task; j++){  
            if(test[i] > test[j]){  
                int temp = num[i];  
                num[i] = num[j];  
                num[j] = temp;  
                temp = test[i];  
                test[i] = test[j];  
                test[j] = temp;  
            }  
        }  
    }  
    for(int i = 0; i < task; i++){  
        printf("%d", num[i]);  
        if(i != task - 1){  
            printf(" ");  
        }  
    }  
    puts("");  
  
    return 0;  
}  
