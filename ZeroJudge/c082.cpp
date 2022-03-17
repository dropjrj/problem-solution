#include<bits/stdc++.h>
using namespace std;

int x_max, y_max;

bool isFail(int x, int y)
{
    return x > x_max || y > y_max || x < 0 || y < 0;
}

int main()
{
    int x, y;
    char facing, face[4] = {'N', 'E', 'S', 'W'};
    bool G[55][55];
    map<char, int> f2i;
    f2i['N'] = 0;
    f2i['S'] = 2;
    f2i['W'] = 3;
    f2i['E'] = 1;
    map<char,pair<int, int>> dir;
    dir['N'] = make_pair(0, 1);
    dir['S'] = make_pair(0, -1);
    dir['W'] = make_pair(-1, 0);
    dir['E'] = make_pair(1, 0);
    cin >> x_max >> y_max;
    memset(G, 0, sizeof(G));
    while (cin >> x >> y >> facing)
    {
        bool fail = false;
        string cmd;
        cin >> cmd;
        for (int i = 0; i < cmd.size(); i++)
        {
            switch (cmd[i])
            {
                case 'L':
                    facing = face[(f2i[facing] + 4 - 1) % 4];
                    break;
                case 'R':
                    facing = face[(f2i[facing] + 1) % 4];
                    break;
                default:
                    if (G[x][y] && isFail(x + dir[facing].first, y + dir[facing].second)) break;
                    x += dir[facing].first;
                    y += dir[facing].second;
            }
            if (isFail(x, y))
            {
                fail = true;
                x -= dir[facing].first;
                y -= dir[facing].second;
                G[x][y] = true;
                break;
            }
        }
        cout << x << " " << y << " " << facing;
        fail ? cout << " LOST\n" : cout << "\n";
    }

    return 0;
}
