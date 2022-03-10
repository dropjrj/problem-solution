#include <bits/stdc++.h>
using namespace std;

const int student_m = 100000 + 500;

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int studentC, score[student_m];
        cin >> studentC;
        for (int i = 0; i < studentC; i++)
            cin >> score[i];
        int maxi = -1e9, pre = score[0];
        for (int i = 1; i < studentC; i++)
        {
            maxi = max(maxi, pre - score[i]);
            pre = max(pre, score[i]);
        }
        cout << maxi << endl;
    }
    
    return 0;
}

