#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
    string s;
    while (cin >> s)
    {
        bool numTurn = true;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '.' || s[i] == ' ') continue;
            if (numTurn)
            {
                if (s[i] > '9' || s[i] < '0')
                {
                    s.insert(s.begin() + i, ' ');
                    i++;
                    numTurn = false;
                }
            }
            else
            {
                if (s[i] <= '9' && s[i] >= '0')
                {
                    s.insert(s.begin() + i, ' ');
                    i++;
                    numTurn = true;
                }
            }
        }
        
        stringstream ss(s);
        double val;
        string unit;
        lli bits = 0;
        while (ss >> val >> unit)
        {
            if (unit == "gb" || unit == "g") bits += val * 1000000000 * 8;
            else if (unit == "mb" || unit == "m") bits += val * 1000000 * 8;
            else if (unit == "kb" || unit == "k") bits += val * 1000 * 8;
            else if (unit == "byte")
            {
                if (val != (int)val) bits += (int)val * 8 + (val - (int)val) * 10;
                else bits += val * 8;
            }
            else bits += val;
        }
        cout << bits << endl;
    }
    return 0;
}
