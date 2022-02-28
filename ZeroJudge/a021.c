#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 501

char a[LEN];
char b[LEN];
char c[LEN * 2 - 1];
char operation;
int a_length;
int b_length;

void sum();
void sub();
void mul();
void divide();
void swapstr(char*, char*);
void swapnum(int*, int*);
int cmp(char*, char*);
void moveback(char*);
void subAntiZero(int*);
void mulAntiZero(int*);
void divAntiZero(int*);

int main()
{
    while (~scanf("%s %c %s", a, &operation, b)) {
        memset(c, '\0', sizeof(c));
        a_length = strlen(a);
        b_length = strlen(b);
        switch (operation) {
            case '+':
                sum();
                break;
            case '-':
                sub();
                break;
            case '*':
                mul();
                break;
            case '/':
                divide();
                break;
            default:
                puts("Are you kidding?");
        }
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
        moveback(c);
        c[0] = carry + '0';
    }
}

void sub() {
    int i, j, borrow[LEN];
    int negative = !cmp(a, b);
    if (negative) {
        swapstr(a, b);
        swapnum(&a_length, &b_length);
    }
    borrow[0] = a[0] - '0';
    for (i = 1; i < a_length; i++) {
        borrow[i - 1]--;
        borrow[i] = a[i] - '0' + 10;
    }
    for (i = a_length - 1, j = b_length - 1; j >= 0; i--, j--) {
        borrow[i] -= b[j] - '0';
    }
    for (i = a_length - 1; i >= 0; i--) {
        borrow[i - 1] += borrow[i] / 10;
        borrow[i] %= 10;
    }
    
    subAntiZero(borrow);
    
    if (negative) {
        moveback(c);
        c[0] = '-';
    }
}

void mul() {
    int sum[LEN * 2 - 1] = {0};
    for (int i = a_length - 1; i >= 0; i--) {
        for (int j = b_length - 1; j >= 0; j--) {
            sum[i + j + 1] += (a[i] - '0') * (b[j] - '0');
        }
    }
    
    for (int k = a_length + b_length - 1; k > 0; k--) {
        sum[k - 1] += sum[k] / 10;
        sum[k] %= 10;
    }
    
    mulAntiZero(sum);
}

void divide() {
    int r[LEN] = {0};
    int q[LEN] = {0};
    for (int i = 0; i < a_length; i++) {
        r[i] = a[i] - '0';
    }
    
    for (int i = 0; i < a_length - b_length + 1; i++) {
        while (r[i] >= 0) {
            for (int j = 0; j < b_length; j++) {
                r[i + j]  -= b[j] - '0';
                if (r[i + j] < 0 && j != 0) {
                    r[i + j - 1]--;
                    r[i + j] += 10;
                }
            }
            q[i]++;
        }
        for (int j = 0; j < b_length; j++) {
            r[i + j] += b[j] - '0';
        }
        q[i]--;
        
        r[i + 1] += r[i] * 10;
        r[i] = 0;
        
        c[i] = q[i] + '0';
    }
    if (a_length - b_length < 0) {
        c[0] = '0';
    }
    
    divAntiZero(q);
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

void moveback(char *str) {
    for (int i = strlen(str); i >= 0; i--) {
        str[i] = str[i - 1];
    }
}

int cmp(char *str1, char *str2) {
    if (strlen(str1) != strlen(str2)) return strlen(str1) > strlen(str2);
    for (int i = 0; i < strlen(str1); i++) {
        if (str1[i] != str2[i]) return str1[i] > str2[i];
    }
    return 1;
}
//if str1 >= str2 return 1

void subAntiZero(int *num) {
    int zeroCount = 0, rule;
    if (num[0] == 0) {
        for (int i = 0; i < a_length; i++) {
            if (num[i] == 0) {
                zeroCount++;
            }
            else break;
        }
    }
    for(int i = 0; i + zeroCount < a_length; i++) {
        c[i] = num[i + zeroCount] + '0';
    }
    if (zeroCount == a_length) {
        c[0] = '0';
    }
}

void mulAntiZero(int *num) {
    int zeroCount = 0, rule;
    if (num[0] == 0) {
        for (int i = 0; i < a_length + b_length; i++) {
            if (num[i] == 0) {
                zeroCount++;
            }
            else break;
        }
    }
    for(int i = 0; i + zeroCount < a_length + b_length; i++) {
        c[i] = num[i + zeroCount] + '0';
    }
    if (zeroCount == a_length + b_length) {
        c[0] = '0';
    }
}

void divAntiZero(int *num) {
    int zeroCount = 0, rule;
    if (num[0] == 0) {
        for (int i = 0; i < strlen(c); i++) {
            if (num[i] == 0) {
                zeroCount++;
            }
            else break;
        }
    }
    int i;
    if (zeroCount == strlen(c)) {
        c[0] = '0';
        c[1] = '\0';
        return;
    }
    for (i = 0; i + zeroCount < strlen(c); i++) {
        c[i] = num[i + zeroCount] + '0';
    }
    c[i] = '\0';
}
