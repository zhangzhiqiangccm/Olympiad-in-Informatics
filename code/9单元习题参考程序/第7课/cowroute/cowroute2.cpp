#include <bits/stdc++.h>
using namespace std;
bool tmp;
int n,a,b,x,y,tmp2,ans=-1,s[10010],s1[10010]={0},s2[10010]={0};
void suan(int y){
	for (int j=1;j<=y;j++){
		if (s[j]==b) {
			return;
		}else{
			if (!s2[s[j]]){
				s2[s[j]]=x;
			}else{
				s2[s[j]]=min(x,s2[s[j]]);
			}
		}
	}
}
int main(){
	freopen("cowroute2.in","r",stdin);
	freopen("cowroute2.out","w",stdout);
	scanf("%d %d %d",&a,&b,&n);
	for(int i=1;i<=n;i++){
		scanf("%d %d",&x,&y);
		tmp=false;tmp2=0;
		for (int j=1;j<=y;j++){
			scanf("%d",&s[j]);
			if (tmp){
				if (!s1[s[j]]){
					s1[s[j]]=x;
				}else{
					s1[s[j]]=min(x,s1[s[j]]);
				}
			}
			if (s[j]==a) tmp=true;
			if (s[j]==b) tmp2=1;
		}
		if (tmp2) suan(y);
	}
	for (int i=1;i<=10000;i++){
		if (s1[i]&&s2[i]){
			if (ans==-1) ans=s1[i]+s2[i];
			else ans=min(ans,s1[i]+s2[i]);
		}
	}
	if (s1[b]) if (ans==-1) ans=s1[b];else ans=min(ans,s1[b]);
	if (s2[a]) if (ans==-1) ans=s2[a];else ans=min(ans,s2[a]);
	cout<<ans<<endl;
	return 0;
}
