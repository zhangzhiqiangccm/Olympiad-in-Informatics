#include<cstdio>
#include<iostream>
using namespace std;
int i,j,k,mid,ans,m,n,h[1000001];
bool first = true;
int main(){
	freopen("height2.in","r",stdin);
	freopen("height2.out","w",stdout);
	cin >> n >> m;
	for(i = 1; i <= n; i++)
		cin >> h[i];
	h[0] = -1;
	for(i = 1; i <= m; i++){
		cin >> k;
		int left = 1;
		int right = n;
		while(left <= right){
			mid = (left + right) >> 1;
			if(h[mid] == k) break;
			else if(k < h[mid]) right = mid - 1;
			     else left = mid + 1;
		}
		ans = 0;
		j = mid - 1;
		while(h[j] == k){
			ans++;
			j--;
		}
		j = mid;
		while(j <= n && h[j] == k){
			ans++;
			j++;
		}
		if(first){
			cout << ans;
			first = false;
		}
		else cout << " " << ans;		
	}
	cout << endl;
	return 0;
}
