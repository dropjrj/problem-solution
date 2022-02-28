#include <stdio.h>

int main()
{
    int n, score;
    scanf("%d", &n);
    score = 0;
    for(int i = 1; i <= n; i++){
        if(i <= 10){
            score += 6;
        }
        else if(i >= 11 && i <= 20){
            score += 2;
        }
        else if(i >= 21 && i < 40){
            score++;
        }
        else{
            score = 100;
            break;
        }
    }
    printf("%d\n", score);
    
    return 0;
}
