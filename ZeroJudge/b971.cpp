#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int a1, an, d;
	cin >> a1 >> an >> d;
	while (a1 != an)
	{
	    cout << a1 << ' ';
	    a1 += d;
	}
	cout << an << endl;
	return 0;
}
