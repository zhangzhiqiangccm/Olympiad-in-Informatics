#include<iostream>
#include<cstdio>
using namespace std;
int a[1001];
int main(){
	freopen("newjsf.in","r",stdin);
	freopen("newjsf.out","w",stdout);
	int i,j,m,n,k,s,p;
	bool first = true;
	cin >> m >> s >> n >> k;
	s--;
	if(s == 0) s = m;
	for(i = 1; i <= m; i++){
		p = 0;
		if(i % 2 == 0)
			while(p != k){
				s--;
				if(s == 0) s = m;
				if(a[s] == 0) p++;
			}
		else
			while(p != n){
				s++;
				if(s == m+1) s = 1;
				if(a[s] == 0) p++;
			}
		a[s] = 1;
		if(first){
			first = false;
			cout << s;
		} else cout << " " << s;
	}
	cout << endl;
	return 0;
}
