#include <cstdio>
#include <stack>
using namespace std;

int main(){
    stack <char> st;
    int a, b;
    while (~scanf("%d%d", &a, &b)) {
        while (a != b) {
            if (a > b) {
                a -= b;
                st.push('e');
            }
            else {
                int tmp = a;
                a = b;
                b = tmp;
                st.push('o');
            }
        }
        long long int ans = 1;
        while (!st.empty()) {
            if (st.top() == 'e') {
                ans *= 2;
            }
            else {
                ans += 1;
            }
            st.pop();
        }
        printf("%lld\n", ans);
    }

    return 0;
}
