#include <stdio.h>  
#include <string.h>  
  
int main(){  
    int counter, counterMax, receiptCount, sum = 0, bonus[7] = {2000000, 200000, 40000, 10000, 4000, 1000, 200}, bonusCount[7] = {0};  
    char prizeNum[4][9], number[9];  
    for(int i = 0; i < 4; i++){  
        scanf("%s", prizeNum[i]);  
    }  
    scanf("%d", &receiptCount);  
    while(getchar() != '\n');  
    for(int i = 0; i < receiptCount; i++){  
        scanf("%s", number);  
        if(!strcmp(number, prizeNum[0])){  
            bonusCount[0]++;  
            continue;  
        }  
        counterMax = 0;  
        for(int j = 1; j < 4; j++){  
            counter = 0;  
            for(int k = 7; k >= 0; k--){  
                if(number[k] == prizeNum[j][k]){  
                    counter++;  
                }  
                else{  
                    break;  
                }  
            }  
            if(counter > counterMax){  
                counterMax = counter;  
            }  
        }  
        if(counterMax >= 3){  
            bonusCount[9 - counterMax]++;  
        }  
    }  
  
    for(int i = 0; i < 7; i++){  
        sum += bonus[i] * bonusCount[i];  
    }  
  
    for(int i = 0; i < 7; i++){  
        if(i == 6){  
            printf("%d\n", bonusCount[i]);  
        }  
        else{  
            printf("%d ", bonusCount[i]);  
        }  
    }  
    printf("%d\n", sum);  
  
    return 0;  
}  
