#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("hui.in","r",stdin);
	freopen("hui.out","w",stdout);
	int a[1001],n;
	scanf("%d",&n);
	a[1]=0;
	for(int i=2;i<=n;++i){
		if (i%2) a[i]=a[i-1];
		else a[i]=a[i-1]*2+1;
	}
	printf("%d\n",a[n]);
	return 0;
}
