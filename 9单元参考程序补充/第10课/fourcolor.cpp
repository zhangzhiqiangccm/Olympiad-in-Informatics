#include<bits/stdc++.h>
using namespace std;

const int N = 30;
int n, c[N][N], t[N];

int isValid(int p)
{
    for (int i = 0; i < n; i++)
    {
        if (p == i || c[i][p] == 0 || t[i] == 0)
            continue;
        if (t[i] == t[p])
            return 0;
    }
    return 1;
}

void dfs(int p)
{
    if (p == n)
    {
        for (int i = 0; i < n - 1; i++)
            printf("%d ", t[i]);
        printf("%d\n", t[n - 1]);
        exit(0);
    }
    else
    {
        for (int i = 1; i <= 4; i++)
        {
            t[p] = i;
            if (!isValid(p))
                continue;
            dfs(p + 1);
        }
        t[p] = 0;
    }
}

int main()
{	freopen("fourcolor.in","r",stdin);
	freopen("fourcolor.out","w",stdout);
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &c[i][j]);
    dfs(0);
    return 0;
}
