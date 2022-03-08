#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numC, num[1500];
    bool found;
    while (scanf("%d", &numC) && numC)
    {
        found = false;
        for (int i = 0; i < numC; i++)
            scanf("%d", &num[i]);
        sort(num, num + numC, greater<int>());

        for (int d = 0; d < numC; d++)
        {
            for (int a = 0; a < numC; a++)
            {
                if (a == d) continue;
                for (int b = a + 1; b < numC; b++)
                {
                    if (b == d) continue;
                    for (int c = b + 1; c < numC; c++)
                    {
                        if (c == d) continue;
                        if (num[d] == num[a] + num[b] + num[c])
                        {
                            printf("%d\n", num[d]);
                            found = true;
                            break;
                        }
                    }
                    if (found) break;
                }
            }
            if (found) break;
        }

        if (!found) printf("no solution\n");
    }
    return 0;
}

