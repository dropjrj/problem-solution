#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, output;
    getline(cin, str);
    stringstream ss(str);
    while (ss >> output)
        cout << output << endl;

    return 0;
}
