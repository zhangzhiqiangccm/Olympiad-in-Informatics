#include <cstdio>
#include <algorithm>
using namespace std;
const int N = 1010;
int a[N][N], f[N][N][100], ans, n;
int main(){
    freopen("digtriangle3.in", "r", stdin);
    freopen("digtriangle3.out", "w", stdout);
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= i; ++j)
            scanf("%d", &a[i][j]);
    f[1][1][a[1][1]] = 1;
    for(int i = 2; i <= n; ++i)
        for(int j = 1; j <= i; ++j)
            for(int k = 0; k < 100; ++k){
                f[i][j][(a[i][j] + k) % 100] |= f[i - 1][j - 1][k];
                f[i][j][(a[i][j] + k) % 100] |= f[i - 1][j][k];
            }
    for(int i = 99; ~i; --i){
        for(int j = 1; j <= n; ++j)
            if (f[n][j][i]) {ans = i; break;}
        if (ans) break;
    }
    printf("%d\n", ans);
    return 0;
}