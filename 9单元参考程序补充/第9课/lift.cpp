#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <map>
#include <queue>
#define ll long long
#define rep(i, m, n) for (i = m; i <= n; i++)
#define inf 0x3f3f3f3f
const int maxn = 1e3 + 10;
using namespace std;
int n, m, a, b;
const int dis[][2] = {0, 1, 1, 0, -1, 0, 0, -1};
int q[maxn], vis[maxn];
int main()
{	freopen("lift.in","r",stdin);
	freopen("lift.out","w",stdout);
    int i, j, k, t;
    queue<int> p;
    scanf("%d%d%d", &n, &a, &b);
    vis[a] = 1;
    for (i = 1; i <= n; i++)
        scanf("%d", &q[i]);
    p.push(a);
    while (!p.empty())
    {
        int now = p.front(), l = now - q[now], r = now + q[now];
        p.pop();
        if (l >= 1 && !vis[l])
            p.push(l), vis[l] = vis[now] + 1;
        if (r <= n && !vis[r])
            p.push(r), vis[r] = vis[now] + 1;
        if (l == b || r == b)
            break;
    }
    printf("%d\n", vis[b] - 1);
    return 0;
}
