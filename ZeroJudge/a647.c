#include <stdio.h>
#include <stdlib.h>

int main()
{
	double task, buy, now, percent;
	scanf("%lf", &task);
	int i;
	for (i = 0; i < task; i++) {
		scanf("%lf%lf", &buy, &now);
		percent = (now - buy) * 100 / buy;
		printf("%6.2lf%% %s\n", (percent >= 0) ? percent + 1e-9 : percent - 1e-9, (percent >= 10 || percent <= -7) ? "dispose" : "keep");
	}

	return 0;
}
