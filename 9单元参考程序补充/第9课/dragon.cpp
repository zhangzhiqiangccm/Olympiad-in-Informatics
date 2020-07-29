#include<bits/stdc++.h>
using namespace std;
const int N = 20010;
typedef pair<int, int> pii;
const int dx[8] = {0, 0, 1, -1, 1, 1, -1, -1};
const int dy[8] = {1, -1, 0, 0, 1, -1, 1, -1};

int n, m, a, b, x, y;
string s[N];
vector<vector<int> > mp, vis;

void clr() {
    for (int i = 0; i < n; i++) {
        fill(mp[i].begin(), mp[i].end(), 0);
        fill(vis[i].begin(), vis[i].end(), 0);
    }
}

int isValid(int x, int y) {
    return x >= 0 && y >= 0 && x < n && y < m;
}

void mk(int a, int b) {
    for (int i = a; i >= 0; i--) {
        if (s[i][b] == 'X') break;
        mp[i][b] = 1;
    }
    for (int i = a; i < n; i++) {
        if (s[i][b] == 'X') break;
        mp[i][b] = 1;
    }
    for (int i = b; i >= 0; i--) {
        if (s[a][i] == 'X') break;
        mp[a][i] = 1;
    }
    for (int i = b; i < m; i++) {
        if (s[a][i] == 'X') break;
        mp[a][i] = 1;
    }
    for (int i = 0; i <= min(n, m); i++) {
        if (!isValid(a + i, b + i)) break;
        if (s[a + i][b+ i] == 'X') break;
        mp[a + i][b + i] = 1;
    }
    for (int i = 0; i <= min(n, m); i++) {
        if (!isValid(a - i, b + i)) break;
        if (s[a - i][b+ i] == 'X') break;
        mp[a - i][b + i] = 1;
    }
    for (int i = 0; i <= min(n, m); i++) {
        if (!isValid(a + i, b - i)) break;
        if (s[a + i][b- i] == 'X') break;
        mp[a + i][b - i] = 1;
    }
    for (int i = 0; i <= min(n, m); i++) {
        if (!isValid(a - i, b - i)) break;
        if (s[a - i][b- i] == 'X') break;
        mp[a - i][b - i] = 1;
    }
}

int bfs(int x, int y) {
    static pii q[N];
    int f = 1, r = 1;
    q[1] = pii(x, y);
    vis[x][y] = 1;
    while (f <= r) {
        pii now = q[f++];
        if (mp[now.first][now.second]) return vis[now.first][now.second] - 1;
        for (int i = 0; i < 4; i++) {
            pii nx = pii(now.first + dx[i], now.second + dy[i]);
            if (nx.first < 0 || nx.second < 0 || nx.first >= n || nx.second >= m) continue;
            if (vis[nx.first][nx.second]) continue;
            if (s[nx.first][nx.second] == 'X')  continue;
            vis[nx.first][nx.second] = vis[now.first][now.second] + 1;
            q[++r] = nx;
        }
    }
    return -1;
}

int main() {
	freopen("dragon.in","r",stdin);
	freopen("dragon.out","w",stdout);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> s[i];
    mp.resize(n);
    vis.resize(n);
    for (int i = 0; i < n; i++)
        mp[i].resize(m), vis[i].resize(m);
    while (cin >> a >> b >> x >> y) {
        if (a == 0 && b == 0 && x == 0 && y == 0) return 0;
        a--; b--; x--; y--;
        clr();
        mk(a, b);
        int ans = bfs(x, y);
        if (ans == -1) puts("Impossible!");
        else printf("%d\n", ans);
    }
    return 0;
}
