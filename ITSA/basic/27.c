#include <stdio.h>  
#include <string.h>  
  
int main(){  
    char ans[5], guess[5];  
    int a, b;  
    scanf("%s", ans);  
    while(scanf("%s", guess)){  
        a = b = 0;  
        if(!strcmp(guess, "0000")){  
            break;  
        }  
        for(int i = 0; i < 4; i++){  
            for(int j = 0; j < 4; j++){  
                if(ans[i] == guess[j]){  
                    if(i == j){  
                        a++;  
                    }  
                    else{  
                        b++;  
                    }  
                }  
            }  
        }  
        printf("%dA%dB\n", a, b);  
    }  
  
    return 0;  
}  
