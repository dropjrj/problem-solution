#include <bits/stdc++.h>
using namespace std;

int main()
{
	set<string> dic, ans;
	string input;
	while (cin >> input)
		dic.insert(input);

	for (auto it = dic.begin(); it != dic.end(); it++)
	{
		auto it2 = it;
		while (++it2 != dic.end())
		{
			int x = (*it).size(), y = (*it2).size();
			if (x < y && *it == (*it2).substr(0, x) && dic.count((*it2).substr(x, y - x)))
				ans.insert(*it2);
		}
	}

	for (const auto & str : ans)
		cout << str << endl;
	return 0;
}