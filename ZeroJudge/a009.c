#include <stdio.h>
#include <string.h>

#define LEN 1000

int main(){
    char code[LEN] = {'\0'};
    scanf("%s", code);
    for(int i = 0; i < strlen(code); i++){
        code[i] -= 7;
    }
    printf("%s\n", code);

    return 0;
}
