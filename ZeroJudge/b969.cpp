#include <bits/stdc++.h>
using namespace std;

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string nameList, greeting, name;
	getline(cin, nameList);
	getline(cin, greeting);
	stringstream ss(nameList);
	while (ss >> name)
	    cout << greeting << ", " << name << '\n';
	
	return 0;
}
