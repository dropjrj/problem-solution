#include <stdio.h>

int main(){
    int repeat, num, count[3] = {0};
    scanf("%d", &repeat);
    for(int i = 0; i < repeat; i++){
        scanf("%d", &num);
        count[num % 3]++;
    }
    for(int i = 0; i < 3; i++){
        printf("%d ", count[i]);
    }
    puts("");
    return 0;
}
