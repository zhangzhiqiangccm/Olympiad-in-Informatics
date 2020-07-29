#include<bits/stdc++.h>
using namespace std;
const int maxn=100;
const int maxn2=maxn / 2;
const int maxrange=450;
bool c[maxn2+1][maxn2*maxrange+1];
int a[maxn+1];
int main(){
	freopen("tug.in","r",stdin);
	freopen("tug.out","w",stdout);
	int n,n2,sum;
	scanf("%d",&n);
	n2=(n+1)/2;
	sum=0;
	for(int i=1;i<=n;++i){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	memset(c,0,sizeof(c));
	c[0][0]=1;
	for(int k=1;k<=n;++k){
		int delta=a[k];
		for(int i=n2-1;i>=0;--i){
			for(int j=maxrange*i;j>=0;--j){
				if (c[i][j]) c[i+1][j+delta]=1;
			}
		}
	}
	int mm=sum;
	int mi=0;
	for(int j=0;j<=maxrange*n2;++j){
		if (c[n2][j]&&abs(sum-j*2)<mm){
			mm=sum-j*2;
			if (j<=sum/2) mi=j;
			else mi=sum-j;
		}
	}
	printf("%d %d\n",mi,sum-mi);
	return 0;
}
