#include <stdio.h>

int main(){
    int month, date, s;
    scanf("%d%d", &month, &date);
    s = (month * 2 + date) % 3;
    switch(s){
        case 0:
            printf("普通\n");
            break;
        case 1:
            printf("吉\n");
            break;
        case 2:
            printf("大吉\n");
            break;
        default:
            printf("POOF!!\n");
    }

    return 0;
}
