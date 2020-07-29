#include<bits/stdc++.h>
using namespace std;
const int maxn=10001;
typedef long long ll;
int w[maxn],d[maxn];
int n,j;
ll sumw,sumd,now,c,wleft,wright,ans,temp;

void shift(){
	while(now+d[j]<=sumd/2){
		now+=d[j];
		j=(j+1)%n;
		wleft+=w[j];
		wright-=w[j];
		c+=(w[j]*(now+now-sumd));
	}
}

int main(){
	freopen("bro.in","r",stdin);
	freopen("bro.out","w",stdout);	
	scanf("%d",&n);
	sumw=0;sumd=0;
	for(int i=0;i<n;++i){
		scanf("%d%d",&w[i],&d[i]);
		sumw+=w[i];
		sumd+=d[i];
	}
	
	j=0;now=0;wleft=0;wright=sumw-w[0];
	c=0;temp=sumd;
	for(int i=0;i<n;++i){
		if (i) c+=(w[i]*temp);
		temp-=d[i];
	}
	shift();
	ans=c;
	for(int i=1;i<n;++i){
		c-=(wleft*d[i-1]);
		wleft-=w[i];
		wright+=w[i-1];
		c+=(wright*d[i-1]);
		now-=d[i-1];
		shift();
		if (c<ans) ans=c;
	}	
	printf("%lld\n",ans);
	return 0;
}
