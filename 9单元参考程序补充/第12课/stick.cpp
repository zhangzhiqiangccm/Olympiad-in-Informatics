#include <cstdio>
#include <algorithm>
using namespace std;
struct node{
    int x, y;
    friend bool operator < (node a, node b) {
        return a.x == b.x ? a.y < b.y : a.x < b.x;
    }
} a[1010];
int n, tot, f[1010];

int main(){
    freopen("stick.in", "r", stdin);
    freopen("stick.out", "w", stdout);
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i)
        scanf("%d%d", &a[i].x, &a[i].y);
    sort(a + 1, a + n + 1);
    for(int i = 1; i <= n; ++i){
        int mx = 0, wh = 0;
        for(int j = 1; j <= tot; ++j)
            if (a[i].y >= f[j] && f[j] > mx) mx = f[j], wh = j;
        if (wh) f[wh] = a[i].y; else f[++tot] = a[i].y;
    }
    printf("%d\n", tot);
    return 0;
}