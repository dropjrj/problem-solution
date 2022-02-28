#include <stdio.h>

int gcd(int, int);

int main()
{
    int num1, num2, ans;
    scanf("%d%d", &num1, &num2);
    ans = gcd(num1, num2);
    printf("%d\n", ans);
    
    return 0;
}

int gcd(int a, int b){
    int r = b % a;
    if(r != 0){
        gcd(r, a);
    }
    else{
        return a;
    }
}
