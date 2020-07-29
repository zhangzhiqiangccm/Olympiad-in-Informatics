#include<bits/stdc++.h>
using namespace std;
const int maxn = 25;
char isLove[maxn][maxn];
bool isUsed[maxn];
int n;
int ans;

void init()
{
    ans = 0;
    memset(isUsed, false, sizeof(isUsed));
}

void dfs(int t)
{
    if (t > n)
    {
        ans++;
        return;
    }
    bool ok = false;
    for (int i = 1; i <= n; i++)
        if (isLove[t][i] == '1' && !isUsed[i])
        {
            ok = true;
            isUsed[i] = true;
            dfs(t + 1);
            isUsed[i] = false;
        }
    if (!ok)
        return;
}

int main()
{	freopen("book.in","r",stdin);
	freopen("book.out","w",stdout);
    cin.tie(0);
    cin.sync_with_stdio(false);
    while (scanf("%d", &n) != EOF)
    {
        init();
        for (int i = 1; i <= n; i++)
        {
            scanf("%s", isLove[i] + 1);
        }
        dfs(1);
        printf("%d\n", ans);
    }
    return 0;
}
