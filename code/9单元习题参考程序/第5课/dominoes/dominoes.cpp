#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("dominoes.in","r",stdin);
	freopen("dominoes.out","w",stdout);
	int f[31],n;
	f[0]=1;f[1]=1;
	scanf("%d",&n);
	for(int i=2;i<=n;++i) 
		f[i]=f[i-1]+f[i-2];
	printf("%d\n",f[n]);
	return 0;
}
