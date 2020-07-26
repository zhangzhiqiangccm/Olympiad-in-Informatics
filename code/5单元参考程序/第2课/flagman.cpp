#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	freopen("flagman.in","r",stdin);
	freopen("flagman.out","w",stdout);
	int n,maxi = 0,pos,a[10001];
	scanf("%d",&n);
	for(int i = 1; i <= n; ++i)
	    scanf("%d",&a[i]);
	for(int i = 1; i <= n; i++)
	    if(a[i]>maxi){
	    	maxi = a[i];
	    	pos=i;
	    }
	int tmp = a[1];
	a[1] = a[pos];
	a[pos] = tmp;
	for(int i = 1; i < n; i++)
	    printf("%d ",a[i]);
	printf("%d\n",a[n]);
	return 0;
}