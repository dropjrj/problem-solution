#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;

const int w_maxn = 400000 + 100; //max size of wordset
const int s_maxn = 300000 + 5; //max string length

#define sigma_num 26
#define MOD 20071027

int dp[s_maxn];
char S[s_maxn];
char wd[100 + 5];

struct Trie
{
    int ch[w_maxn][sigma_num];
    int val[w_maxn];
    int seq;
    
    void init()
    {
        seq = 1;
        memset(ch, 0, sizeof(ch));
    }
    
    int a2i(char c)
    {
        return c - 'a';
    }
    
    void insertion(char *s)
    {
        int row = 0, n = strlen(s);
        
        for (int i = 0; i < n; i++)
        {
            int letter_no = a2i(s[i]);
            if (ch[row][letter_no] == 0)
            {
                ch[row][letter_no] = seq;
                memset(ch[seq], 0, sizeof(ch[seq]));
                val[seq++] = 0;
            }
            row = ch[row][letter_no];
        }
        val[row] = n;
    }
    
    void find_prefix(char *s, int len, vector <int> &vc)
    {
        int row = 0;
        for (int i = 0; i < len; i++)
        {
            int letter_no = a2i(s[i]);
            if (ch[row][letter_no] == 0)
                return;
            
            row = ch[row][letter_no];
            if (val[row])
                vc.push_back(val[row]);
        }
    }
};

struct Trie tr;

int main()
{
    int Cas = 1;
    while (scanf("%s", S) == 1)
    {
        int n;
        scanf("%d", &n);
        tr.init();
        
        for (int i = 0; i < n; i ++)
        {
            scanf("%s", wd);
            tr.insertion(wd);
        }
        
        memset(dp, 0, sizeof(dp));
        int N = strlen(S);
        dp[N] = 1; //Initialization empty string
        
        for (int i = N - 1; i >= 0; i--)
        {
            vector <int> vc;
            tr.find_prefix(S + i, N - i, vc);
            
            for (int j = 0; j < vc.size(); j++) //dp[i] = dp[i] + dp[i + k] k is prefix length
                dp[i] = (dp[i] + dp[i + vc[j]]) % MOD;
        }
        
        printf("Case %d: %d\n", Cas++, dp[0]);
    }
    return 0;
}
