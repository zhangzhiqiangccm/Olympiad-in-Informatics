#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("bishop.in","r",stdin);
	freopen("bishop.out","w",stdout);
	int n,m;
	scanf("%d%d",&n,&m);
	int ans;
	if (n<m){
		int tmp=n;n=m;m=tmp;
	}
	int x=abs(n-m);
	if (n==1&&m==1) ans=1;
	else
	if (n%2==0&&m%2==0||m==n) ans=n+m-2;
	else ans=n+m-1;
	printf("%d\n",ans);
	return 0;
}
