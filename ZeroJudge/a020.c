#include <stdio.h>

int main()
{
    char id[11];
    int sum = 0, list[26] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21, 22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33};
    scanf("%s", id);
    sum += list[id[0] - 'A'] / 10 + list[id[0] - 'A'] % 10 * 9;
    for(int i = 1; i < 9; i++){
        sum += (id[i] - '0') * (9 - i);
    }
    sum += id[9] - '0';
    
    if(sum % 10 == 0){
        puts("real");
    }
    else{
        puts("fake");
    }
    
    
    return 0;
}
