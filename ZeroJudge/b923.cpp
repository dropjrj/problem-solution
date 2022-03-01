#include <bits/stdc++.h>
using namespace std;

int main() {
    int task;
    stack <int> st;
    cin >> task;
    while (task--) {
        int cmd;
        cin >> cmd;
        switch(cmd) {
            case 1:
                st.pop();
                break;
            case 2:
                cout << st.top() << endl;
                break;
            case 3:
                int input;
                cin >> input;
                st.push(input);
                break;
            default:
                cout << "Wrong input\n";
        }
    }

    return 0;
}
