#include <stdio.h>

int main(){
    int slide, space;
    while(scanf("%d", &slide) != EOF){
        space = 1;
        for(int i = 1; i <= slide; i++){
            space += 1 + i * ( i - 1 ) / 2;
        }
        printf("%d\n", space);
    }
    
    return 0;
}
