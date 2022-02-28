#include <stdio.h>

int main()
{
    int task;
    while(scanf("%d", &task) != EOF){
        int num[task], temp;
        for(int i = 0; i < task; i++){
            scanf("%d", &num[i]);
        }
        for(int i = 0; i < task; i++){
            for(int j = i + 1; j < task; j++){
                if(num[i] > num[j]){
                    temp = num[i];
                    num[i] = num[j];
                    num[j] = temp;
                }
            }
        }
        for(int i = 0; i < task; i++){
            printf("%d ", num[i]);
        }
        puts("");
    }
    return 0;
}
