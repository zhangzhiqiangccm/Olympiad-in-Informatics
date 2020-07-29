#include<bits/stdc++.h>
using namespace std;
int w[505],t[505];
int m,n,mi,minx,total;
int main(){
	freopen("riddle.in","r",stdin);
	freopen("riddle.out","w",stdout);
	scanf("%d%d",&m,&n);
	for(int i=1;i<=n;++i) scanf("%d",&t[i]);
	for(int i=1;i<=n;++i) scanf("%d",&w[i]);
	for(int i=1;i<n;++i){
		for(int j=i+1;j<=n;++j){
			if (t[i]>t[j]||(t[i]==t[j]&&w[i]>w[j])){
				int tmp=t[i];t[i]=t[j];t[j]=tmp;
				tmp=w[i];w[i]=w[j];w[j]=tmp;
			}
		}
	}
	total=0;
	for(int i=1;i<=n;++i){
		if (t[i]<i&&i<=n){
			mi=1e9;
			for(int j=1;j<=i;++j){
				if (w[j]<mi){
					mi=w[j];
					minx=j;
				}
			}
			total+=mi;
			for(int j=minx;j<n;++j){
				w[j]=w[j+1];
				t[j]=t[j+1];
			}
			n--;
			i--;
		}
	}
	printf("%d\n",m-total);
	return 0;
}
