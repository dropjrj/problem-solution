#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int p[250] = {0};
    p[0] = 1;
    for (int i = 1; i <= 200; i++)
        for (int j = i; j <= 200; j++)
            p[j] += p[j - i];
    int num;
    while (cin >> num)
        cout << p[num] << endl;

    return 0;
}
