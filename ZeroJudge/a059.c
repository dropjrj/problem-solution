#include <stdio.h>
#include <math.h>

int main()
{
    int task, input[100][2], sum[100] = {0};
    scanf("%d", &task);
    for(int i = 0; i < task; i++){
        scanf("%d%d", &input[i][0], &input[i][1]);
    }
    for(int i = 0; i < task; i++){
        for(int j = sqrt(input[i][0]); j * j <= input[i][1]; j++){
            if(j * j < input[i][0]){
                continue;
            }
            sum[i] += j * j;
        }
    }
    for(int i = 0; i < task; i++){
        printf("Case %d: %d\n", i + 1, sum[i]);
    }
    return 0;
}
