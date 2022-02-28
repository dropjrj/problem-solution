#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 30

int numC, target, num[LEN], stack[LEN], flag = 1;

int compare(const void*, const void*);
void resum(int, int, int);

int main()
{
    scanf("%d%d", &numC, &target);
    int i;
    for (i = 0; i < numC; i++) {
    	scanf("%d", &num[i]);
	}
	qsort(num, numC, sizeof(int), compare);
	resum(0, 0, 0);
	if (flag) puts("-1");
    return 0;
}

int compare(const void *a, const void *b) {
	if (*(int*)a > *(int*)b) return 1;
	if (*(int*)a < *(int*)b) return -1;
	return 0;
}

void resum(int sum, int count, int index) {
	if (sum > target) return;
	if (sum == target) {
		int i;
		for (i = 0; i < count; i++) {
			printf("%d ", stack[i]);
		}
		puts("");
		flag = 0;
		return;
	}
	int i;
	for (i = index; i < numC; i++) {
		if (sum + num[i] > target) break;
		stack[count] = num[i];
		resum(sum + num[i], count + 1, i + 1);
	}
}
