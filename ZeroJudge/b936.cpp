#include <bits/stdc++.h>
using namespace std;

long long int atleast;

long long int counting(long long petal) {
    if (petal % 2 == 0 && petal / 2 == atleast) return 2;
    if (petal / 2 < atleast) return 1;
    if (petal % 2 == 0) return counting(petal / 2) * 2;
    else return counting((petal - 1) / 2) + counting((petal + 1) / 2);
}

int main() {
	long long int petal;
	while (~scanf("%lld%lld", &petal, &atleast)) {
		if (petal < atleast) printf("0\n");
		else printf("%lld\n", counting(petal));
	}
	
	return 0;
}
