#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("diamond.in","r",stdin);
	freopen("diamond.out","w",stdout);
	vector<int> s;
	int n,k,i,si,sum,ans = 1;
	cin >> n >> k;
	s.resize(n);
	for(i = 0;i < n; i++){
		cin >> si;
		s[i] = si;
	}	   
	sort(s.begin(),s.end());
	for(i = 0; i < n; i++){
		sum = 1;
		for (int j = i + 1; j < n; j++){
			if (s[j] - s[i] > k) break;
			sum++;
		}
		ans = max(ans,sum);
	}
	cout << ans << endl;
	return 0;	
}
