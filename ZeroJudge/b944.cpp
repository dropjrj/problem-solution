#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int spaceC, numnow, timenow, space[25] = {0}, times[25] = {0};
	cin >> spaceC;
	while (cin >> numnow >> timenow) {
        int findC, put = -1;
        if (times[0] == times[1] && times[0] == 0) put = 0;
	    else if (put == -1) {
	        int tmp = 0;
	        for (int i = 0; i < spaceC; i++) {
    	        if (!times[i]) tmp++;
    	        else tmp = 0;
    	        if (tmp == 3) {
    	            put = i - 1;
    	            break;
    	        }
    	    }
	    }
	    if (put == -1 && times[spaceC - 1] == times[spaceC - 2] && times[spaceC - 1] == 0) put = spaceC - 1;
	    if (put == -1) {
	        for (int i = 0; i < spaceC; i++) {
	            if (!times[i]) {
	                put = i;
	                break;
	            }
	        }
	    }
	    if (put == -1) {
	        cout << "  Not enough\n";
	    }
	    else {
	        space[put] = numnow;
	        times[put] = timenow;
	    }
	    
	    cout << "Number:";
	    for (int i = 0; i < spaceC; i++) cout << ' ' << space[i];
	    cout << "\n  Time:";
	    for (int i = 0; i < spaceC; i++) cout << ' ' << times[i];
	    cout << "\n\n";
	    
	    for (int i = 0; i < spaceC; i++) {
	        if (times[i]) times[i]--;
	        if (!times[i]) space[i] = 0;
	    }
	}
	
	return 0;
}
