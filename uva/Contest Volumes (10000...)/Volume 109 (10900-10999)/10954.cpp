#include <bits/stdc++.h>
using namespace std;

int main()
{
	int numC;
	priority_queue<int, vector<int>, greater<int>> pq;
	while (cin >> numC && numC)
	{
		for (int i = 0; i < numC; i++)
		{
			int input;
			cin >> input;
			pq.push(input);
		}
		int sum = 0;
		while (1)
		{
			int tmp = pq.top();
			pq.pop();
			if (pq.empty()) break;
			tmp += pq.top();
			pq.pop();
			pq.push(tmp);
			sum += tmp;
		}
		cout << sum << endl;
	}

	return 0;
}