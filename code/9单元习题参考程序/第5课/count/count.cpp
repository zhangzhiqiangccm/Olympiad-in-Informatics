#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("count.in","r",stdin);
	freopen("count.out","w",stdout);	
	int n,ans;
	int f[2020];
	scanf("%d",&n);
	memset(f,0,sizeof(f));
	f[n]=1;
	for(int i=n-1;i>0;--i){
		for(int j=i*2;j<=n;++j){
			f[i]=f[i]+f[j];
		}
	}
	ans=0;
	for(int i=1;i<=n;++i) ans+=f[i];
	printf("%d",ans);
	return 0;
}
