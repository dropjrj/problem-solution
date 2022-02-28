#include <stdio.h>
#include <stdbool.h>

int main(){
    int task, num[5];
    bool isDiff = false;
    scanf("%d", &task);
    for(int i = 0; i < task; i++){
        for(int k = 0; k < 4; k++){
            scanf("%d", &num[k]);
        }
        if(num[3] - num[2] == num[2] - num[1]){
            num[4] = num[3] + num[3] - num[2];
        }
        else{
            num[4] = num[3] * num[3] / num[2];
        }
        for(int k = 0; k < 5; k++){
            printf("%d ", num[k]);
        }
        puts("");
    }

    return 0;
}
