#include<bits/stdc++.h>
using namespace std;
int a1,a2,a3,s,b1,b2,b3,n,x,y,l,r,to,mid,ans;

int er(int one,int two,int an){
	l=10;r=15000;
	while (l+1<r){
		mid=(l+r)/2;
		to=mid*one+mid*mid*two;
		if (to<an) l=mid;
		else if(to==an) return mid;
		else r=mid;
	}
	if (l*one+l*l*two==an) return l;
	if (r*one+r*r*two==an) return r;
	if ((l+1)*one+(l+1)*(l+1)*two==an) return l+1;
	return 0;
}

void work(int x,int y){
	a1=x % 10;
	a2=x / 10 % 10;
	a3=x / 100;
	b1=y % 10;
	b2=y / 10 % 10;
	b3=y / 100;
	for (int i=10;i<=15000;i++){
		s=a3*i*i+a2*i+a1-b1;
		ans=er(b2,b3,s);
		if (ans){
			printf("%d %d\n",i,ans);
			return;
		}
	}
}

int main(){
	freopen("whatbase.in","r",stdin);
	freopen("whatbase.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++){
		scanf("%d %d",&x,&y);
		work(x,y);
	}
	return 0;
}
