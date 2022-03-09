#include <bits/stdc++.h>
using namespace std;

int xWide, lineC;
bool success;
const double esp = 1e-6;

struct L
{
	int y, l, r;
	bool operator < (const L & rhs) const
	{
		return y < rhs.y;
	}
}line[10000500];

int judge(double mid)
{
	double angleL = atan2(0, -1), angleR = atan2(0, 1);
	double nowL, nowR;
	for (int i = 0; i < lineC; i++)
	{
		nowL = atan2(line[i].y, line[i].l - mid);
		nowR = atan2(line[i].y, line[i].r - mid);
		if (angleL - nowR < -esp) return 1;
		if (angleR - nowL > esp) return -1;
		angleL = min(angleL, nowL);
		angleR = max(angleR, nowR);
	}
	return 0;
}

void solution(double lLim, double rLim)
{
	if (rLim - lLim < esp) return;
	double mid = (rLim + lLim) / 2;
	int sol = judge(mid);
	if (sol == 0) success = true;
	else if (sol == 1) solution(mid, rLim);
	else solution(lLim, mid);
}

int main()
{
	int cases;
	cin >> cases;
	while (cases--)
	{
		cin >> xWide >> lineC;
		for (int i = 0; i < lineC; i++)
			cin >> line[i].y >> line[i].l >> line[i].r;
		sort(line, line + lineC);
		success = false;
		solution(0, xWide);
		if (success) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}
