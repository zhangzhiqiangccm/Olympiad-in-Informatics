#include<bits/stdc++.h>
using namespace std;
map<string,long long>goods;
map<string,long long>price;
int n,k;
long long need,ans; string st;
int main(){
	freopen("maxbenefit.in","r",stdin);
    freopen("maxbenefit.out","w",stdout);  
	scanf("%d%d",&n,&k);
	for(int i = 1; i <= n; ++i) 
	  cin >> st,cin >> price[st] >> goods[st];
	ans = 0;
	for(int i = 1; i <= k; ++i){
		cin >> st,cin >> need;
		if(goods[st] >= need) 
			ans += price[st] * need, goods[st] -= need;
		else{cout << '-' << i; return 0;}
	}
	cout << ans;
	return 0;
}
