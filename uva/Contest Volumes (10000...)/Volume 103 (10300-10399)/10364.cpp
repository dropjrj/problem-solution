#include <bits/stdc++.h>
using namespace std;

const int st_m = 20 + 5;
int stC, st[st_m], side;
bool success;

bool dfs(int idx, int sideC, int sum, bool vis[])
{
    if (sideC == 3) return true;
    if (sum == side)
        if (dfs(0, sideC + 1, 0, vis)) return true;
    for (int i = idx; i < stC; i++)
    {
        if (vis[i] == false && sum + st[i] <= side)
        {
            vis[i] = true;
            if (dfs(i + 1, sideC, sum + st[i], vis)) return true;
            vis[i] = false;
        }
    }
    return false;
}

int main()
{
    int cases;
    bool vis[st_m];
    scanf("%d", &cases);
    while (cases--)
    {
        scanf("%d", &stC);
        int sum = 0;
        memset(vis, 0, sizeof(vis));
        for (int i = 0; i < stC; i++)
        {
            scanf("%d", &st[i]);
            sum += st [i];
        }
        sort(st, st+stC, greater<int>());
        side = sum / 4;
        if (sum % 4 != 0 || st[0] > side) success = false;
        else success = dfs(0, 0, 0, vis);
        printf("%s\n", success ? "yes" : "no");
    }
    
    return 0;
}
