#include<bits/stdc++.h>
using namespace std;
const int N = 30;

int n, a[N][N], h[N];
vector<int> v;

void dfs(int x) {
    h[x] = 1;
    v.push_back(x);
    for (int i= 0; i < n; i++) if (a[x][i] && h[i] == 0) dfs(i);
}

int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);	
    cin >> n;
    for (int i = 0;i < n; i++) {
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    for (int i = 0; i < n; i++) {
        if (h[i]) continue;
        dfs(i);
    }
    for (int i = 0; i < n - 1; i++) printf("%d-", v[i] + 1);
    printf("%d\n", v[n - 1] + 1);
    return 0;
}
