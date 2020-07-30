#include<bits/stdc++.h>
using namespace std;
int a[2001];
int main(){
	freopen("librarian.in","r",stdin);
	freopen("librarian.out","w",stdout);
	int n,q,s,k,v;
	cin >> n >> q;
	for(int i = 1; i <= n; ++i) cin >> a[i];
	sort(a+1,a+1+n);
	for(int i = 1; i <= q; ++i){
		cin >> s >> k;
		v = 1;
		for(int j = 1; j <= s; ++j)	v *= 10;
		for(int j = 1; j <= n; ++j)
			if(a[j] %v == k){
				cout << a[j] << endl;
				v = -1;
				break;
			}
		if(v != -1) cout << -1 << endl;
	}
	return 0;
}