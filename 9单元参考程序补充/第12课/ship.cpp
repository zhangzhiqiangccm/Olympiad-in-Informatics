#include <cstdio>
#include <algorithm>
using namespace std;
struct node{
    int x, y;
    friend bool operator < (node a, node b) {return a.x < b.x;}
} a[10010];
int x, y, n, ans, f[10010];

int main(){
    freopen("ship.in", "r", stdin);
    freopen("ship.out", "w", stdout);
    scanf("%d%d%d", &x, &y, &n);
    for(int i = 1; i <= n; ++i)
        scanf("%d%d", &a[i].x, &a[i].y);
    sort(a + 1, a + n + 1);
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j < i; ++j)
           if (a[j].y < a[i].y) f[i] = max(f[i], f[j]);
        f[i]++;
    }
    for(int i = 1; i <= n; ++i) ans = max(ans, f[i]);
    printf("%d\n", ans);
    return 0;
}