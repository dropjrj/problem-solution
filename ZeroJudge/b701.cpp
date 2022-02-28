#include <bits/stdc++.h>
using namespace std;

bool m[600][600] = {0};
bool vis[600][600] = {0};
int xdir[] = {0, 1, 0, -1};
int ydir[] = {1, 0, -1, 0};

struct info {
    int w, n, e, s, a;
    info(int w, int n, int e, int s, int a) : w(w), n(n), e(e), s(s), a(a) {}
};

struct point {
    int i, j;
    point(int i, int j) : i(i), j(j) {}
};

info bfs(point p) {
    info thisInfo = info(p.j, p.i, p.j, p.i, 0);
    queue <point> q;
    q.push(p);
    vis[p.i][p.j] = 1;
    while (!q.empty()) {
        point now = q.front();
        thisInfo.a++;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nexti = now.i + xdir[i];
            int nextj = now.j + ydir[i];
            if (m[nexti][nextj] == 1 && vis[nexti][nextj] == 0) {
                vis[nexti][nextj] = 1;
                q.push(point(nexti, nextj));
            }
        }
        thisInfo.w = min(thisInfo.w, now.j);
        thisInfo.n = min(thisInfo.n, now.i);
        thisInfo.e = max(thisInfo.e, now.j);
        thisInfo.s = max(thisInfo.s, now.i);
    }
    return thisInfo;
}

int main() {
    int dx, dy;
    vector <info> land;
    cin >> dx >> dy;
    for (int i = 0; i < dx; i++) {
        for (int j = 0; j < dy; j++) {
            cin >> m[i][j];
        }
    }
    for (int i = 0; i < dx; i++) {
        for (int j = 0; j < dy; j++) {
            if (vis[i][j] == 1) continue;
            else if (m[i][j] == 1) {
                land.push_back(bfs(point(i, j)));
            }
        }
    }

    for (auto x : land) {
        cout << x.w << " " << x.n << " " << x.e << " " << x.s << " " << x.a << endl;
    }

    return 0;
}
