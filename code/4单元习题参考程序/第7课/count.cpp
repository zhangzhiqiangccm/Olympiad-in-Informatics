#include<cstring>
#include<cstdio> 
#include<iostream>
using namespace std;
int main(){
	freopen("count.in", "r", stdin);
	freopen("count.out", "w", stdout);
	int n, x, ans = 0;
	cin >> n >> x;
	for(int i = 1; i <= n; i++){
		int k = i;
		while(k){
			if(k % 10 == x) ans++;
			k /= 10;
		}
	}
	cout << ans << endl;
	return 0;
}
