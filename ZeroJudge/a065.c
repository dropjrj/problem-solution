#include <stdio.h>

int main(){
    char code[8];
    int password;
    while(scanf("%s", code) != EOF){
        for(int i = 0; i < 6; i++){
            password = code[i] - code[i + 1];
            if(password < 0){
                password *= -1;
            }
            printf("%d", password);
        }
        puts("");
    }

    return 0;
}
