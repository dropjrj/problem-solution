#include <stdio.h>  

int main(){ 
    int score, scoreCount;
    double avg;
    while(scanf("%d", &scoreCount) != EOF){
        avg = 0;
        for(int i = 0; i < scoreCount; i++){
            scanf("%d", &score);
            avg += score;
        }
        avg /= scoreCount;
        if(avg > 59){
            puts("no");
        }
        else{
            puts("yes");
        }
    }
    
    return 0;
}
