#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char num[11] = {0};
    int flag = 0;
    char *p;
    scanf("%s", num);
    if(strtol(num, &p, 10) == 0){
        puts("0");
        return 0;
    }
    while(num[0] == '0'){
        int temp = strlen(num) - 1;
        for(int i = 0; i < strlen(num); i++){
            num[i] = num[i + 1];
        }
        num[temp] = '0';
    }
    for(int i = strlen(num) - 1; i >= 0; i--){
        if(flag == 0){
            if(num[i] == '0'){
                continue;
            }
            else{
                flag = 1;
            }
        }
        printf("%c", num[i]);
    }
    puts("");
    
    return 0;
}
