#include <stdio.h>

int main(){
    int criminal, redHat;
    while(scanf("%d%d", &criminal, &redHat) != EOF){
        if(criminal == redHat){
            printf("%d\n", redHat);
        }
        else{
            printf("%d\n", redHat + 1);
        }
    }

    return 0;
}
