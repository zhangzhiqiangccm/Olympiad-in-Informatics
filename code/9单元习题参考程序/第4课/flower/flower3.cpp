#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("flower.in","r",stdin);
	freopen("flower.out","w",stdout);
	
	int n,nn,ans;
	scanf("%d",&n);
	nn=n/2;
	if (n%2) ans=(nn-1)*nn /2 *n;
	else ans=nn*(nn-1)*(nn-1);
	printf("%d\n",ans);
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
