#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[60][100100];
int pre[60][100100];
int main(){
	freopen("min01.in","r",stdin);
	freopen("min01.out","w",stdout);
	
	int n;
	scanf("%d",&n);
	memset(f,-1,sizeof(f));
	memset(pre,-1,sizeof(pre));
	int now=0;
	ll mod=1%n,cnt=1/n;
	while(f[now][0]==-1){
		for(int i=1;i<n;++i){
			if (f[now][i]) {
				f[now+1][i]=f[now][i];
				pre[now+1][i]=i;
			}
		}
		if (f[now+1][mod]==-1){
			f[now+1][mod]=now+1;
			pre[now+1][mod]=0;
		}
		for(int i=1;i<n;++i){
			if (f[now][i]!=-1&&f[now+1][(mod+i)%n]==-1){
				f[now+1][(mod+i)%n]=now+1;
				pre[now+1][(mod+i)%n]=i;
			}
		}
		now++;
		cnt=cnt*10LL+mod*10LL/(ll)n;
		mod=mod*10LL%(ll)n;
	}
	
	printf("%d ",n); 
	
	int kk=0;
	cnt=0,mod=0;
	int pre0=1;
	for(int j=now;j>0;--j){
		mod*=10;
		if (f[j][kk]==j) mod++;
		cnt=mod/n;
		mod%=n;
		
		if (cnt) pre0=0;
		if (!pre0) printf("%d",cnt); 
				
		kk=pre[j][kk];
	}
	printf(" ");
	
	kk=0;
	for(int j=now;j>0;--j){
		if (f[j][kk]==j) printf("1");
		else printf("0");
		kk=pre[j][kk];
	}
	printf("\n");
	return 0;
}
