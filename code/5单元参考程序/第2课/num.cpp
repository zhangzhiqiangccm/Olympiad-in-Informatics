#include<cstdio>
using namespace std;
const int maxn = 1000;
int n,a[maxn+1],sum;
int avg;
int main(){
	freopen("num.in","r",stdin);
	freopen("num.out","w",stdout);
	scanf("%d",&n);
	for(int i = 1; i <= n; i++){
		scanf("%d",&a[i]);
		avg += a[i];
	}
	avg /= n;
	for(int i = 1; i <= n; i++)
		if(a[i] > avg) sum++;
	printf("%d\n",sum);
	return 0;
}
