#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("flower.in","r",stdin);
	freopen("flower.out","w",stdout);
	
	int n;
	long long ans;
	scanf("%d",&n);
	if (n%2) ans=(long long)n*(n-1)*(n-3)/8;
	else ans=(long long)n/2*((n-2)/2)*((n-2)/2);
	printf("%lld\n",ans);
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
