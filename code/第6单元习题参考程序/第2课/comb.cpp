#include<iostream>
#include<cstdio>
using namespace std;

long long f(int n){
	long long ans = 1;
	for(int i = 1; i <= n; i++) ans *= i;
	return ans;
}

int main(){
	freopen("comb.in","r",stdin);
	freopen("comb.out","w",stdout);
	int n,m;
	cin >> n >> m;
	cout << f(n) / f(m) / f(n - m) << endl;
	return 0;
}
