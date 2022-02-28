#include <stdio.h>

int main(){  
    int game[3][3], check[8] = {0};  
    for(int i = 0; i < 3; i++){  
        for(int j = 0; j < 3; j++){  
            scanf("%d", &game[i][j]);  
            check[i] += game[i][j];  
        }  
    }  
    for(int i = 0; i < 3; i++){  
        for(int j = 0; j < 3; j++){  
            check[i + 3] += game[j][i];  
        }  
    }  
    for(int i = 0; i < 3; i++){  
        check[6] += game[i][i];  
        check[7] += game[2-i][i];  
    }  
    for(int i = 0; i < 8; i++){  
        if(check[i] == 3 || check[i] == 0){  
            printf("True\n");  
            return 0;  
        }  
    }  
    printf("False\n");  
    return 0;  
}  
