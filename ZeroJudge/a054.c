#include <stdio.h>

int main()
{
    char id[10];
    int sum = 0, list[26] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21, 22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33};
    scanf("%s", id);
    for(int i = 0; i < 26; i++){
        list[i] = list[i] / 10 + list[i] % 10 * 9;
    }
    
    for(int i = 0; i < 8; i++){
        sum += (id[i] - '0') * (8 - i);
    }
    sum += id[8] - '0';
    
    for(int i = 0; i < 26; i++){
        if((sum + list[i]) % 10 == 0){
            printf("%c", i + 'A');
        }
    }
    
    puts("");
    
    return 0;
}
