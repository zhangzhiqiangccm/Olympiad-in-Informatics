#include<bits/stdc++.h>
#define rep(i, s, t) for(i = s; i <= t; ++i)
using namespace std;
int n, k, m;
vector<int> ve[100010];
int main() {
    freopen("rollover.in", "r", stdin);
    freopen("rollover.out", "w", stdout);
	int i, j, x;
	scanf("%d %d %d", &n, &k, &m);
	rep(i, 1, n){
		scanf("%d", &x);
		ve[x%m].push_back(x);
	}
	rep(i, 0, m)
	if(ve[i].size() >= k){
		puts("Yes");
		rep(j, 0, k-1) printf("%d ", ve[i][j]);
		return 0;
	}
	puts("No");
	return 0;
}
