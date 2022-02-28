#include <stdio.h>  

int main(){ 
    int num;
    while(scanf("%d", &num) && num != 0){
        for(int i = 1; i < num; i++){
            if(i % 7 == 0) continue;
            printf("%d ", i);
        }
        puts("");
    }
    
    return 0;
}
