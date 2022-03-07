#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    while (cin >> input)
    {
        vector <int> num;
        vector <string> str;
        bool numturn = false;
        for (int i = 0; i < input.size(); i++)
        {
            if (isdigit(input[i]))
            {
                if (numturn)
                {
                    num[num.size() - 1] *= 10;
                    num[num.size() - 1] += input[i] - '0';
                }
                else
                {
                    num.push_back(input[i] - '0');
                }
                numturn = true;
            }
            else
            {
                if (numturn)
                {
                    string tmp = "";
                    tmp += input[i];
                    str.push_back(tmp);
                }
                else
                {
                    str[str.size() - 1] += input[i];
                }
                numturn = false;
            }
        }

        string unit[6] = {"hour", "h", "min", "m", "s", "ms"};
        int weight[6] = {3600000, 3600000, 60000, 60000, 1000, 1};
        int ms = 0;
        for (int i = 0; i < str.size(); i++)
        {
            for (int j = 0 ; j < 6; j++)
            {
                if (str[i] == unit[j])
                {
                    ms += num[i] * weight[j];
                }
            }
            if (str[i] == ".")
            {
                ms = num[0] * 1000 + num[1] * 100;
                break;
            }
        }
        cout << ms << endl;
    }

    return 0;
}
