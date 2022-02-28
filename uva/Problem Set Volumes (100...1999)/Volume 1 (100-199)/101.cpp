#include <bits/stdc++.h>
using namespace std;

int blockC, indexRecord[30];
deque <int> dq[30];

void moveIniti(int block) {
	while (dq[indexRecord[block]].back() != block) {
		int tmp = dq[indexRecord[block]].back();
		indexRecord[tmp] = tmp;
		dq[tmp].push_back(tmp);
		dq[indexRecord[block]].pop_back();
	}
}
void moveAbove(int a, int b) {
	stack <int> st;
	while (dq[indexRecord[a]].back() != a) {
		st.push(dq[indexRecord[a]].back());
		dq[indexRecord[a]].pop_back();
	}
	st.push(dq[indexRecord[a]].back());
	dq[indexRecord[a]].pop_back();
	while (!st.empty()) {
		dq[indexRecord[b]].push_back(st.top());
		indexRecord[st.top()] = indexRecord[b];
		st.pop();
	}
}

int main() {
	string cmd1, cmd2;
	int a, b;
	for (int i = 0; i < 30; i++) {
		dq[i].push_back(i);
		indexRecord[i] = i;
	}
	cin >> blockC;
	while (cin >> cmd1) {
        if (cmd1 == "quit") break;
        cin >> a >> cmd2 >> b;
        if (a == b || indexRecord[a] == indexRecord[b]) continue;
		if (cmd1 == "move") {
			if (cmd2 == "onto") {
				moveIniti(a);
				moveIniti(b);
				moveAbove(a, b);
			}
			else {
				moveIniti(a);
				moveAbove(a, b);
			}
		}
		else if (cmd1 == "pile") {
			if (cmd2 == "onto") {
				moveIniti(b);
				moveAbove(a, b);
			}
			else {
				moveAbove(a, b);
			}
		}
	}

	for (int i = 0; i < blockC; i++) {
		cout << i << ':';
		while (!dq[i].empty()) {
			cout << ' ' << dq[i].front();
			dq[i].pop_front();
		}
		cout << endl;
	}

	return 0;
}

//1. move a onto b
//	a b 上方歸位，a 移到 b 上
//2. move a over b
//	a 上方歸位，a 移到 b 上
//3. pile a onto b
//	b 上方歸位，a 以上所有順序保留移到 b 上
//4. pile a over b
//	a 以上所有順序保留移到 b 所在的堆疊上
//5. quit
//	terminate
