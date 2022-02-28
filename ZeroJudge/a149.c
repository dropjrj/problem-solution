#include <stdio.h>

int main(){
    int task, num, multi;
    scanf("%d", &task);
    for(int i = 0; i < task; i++){
        scanf("%d", &num);
        multi = 1;
        do{
            multi *= num % 10;
        }while(num /= 10);
        printf("%d\n", multi);
    }

    return 0;
}
