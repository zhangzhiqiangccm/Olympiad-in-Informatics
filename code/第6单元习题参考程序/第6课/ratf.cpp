#include<iostream>
#include<cstdio>
using namespace std;
int ans,n,k;

void splitcow(int n){
	 if (n > k && (n + k) % 2 == 0 && (n - k) % 2 == 0){
	 	splitcow((n + k) / 2);
	 	splitcow((n - k) / 2);
	 }
	 else ans++;
	 return;
}

int main(){
	freopen("ratf.in","r",stdin);
	freopen("ratf.out","w",stdout);
	cin >> n >> k;
	splitcow(n);
	cout << ans << endl;
	return 0;
}

