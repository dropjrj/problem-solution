#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    while (cin >> num && num)
    {
        int sum = 0;
        for (int i = 1; i <= num / 2; i++)
            if (num % i == 0) sum += i;
        if (sum == num)
            cout << "=" << sum << endl;
        else
        {
            int old = num;
            num = sum;
            sum = 0;
            for (int i = 1; i <= num / 2; i++)
                if (num % i == 0) sum += i;
            if (old == sum)
                cout << num << endl;
            else cout << "0" << endl;
        }
    }
    
    return 0;
}
