#include<bits/stdc++.h>
using namespace std;
const int maxn = 100000 + 10;
int sum[maxn], n, a[maxn], x[maxn], y[maxn];

int lowbit(int x){
    return x & (-x);
}

int getsum(int i){
    int s = 0;
    while(i > 0){
        s += sum[i];
        i -= lowbit(i);
    }
    return s;
}

void add(int i){
    while(i < maxn){
        ++sum[i];
        i += lowbit(i);
    }
    return ;
}

int main(){
	freopen("pingpong.in","r",stdin);
	freopen("pingpong.out","w",stdout);
    int T=1;
    while(T--){
        scanf("%d", &n);
        memset(sum, 0, sizeof(sum));
        for(int i = 1; i <= n; ++i)
            scanf("%d", &a[i]);

        for(int i = 1; i <= n; ++i){
            x[i] = getsum(a[i]);
            add(a[i]);
        }

        memset(sum, 0, sizeof(sum));
        for(int i = n; i > 0; --i){
            y[i] = getsum(a[i]);
            add(a[i]);
        }

        long long ans = 0;
        for(int i = 2; i < n; ++i)
            ans += (long long)x[i] * (n-i-y[i]) + (long long)y[i] * (i-1-x[i]);
        printf("%I64d\n", ans);
    }
    return 0;
}
