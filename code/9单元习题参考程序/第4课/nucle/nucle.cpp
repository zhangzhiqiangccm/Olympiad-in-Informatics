#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("nucle.in","r",stdin);
	freopen("nucle.out","w",stdout);	
	int n,m;
	long long f[60];
	scanf("%d%d",&n,&m);
	memset(f,0,sizeof(f));
	f[0]=1;
	for(int i=1;i<=n;++i){
		int t=i-m-1;
		long long tmp;
		if (t<-1) tmp=0;
		else if (t==-1) tmp=1;
		else tmp=f[t];
		f[i]=2*f[i-1]-tmp;
	}
	printf("%lld\n",f[n]);
	return 0;
}
