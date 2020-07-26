#include<cstdio>
#include<cstring>
using namespace std;
int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	bool f[10001];
	int n,m,ans = 0;
	memset(f,0,sizeof(f));
	scanf("%d%d",&n,&m);
	for(int i = 1; i <= n; i++){
		int l,r;
		scanf("%d%d",&l,&r);
		for(int j = l; j <= r; j++)
		    f[j] = 1;
	}
	for(int i = 0; i <= n; i++)
	    if(!f[i]) ans++;
	printf("%d\n",ans);
	return 0;
}