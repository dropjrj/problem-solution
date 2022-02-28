#include <stdio.h>

int main()
{
    int a, b, c;
    int d, e, f;
    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
    int delta = a * e - d * b;
    int deltax = c * e - f * b;
    int deltay = a * f - d * c;
    if (!delta && (deltax || deltay)) {
        puts("No answer");
    }
    else if (!delta && !deltax && !deltay) {
        puts("Too many");
    }
    else {
        printf("x=%.2f\n", (float)deltax / delta);
        printf("y=%.2f\n", (float)deltay / delta);
    }
    
    return 0;
}
