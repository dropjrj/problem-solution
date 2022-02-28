#include <cstdio>
#include <cstdlib>
using namespace std;

struct fraction {
    int numer, deno;
}f1, f2, f3;
char op;

int gcd(int, int);
void add();
void sub();
void mul();
void div();
void print();

int main() {
    char space;
    while (~scanf("%d %d %d %d %c%c", &f1.numer, &f1.deno, &f2.numer, &f2.deno, &op, &space)) {
        if (f1.deno < 0) {
            f1.numer *= -1;
            f1.deno *= -1;
        }
        if (f2.deno < 0) {
            f2.numer *= -1;
            f2.deno *= -1;
        }
        switch (op) {
            case '+':
                add();
                break;
            case '-':
                sub();
                break;
            case '*':
                mul();
                break;
            case '/':
                div();
                break;
            default:
                printf("Boom!\n");
        }
        print();
    }

    return 0;
}

int gcd(int a, int b) {
    if (a == 0) return b;
    gcd(b % a, a);
}

void add() {
    int lcm = f1.deno * f2.deno / gcd(f1.deno, f2.deno);
    f3.deno = lcm;
    f3.numer = f1.numer * (lcm / f1.deno) + f2.numer * (lcm / f2.deno);
}

void sub() {
    f2.numer *= -1;
    add();
}
void mul() {
    f3.deno = f1.deno * f2.deno;
    f3.numer = f1.numer * f2.numer;
}
void div() {
    int tmp = f2.deno;
    f2.deno = f2.numer;
    f2.numer = tmp;
    if (f2.deno < 0) {
        f2.numer *= -1;
        f2.deno *= -1;
    }
    mul();
}
void print() {
    int g = gcd(abs(f3.deno), abs(f3.numer));
    f3.deno /= g;
    f3.numer /= g;
    if (f3.numer == 0) {
        puts("0");
    }
    else if (abs(f3.deno) == 1) {
        printf("%d\n", f3.numer);
    }
    else {
        printf("%d/%d\n", f3.numer, f3.deno);
    }
}
