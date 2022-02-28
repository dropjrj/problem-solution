#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int day;
	scanf("%d", &day);
	int buy, i, cost = 0;
	for (i = 1; i <= day; i++) {
		scanf("%d", &buy);
		cost += buy * i;
	}
	printf("%d\n", cost);
    return 0;
}
