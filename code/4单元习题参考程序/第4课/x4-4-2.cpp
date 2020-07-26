#include<iostream> 
using namespace std;
int main(){
	int m, n, k, ans = 0;
	cin >> m >> n >> k;
	for(int i = m; i <= n; i++)
		if(i % 19 == 0){
			int x = i, j = 0;
			while(x){
				if(x % 10 == 3) ++j;
				x /= 10;
			}
			if(j == k) ans++;
		} 
	cout << ans << endl;
	return 0;
}
