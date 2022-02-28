#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int kc = 0, dc = 0, ac = 0, keepKill = 0;
    cin >> n;
    while (n--) {
        string cmd;
        cin >> cmd;

        if (cmd == "Get_Kill") {
            kc++;
            keepKill++;
            if (keepKill >= 8) {
                cout << "LEGENDARY!";
            }
            else {
                switch(keepKill) {
                    case 3:
                        cout << "KILLING SPREE!";
                        break;
                    case 4:
                        cout << "RAMPAGE~";
                        break;
                    case 5:
                        cout << "UNSTOPPABLE!";
                        break;
                    case 6:
                        cout << "DOMINATING!";
                        break;
                    case 7:
                        cout << "GUALIKE!";
                        break;
                    default:
                        cout << "You have slain an enemie.";
                }
            }
        }
        else if (cmd == "Get_Assist") {
            ac++;
        }
        else {
            dc++;
            if (keepKill >= 3) {
                cout << "SHUTDOWN.";
            }
            else {
                cout << "You have been slained.";
            }
            keepKill = 0;
        }
        cout << '\n';
    }
    cout << kc << "/" << dc << "/" << ac << endl;

    return 0;
}
