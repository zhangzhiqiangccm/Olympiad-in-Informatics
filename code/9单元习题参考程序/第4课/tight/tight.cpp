#include<bits/stdc++.h>
using namespace std;
const int maxn=101;
const int maxk=11;
int main(){
	freopen("tight.in","r",stdin);
	freopen("tight.out","w",stdout);	
	int k,n;
	double ans;
	double c[maxn][maxk];	
	while(~scanf("%d%d",&k,&n)){
		memset(c,0,sizeof(c));
		for(int j=0;j<=k;++j) c[1][j]=1;
		for(int i=1;i<n;++i){
			for(int j=0;j<=k;++j){
				if (j>0) c[i+1][j-1]=c[i+1][j-1]+c[i][j]/(k+1);
				c[i+1][j]=c[i+1][j]+c[i][j]/(k+1);
				if (j<k) c[i+1][j+1]=c[i+1][j+1]+c[i][j]/(k+1);
			}
		}
		ans=0;
		for(int j=0;j<=k;++j) ans+=c[n][j];
		ans=ans/(double)(k+1) * 100.0;
		printf("%.5lf\n",ans);
	}
	return 0;
}
