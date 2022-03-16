#include<bits/stdc++.h>
using namespace std;

const int LEN = 750 + 50;

struct Sum
{
    int s, idx;
    Sum(int s, int idx) : s(s), idx(idx) {}
    bool operator < (const Sum & rhs) const
    {
        return s > rhs.s;
    }
};

int main()
{
    int k, ans[LEN], next[LEN];
    while (scanf("%d", &k) == 1)
    {
        for (int i = 0; i < k; i++)
            scanf("%d", &ans[i]);
        sort(ans, ans + k);
        for (int i = 1; i < k; i++)
        {
            for (int j = 0; j < k; j++)
                scanf("%d", &next[j]);
            sort(next, next + k);

            priority_queue<Sum> pq;
            for (int j = 0; j < k; j++)
                pq.push(Sum(ans[j] + next[0], 0));
            for (int j = 0; j < k; j++)
            {
                Sum sum = pq.top();
                pq.pop();
                int s = sum.s;
                int index = sum.idx;
                ans[j] = s;
                if (index + 1 < k)
                    pq.push(Sum(s - next[index] + next[index + 1], index + 1));
            }
        }
        for (int i = 0; i < k; i++)
            printf("%d%s", ans[i], i == k - 1 ? "\n" : " ");
    }

    return 0;
}
