#include <stdio.h>
#include <stdlib.h>

int year1, month1, day1;
int year2, month2, day2;

int normal_month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int lunar_month[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};

int isluner(int);
int sum(int, int, int);

int main()
{
    int ans;
    while (~scanf("%d%d%d", &year1, &month1, &day1)) {
        scanf("%d%d%d", &year2, &month2, &day2);
        ans = abs(sum(year1, month1, day1) - sum(year2, month2, day2));
        printf("%d\n", ans);
    }
    return 0;
}

int isluner(int year) {
    return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
}

int sum(int year, int month, int day) {
    int total = 0;
    for (int i = 1; i < year; i++) {
        total += 365 + isluner(i);
    }
    for (int i = 1; i < month; i++) {
        if (isluner(year)) {
            total += lunar_month[i];
        }
        else {
            total += normal_month[i];
        }
    }
    total += day;
    return total;
}
