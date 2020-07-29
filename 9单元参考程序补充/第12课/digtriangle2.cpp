#include <cstdio>
#include <algorithm>
using namespace std;
const int N = 1010;
int a[N][N], f[N][N], ans, n;
int main(){
    freopen("digtriangle2.in", "r", stdin);
    freopen("digtriangle2.out", "w", stdout);
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= i; ++j)
            scanf("%d", &a[i][j]);
    for(int i = n / 2 + 1; i <= n; ++i)
        for(int j = n / 2; j <= i; ++j)
            f[i][j] = max(f[i - 1][j], f[i - 1][j - 1]) + a[i][j];
    for(int i = n / 2; i <= n; ++i) ans = max(ans, f[n][i]);
    for(int i = 1; i <= n / 2; ++i) ans += a[i][i];
    printf("%d\n", ans);
    return 0;
}