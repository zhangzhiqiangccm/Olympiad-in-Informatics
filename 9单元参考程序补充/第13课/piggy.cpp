#include<cstdio>
#include<algorithm>
#include<cstring>
#define M 10010
#define N 510
#define inf 0x3f3f3f3f

using namespace std;

int n, V;
int p[N], w[N];
int f[M];

int main(){
	freopen("piggy.in", "r", stdin);
	freopen("piggy.out", "w", stdout);
	int E, F, i, j;
	scanf("%d %d", &E, &F);
	V = F - E;
	scanf("%d", &n);
	for(i = 1; i <= n; ++i)
		scanf("%d %d", &p[i], &w[i]);
	memset(f, 0x3f, sizeof f);
	f[0] = 0;
	
	for(i = 1; i <= n; ++i)
		for(j = w[i]; j <= V; ++j)
			f[j] = min(f[j], f[j-w[i]] + p[i]);
	if(f[V] < inf)
		printf("The minimum amount of money in the piggy-bank is %d.\n", f[V]);
	else 
		puts("This is impossible.");
	return 0;
}
