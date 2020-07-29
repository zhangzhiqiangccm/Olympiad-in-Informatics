#include<bits/stdc++.h>
using namespace std;
int m,n,a[20][20]={0},b[20][20]={0},a1[100010],b1[100010],a2=0,b2=0,x,y,p,q,a3,b3;
void dfs1(int s,int t){
	if (s==m){
		a1[++a2]=t;
	}else{
		for (int i=s+1;i<=m;i++){
			if (a[s][i]){
				dfs1(i,t+a[s][i]);
			}
		}
	}
}
void dfs2(int s,int t){
	if (s==m){
		b1[++b2]=t;
	}else{
		for (int i=s+1;i<=m;i++){
			if (b[s][i]){
				dfs2(i,t+b[s][i]);
			}
		}
	}
}
int main(){
	freopen("meeting.in","r",stdin);
	freopen("meeting.out","w",stdout);
	scanf("%d %d",&m,&n);
	for (int i=1;i<=n;i++){
		scanf("%d %d %d %d",&x,&y,&p,&q);
		a[x][y]=p;
		b[x][y]=q;
	}
	dfs1(1,0);
	dfs2(1,0);
	sort(a1+1,a1+a2+1);
	sort(b1+1,b1+b2+1);
	a3=1;b3=1;
	while (a3<=a2&&b3<=b2){
		if (a1[a3]==b1[b3]){
			cout<<a1[a3]<<endl;
			return 0;
		}else{
			if (a1[a3]<b1[b3]){
				a3++;
			}else{
				b3++;
			}
		}
	}
	cout<<"IMPOSSIBLE"<<endl;
	return 0;
}


