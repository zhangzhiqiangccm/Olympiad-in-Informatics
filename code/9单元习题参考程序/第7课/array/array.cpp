#include <bits/stdc++.h>
using namespace std;
int cnt[1024], n;
bool flag1 = 0, flag2 = 1;
int main(){
	freopen("array.in", "r", stdin);
	freopen("array.out", "w", stdout);
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i){
		int t; scanf("%d", &t);
		++cnt[t];
	}
	for (int i = 1; i <= 1000; ++i){
		if (cnt[i] > 1) flag1 = 1;
		if (cnt[i] == n) flag2 = 0;
	}
	if (flag1 && flag2) printf("%d %d\n", n - 2, n);
	else if (flag1) printf("%d\n", n);
	else printf("%d\n", n - 2);
	return 0;
}
