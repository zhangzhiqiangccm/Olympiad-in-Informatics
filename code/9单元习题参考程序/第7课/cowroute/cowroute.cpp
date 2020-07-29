#include<iostream>
#include<cstdio>
using namespace std;
bool tmp;
int n,a,b,x,y,f,ans=-1;
int main(){
	freopen("cowroute.in","r",stdin);
	freopen("cowroute.out","w",stdout);
	scanf("%d %d %d",&a,&b,&n);
	for(int i=1;i<=n;i++){
		scanf("%d %d",&x,&y);
		tmp=true;
		for (int j=1;j<=y;j++){
			scanf("%d",&f);
			if (tmp){
				if (f==a){
					tmp=0;
				}
			}else{
				if (f==b){
					if (ans==-1){
						ans=x;
					}else{
						ans=min(ans,x);
					}
				}
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
