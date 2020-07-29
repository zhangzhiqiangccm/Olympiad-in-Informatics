#include<bits/stdc++.h>
using namespace std;
const int N = 20;
int n, dis[N][2], arr[N][N], now[N], h[N], in[N][N];

int isValid(int id) {
    int tot = 0;
    for (int i = 0; i < n; i++) if (now[i] == arr[id][i]) tot += now[i];
    if (tot != dis[id][0]) return 0;
    tot = 0;
    for (int i = 0; i < n; i++) if (in[id][now[i]] && now[i] != arr[id][i]) tot += now[i];
    if (tot != dis[id][1]) return 0;
    return 1;
}

void chk() {
    for (int i = 0; i < n; i++) if (!isValid(i)) return;
    for (int i = 0; i < n - 1; i++) printf("%d ", now[i]);
    printf("%d\n", now[n - 1]);
    exit(0);
}

void dfs(int p) {
    if (p == n) {
        chk();
        return;
    }
    for (int i = 1; i <= 9; i++) {
        if (h[i]) continue;
        h[i] = 1;
        now[p] = i;
        dfs(p + 1);
        h[i] = 0;
    }
}

int main() {
	freopen("mas.in","r",stdin);
	freopen("mas.out","w",stdout);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> dis[i][0] >> dis[i][1];
        for (int j = 0; j < n; j++) cin >> arr[i][j], in[i][arr[i][j]] = 1;
    }
    dfs(0);
    return 0;
}
