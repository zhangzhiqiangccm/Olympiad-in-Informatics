#include<bits/stdc++.h>
using namespace std;
int n, m, dp[10][205];
int main()
{	freopen("divide.in","r",stdin);
	freopen("divide.out","w",stdout);
    scanf("%d %d", &n, &m);
    dp[0][0] = 1;
    for (int i = 1; i <= m; i++)
    {
        for (int j = i; j <= n; j++)
        {
            dp[i][j] = dp[i][j - i] + dp[i - 1][j - 1];
        }
    }
    printf("%d\n", dp[m][n]);
    return 0;
}
