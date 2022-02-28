#include <stdio.h>

int main()
{
    int dec, carry;
    while (~scanf("%d", &dec) && dec) {
        carry = 0;
        while (dec) {
            if (dec % 2 == 0) break;
            dec /= 2;
            carry++;
        }
        printf("%d\n", carry);
    }

    return 0;
}
