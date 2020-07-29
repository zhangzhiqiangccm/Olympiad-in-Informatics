#include <cstdio>
#include <algorithm>
using namespace std;
const int N = 100010;
int a[11], f[N], n;
int main(){
    freopen("busses.in", "r", stdin);
    freopen("busses.out", "w", stdout);
    for(int i = 1; i <= 10; ++i) scanf("%d", &a[i]);
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i){
        f[i] = 1 << 30;
        for(int j = 1; j <= min(i, 10); ++j)
            f[i] = min(f[i], a[j] + f[i - j]);
    }
    printf("%d\n", f[n]);
    return 0;
}