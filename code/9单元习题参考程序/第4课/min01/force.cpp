#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool check(ll x){
	while(x){
		if (x%10LL==0||x%10LL==1) ;else return 0;
		x/=10LL;
	}
	return 1;
}
int main(){
	freopen("min01.out","r",stdin);
	freopen("min01_force.out","w",stdout);
	
	ll n,ans;
	scanf("%lld%lld",&n,&ans);
	for(ll i=1;i<ans;++i){
		if (check((ll)i*n)){
			printf("%lld %lld %lld\n",n,i,(ll)i*n);
			break;
		}
	}
	
	printf("%lld %lld %lld\n",n,ans,(ll)n*ans);
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
