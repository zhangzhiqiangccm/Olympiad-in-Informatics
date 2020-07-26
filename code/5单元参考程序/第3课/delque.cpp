#include<cstdio>
using namespace std;
int n,x,t[1001];
int main(){
	freopen("delque.in","r",stdin);
	freopen("delque.out","w",stdout);
	scanf("%d %d",&n,&x);
	for(int i = 1; i <= n; i++)
		scanf("%d",&t[i]);
	for(int i = 1; i <= n; i++)
	    if(t[i] != x) printf("%d ",t[i]);
	printf("\n");
	return 0;
}