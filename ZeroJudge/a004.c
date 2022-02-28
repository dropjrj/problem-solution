#include <stdio.h>

int main(){
    int year, flag;
    while(scanf("%d", &year) != EOF){
        flag = 0;
        if(year % 4 == 0 && year % 100 != 0){
            flag = 1;
        }
        if(year % 400 == 0){
            flag = 1;
        }
        if(flag == 1){
            printf("閏年\n");
        }
        else{
            printf("平年\n");
        }
    }

    return 0;
}
