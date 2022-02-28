#include <stdio.h>  
#include <string.h>  
  
int main()  
{  
    char sfir[128], ssec[512];  
    int temp = 0, count = 0;  
    scanf("%s%s", sfir, ssec);  
    for(int i = 0; i <= strlen(ssec) - strlen(sfir); i++){  
        for(int j = 0; j < strlen(sfir); j++){  
            if(sfir[j] == ssec[i+j]){  
                temp = 1;  
            }  
            else{  
                temp = 0;  
                break;  
            }  
        }  
        if(temp == 1){  
            count++;  
        }  
    }  
    printf("%d\n", count);  
  
    return 0;  
}  
