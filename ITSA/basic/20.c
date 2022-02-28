#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 501

char a[LEN];
char b[LEN];
char c[LEN * 2 - 1];
int a_length;
int b_length;

void sum();
void swapstr(char*, char*);
void swapnum(int*, int*);

int main()
{
    int task;
    scanf("%d", &task);
    getchar();
    for (int i = 0; i < task; i++) {
        scanf("%s%s", a, b);
        memset(c, '\0', sizeof(c));
        a_length = strlen(a);
        b_length = strlen(b);
        sum();
        printf("%s\n", c);
    }

    return 0;
}

void sum() {
    if (a_length < b_length) {
        swapstr(a, b);
        swapnum(&a_length, &b_length);
    }
    int carry = 0;
    int sum = 0;

    int i = a_length - 1, j = b_length - 1;
    for (; j >= 0; i--, j--) {
        sum = (a[i] - '0') + (b[j] - '0') + carry;
        carry = sum / 10;
        sum %= 10;
        c[i] = sum + '0';
    }
    for (; i >= 0; i--) {
        sum = (a[i] - '0') + carry;
        carry = sum / 10;
        sum %= 10;
        c[i] = sum + '0';
    }
    if (carry != 0) {
        for (int i = a_length; i >= 0; i--) {
            c[i] = c[i - 1];
        }
        c[0] = carry + '0';
    }
}

void swapstr(char *str1, char *str2) {
    char *temp = (char*)malloc((strlen(str1) + 1) * sizeof(char));
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
    free(temp);
}

void swapnum(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
