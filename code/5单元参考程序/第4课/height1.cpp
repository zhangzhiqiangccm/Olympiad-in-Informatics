#include<cstdio>
#include<iostream>
using namespace std;
int h[1000001],n,k,i,ans;
int main(){
	freopen("height1.in","r",stdin);
	freopen("height1.out","w",stdout);
	cin >> n;
	for(i = 1; i <= n; i++)
		cin >> h[i];
	cin >> k;
	for(i = 1; i <= n; i++)
	   if(h[i] == k) ans++;
	cout << ans << endl;
	return 0;
}
