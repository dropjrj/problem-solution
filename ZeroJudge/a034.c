#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    char bin[500] = {0};
    while(scanf("%d", &num) != EOF){
        memset(bin, 0, sizeof(bin));
        int i;
        for(i = 0; num != 0; i++){
            bin[i] = num % 2;
            num /= 2;
        }
        for(i--; i >= 0; i--){
            printf("%d", bin[i]);
        }
        puts("");
    }
    
    return 0;
}
