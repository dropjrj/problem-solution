#include <stdio.h>
#include <math.h>

int isPrime(int);

int main()
{
    int input;
    while (~scanf("%d", &input)) {
        int i, num = input, sum = 0;
        while (num != 1) {
            if (isPrime(num)) {
                sum += num;
                break;
            }
            while (num % 2 == 0) {
                sum += 2;
                num /= 2;
            }
            for (i = 3; i <= sqrt(input); i += 2) {
                if (isPrime(i)) {
                    while (num % i == 0) {
                        sum += i;
                        num /= i;
                    }
                }
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}

int isPrime(int num) {
    if (num == 2) {
        return 1;
    }
    else if (!(num & 1)) {
        return 0;
    }
    int i;
    for (i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}
