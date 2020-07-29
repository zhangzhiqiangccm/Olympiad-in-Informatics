#include<cstdio>
#include<algorithm>
#define N 30010
#define M 30

using namespace std;

int n, m;
int v[M], p[M], f[N];

int main(){
	freopen("happy.in", "r", stdin);
	freopen("happy.out", "w", stdout);
	int i, j;
	scanf("%d %d", &n, &m);
	for(i = 1; i <= m; ++i)
		scanf("%d %d", &v[i], &p[i]);
	for(i = 1; i <= m; ++i)
		for(j = n; j >= v[i]; --j)
			f[j] = max(f[j], f[j-v[i]] + v[i] * p[i]);
	printf("%d\n", f[n]);
	return 0;
}
