#include<bits/stdc++.h>
using namespace std;
const int N = 30;

inline int read()
{
    char c = getchar();
    int x = 0, f = 1;
    while (c < '0' || c > '9')
    {
        if (c == '-')
            f = -1;
        c = getchar();
    }
    while (c >= '0' && c <= '9')
    {
        x = x * 10 + c - '0';
        c = getchar();
    }
    return x * f;
}

int n, m, ans = 0;
int vis[50], shift = 10;

void dfs(int d)
{
    ans = max(ans, d - 2);
    if (d > m + n)
        return;
    for (int x = 1; x <= d - 1; x++)
    {
        int y = d - x;
        if (x < 1 || x > n || y < 1 || y > m)
            continue;
        if (vis[x - y + shift])
            continue;
        vis[x - y + shift] = 1;
        dfs(d + 1);
        vis[x - y + shift] = 0;
    }
}

int main()
{	freopen("bishop.in","r",stdin);
	freopen("bishop.out","w",stdout);
    n = read();
    m = read();
    dfs(2);
    printf("%d", ans);
    return 0;
}
