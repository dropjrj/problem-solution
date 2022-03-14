#include <bits/stdc++.h>
using namespace std;

set<string> dic;

void uptolow(string & ori)
{
	string str = "";
	for (int i = 0; i < ori.size(); i++)
	{
		if (isalpha(ori[i]))
			str += tolower(ori[i]);
		else if (str != "")
		{
			dic.insert(str);
			str = "";
		}
	}
	ori = str;
}

int main()
{
	string input;
	while (cin >> input)
	{
		uptolow(input);
		if (input != "")
			dic.insert(input);
	}
	for (const auto & str : dic)
		cout << str << endl;
	return 0;
}