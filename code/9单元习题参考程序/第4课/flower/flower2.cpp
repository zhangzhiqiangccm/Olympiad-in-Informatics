#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("flower.in","r",stdin);
	freopen("flower.out","w",stdout);
	
	int n;
	long long ans;
	scanf("%d",&n);
	ans=ceil(((n*(n-3)/2)-trunc((n-3)/2.0))*n/4.0);
	//ceil 向正无穷取整
	//trunc 截尾取整
	printf("%lld\n",ans);
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
