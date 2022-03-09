#include <bits/stdc++.h>
using namespace std;

int m[10000][10000];

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int row, col;
        getchar();
        cin >> row >> col;
        memset(m, 0, sizeof(m));
        string info;
        getchar();
        for (int i = 0; i < row; i++)
        {
            getline(cin, info);
            stringstream ss(info);
            int rown, unsafe;
            ss >> rown;
            while (ss >> unsafe)
            {
                m[rown - 1][unsafe - 1] = -1;
            }
        }

        for (int i = 0; i < col; i++)
        {
            if (m[0][i] != -1)
                m[0][i] = 1;
            else
                break;
        }
        for (int i = 0; i < row; i++)
        {
            if (m[i][0] != -1)
                m[i][0] = 1;
            else
                break;
        }

        for (int i = 1; i < row; i++)
        {
            for (int j = 1; j < col; j++)
            {
                if (m[i][j] == -1) continue;
                if (m[i - 1][j] != -1) m[i][j] += m[i - 1][j];
                if (m[i][j - 1] != -1) m[i][j] += m[i][j - 1];
            }
        }
        
        if (m[row - 1][col - 1] == -1) cout << "0\n";
        else cout << m[row - 1][col - 1] << endl;
        if (cases != 0) cout << endl;
    }

    return 0;
}
