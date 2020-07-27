#include<iostream>
#include<cstdio>
#include<cstring>
#define inf -536870912
using namespace std;

const int maxM=1000007;
const int maxN=1010;

int n;
int hash1[3*maxM], a[maxN];
struct node{
	int key,x1,x2,next;
}data[maxN * maxN];

int main(){
	freopen("sumsets.in","r",stdin);
	freopen("sumsets.out","w",stdout);
	while(scanf("%d",&n) && n){
		for(int i=1;i<=n;i++) scanf("%d",a+i);
		memset(hash1,0,sizeof(hash1));
		memset(data,0,sizeof(data));
		int k=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				data[++k].key=a[i]+a[j]; data[k].x1=i; data[k].x2=j;
				int x=data[k].key % maxM;
				if(x<0) x=-x;
				while(hash1[x]>0) {
					x=x+1;
					x=x % maxM;
				}
				hash1[x]=k;
			}
		}
		int ans=inf;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++) if(j!=i){
				int key=a[i]-a[j];
				int x=key % maxM;
				if(x<0) x=-x;
				int p=x;
				int flag=0;
				while(hash1[p]>0 && !flag){
					int p1=hash1[p];
					if (data[p1].key==key && data[p1].x1!=i && data[p1].x2!=i && data[p1].x1!=j && data[p1].x2!=j) flag=1;
					else {
						p=p+1; p = p%maxM;
					};
				} 
				if(hash1[p]>0 && a[i]>ans) ans=a[i]; 
			}
		}
		if(ans!=inf) cout<<ans<<endl;
		else cout<<"No Solution"<<endl;
	}
}

