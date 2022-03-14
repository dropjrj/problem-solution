#include <bits/stdc++.h>
using namespace std;

#define LEN 2000

int main()
{
	int d[LEN] = {0}, p2, p3, p5, save = 2;
	p2 = p3 = p5 = 1;
	d[1] = 1;
	while (save <= 1500)
	{
		if (d[p2] * 2 <= d[p3] * 3 && d[p2] * 2 <= d[p5] * 5)
		{
			if (d[p2] * 2 > d[save - 1])
				d[save++] = d[p2++] * 2;
			else
				p2++;
		}
		else if (d[p3] * 3 <= d[p2] * 2 && d[p3] * 3 <= d[p5] * 5)
		{
			if (d[p3] * 3 > d[save - 1])
				d[save++] = d[p3++] * 3;
			else
				p3++;
		}
		if (d[p5] * 5 <= d[p3] * 3 && d[p5] * 5 <= d[p2] * 2)
		{
			if (d[p5] * 5 > d[save - 1])
				d[save++] = d[p5++] * 5;
			else
				p5++;
		}
	}
	cout << "The 1500'th ugly number is " << d[1500]  << "." << endl;

	return 0;
}