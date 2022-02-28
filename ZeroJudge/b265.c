#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 10000
int cmp(const void*, const void*);

int main()
{
	long long num[LEN], tmp;
	int count[LEN], cnt, max;
	int input[5], numC;
	while (scanf("%d", &numC) && numC) {
		cnt = 0;
		int i, j;
		for (i = 0; i < numC; i++) {
			for (j = 0; j < 5; j++) {
				scanf("%d", &input[j]);
			}
			qsort(input, 5, sizeof(int), cmp);
			tmp = input[0];
			for (j = 1; j < 5; j++) {
				tmp *= 1000;
				tmp += input[j];
			}
			for (j = 0; j < cnt; j++) {
				if (tmp == num[j]) {
					count[j]++;
				}
			}
			if (j == cnt) {
				num[cnt] = tmp;
				count[cnt] = 1;
				cnt++;
			}
		}
		max = 0;
		for (i = 0; i < cnt; i++) {
			if (count[i] > max) {
				max = count[i];
			}
		}
		int people = 0;
		for (i = 0; i < cnt; i++) {
			if (max == count[i]) {
				people += count[i];
			}
		}
		printf("%d\n", people);
	}
	
    return 0;
}

int cmp(const void *a, const void *b) {
	if (*(int*)a > *(int*)b) return 1;
	if (*(int*)a < *(int*)b) return -1;
	return 0;
}
