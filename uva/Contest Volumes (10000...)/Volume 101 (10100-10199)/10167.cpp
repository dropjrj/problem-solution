#include <bits/stdc++.h>
using namespace std;

const int ch_m = 50 * 2 + 5;

int main()
{
    int chC, x[ch_m], y[ch_m];
    while (cin >> chC && chC)
    {
        bool keep = true;
        for (int i = 0; i < chC * 2; i++)
            cin >> x[i] >> y[i];
        for (int A = -500; A <= 500 && keep; A++)
        {
            for (int B = -500; B <= 500; B++)
            {
                int l = 0, r = 0;
                for (int i = 0; i < chC * 2; i++)
                {
                    l += (A * x[i] + B * y[i] > 0);
                    r += (A * x[i] + B * y[i] < 0);
                }
                if (l == r && l == chC)
                {
                    cout << A << ' ' << B << endl;
                    keep = false;
                    break;
                }
            }
            
        }
    }
    
    return 0;
}

