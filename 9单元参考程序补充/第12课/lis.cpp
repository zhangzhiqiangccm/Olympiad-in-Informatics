#include <cstdio>
#include <algorithm>
using namespace std;
const int N = 2010;
int a[N], f[N], n, ans;
int main(){
    freopen("lis.in", "r", stdin);
    freopen("lis.out", "w", stdout);
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i) scanf("%d", &a[i]);
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j < i; ++j)
            if (a[j] >= a[i]) f[i] = max(f[i], f[j]);
        f[i]++;
    }
    for(int i = 1; i <= n; ++i) ans = max(ans, f[i]);
    printf("%d\n", ans);
    return 0;
}
