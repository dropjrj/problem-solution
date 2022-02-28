#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int flag = 0;
    scanf("%s", str);
    for(int i = 0; i < strlen(str) / 2; i++){
        if(str[i] != str[strlen(str) - i - 1]){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        puts("yes");
    }
    else{
        puts("no");
    }
    
    return 0;
}
