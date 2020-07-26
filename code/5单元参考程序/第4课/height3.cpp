#include<cstdio>
using namespace std;
int h[1000001],nh[1000001],n,k,i,t;
int main(){
	freopen("height3.in","r",stdin);
	freopen("height3.out","w",stdout);
	scanf("%d",&n) ;
	for(i = 1; i <= n; i++)
		scanf("%d",&h[i]);
	scanf("%d",&k) ;
	for(i = 1; i <= n; i++)
	   if(h[i] != k) nh[++t] = h[i];
	for(i = 1; i < t; i++)
	   printf("%d ",nh[i]);
	printf("%d\n",nh[t]);
	return 0;
}
