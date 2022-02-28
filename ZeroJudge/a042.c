#include <stdio.h>

int main()
{
    int circle, area;
    while(scanf("%d", &circle) != EOF){
        area = 2;
        for(int i = 0; i < circle - 1; i++){
            area += circle;
        }
        printf("%d\n", area);
    }
    return 0;
}
