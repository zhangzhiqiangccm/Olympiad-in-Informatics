#include<iostream>
#include<cstdio>
using namespace std;
int n,i,j,x,y,g,k,c[10001][4],ans = -1;
int main() {
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	cin >> n;
	for(i = 1; i <= n; i++){
		cin >> c[i][0] >> c[i][1] >> g >> k;
		c[i][2] = c[i][0] + g;
		c[i][3] = c[i][1] + k;
	}
	cin >> x >> y;
	for(i = n; i >= 1; i--)
		if(x >= c[i][0] && x <= c[i][2] && y >= c[i][1] && y <= c[i][3]){
		   ans = i;
		   break;
		}
	cout << ans << endl;
	return 0;
}