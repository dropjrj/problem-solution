#include <stdio.h> 
#include <string.h> 
 
int main() 
{ 
    int total = 0, word[26] = {}; 
    char input[100], sample[] = {"abcdefghijklmnopqrstuvwxyz"}; 
    gets(input); 
     
    for(int i = 0; i < strlen(input); i++){ 
        if(input[i] == ' '){ 
            total++; 
            continue; 
        } 
        if(input[i] >= 'A' && input[i] < 'Z'){ 
            input[i] = input[i] - 'A' + 'a'; 
        } 
        for(int j = 0; j < 26; j++){ 
            if(input[i] == sample[j]){ 
                word[j]++; 
                break; 
            } 
        } 
    } 
    if(strlen(input) != 0){ 
        total++; 
    } 
    printf("%d\n", total); 
    for(int i = 0; i < 26; i++){ 
        if(word[i] != 0){ 
            printf("%c : %d\n", sample[i], word[i]); 
        } 
    } 
 
    return 0; 
}
