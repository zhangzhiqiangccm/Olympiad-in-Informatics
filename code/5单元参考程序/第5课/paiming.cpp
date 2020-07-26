#include<iostream>
#include<cstdio>
using namespace std;
int a[201],b[201],ans[201];
int n,i,j,tmp;
int main() {
	freopen("paiming.in","r",stdin);
	freopen("paiming.out","w",stdout);
	cin >> n;
	for(i = 1; i <= n; i++) cin >> a[i] >> b[i];
	for(i = 1; i < n; i++)
		for(j = i + 1; j <= n; j++)
			if(a[i] < a[j] || a[i] == a[j] && b[i] > b[j]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
				tmp = b[i];
				b[i] = b[j];
				b[j] = tmp;
			}
	ans[1] = 0;
	for(i = 2; i <= n; i++) {
		ans[i] = 0;
		for(j = 1; j < i; j++)
			if(b[i] > b[j]) ans[i]++;
	}
	for(i = 1; i <= n; i++) cout << ans[i] << endl;
	return 0;
}
