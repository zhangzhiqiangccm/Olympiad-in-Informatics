#include <cstdio>
typedef long long LL;
const int MAXN = 111111;
int a[MAXN], b[MAXN], s[MAXN], t[MAXN];
int main(){
	freopen("brick.in","r",stdin);
	freopen("brick.out","w",stdout);
    int n, ans = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i){
        scanf("%d%d", &a[i], &b[i]);
        s[b[i]] += a[i];
    }
    if(!s[0] || !s[1]){
        printf("%d\n", s[0] + s[1]);
        return 0;
    }
    for(int i = 0; i < n; ++i){
        int x = b[i], y = b[i] ^ 1;
        if(s[y] && LL(s[x]) * t[y] % s[y] == 0){
            int z = LL(s[x]) * t[y] / s[y] - t[x];
            if(z >= 1 && z <= a[i])
                ++ans;
        }
        t[x] += a[i];
    }
    printf("%d\n", ans);
    return 0;
}
