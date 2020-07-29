#include<cstdio>
#include<cstring>
#include<algorithm>
#define MAXN	1005
#define ull unsigned long long
using namespace std;

bool visited[MAXN], solved;
long long x[MAXN], y[MAXN], z[MAXN];
int n; 
long long h, r;

long long sqr(long long x) {return x * x; }

void work(int pos) {
	visited[pos] = true;
	if (abs(z[pos] - h) <= r) solved = true;
	if (solved) return;
	for (int i = 1; i <= n; i++)
		if (!visited[i] && (ull)(sqr(2 * r)) >= (ull)(sqr(x[pos] - x[i])) + (ull)(sqr(y[pos] - y[i])) + (ull)(sqr(z[pos] - z[i]))) 
			work(i);
}

int main() {
	freopen("cheese.in", "r", stdin);
	freopen("cheese.out", "w", stdout);
	int T; 
	scanf("%d", &T);
	while (T--) {
		scanf("%d %d %d", &n, &h, &r);
		memset(visited, false, sizeof(visited));
		for (int i = 1; i <= n; i++)
			scanf("%lld %lld %lld", x+i, y+i, z+i);
		solved = false;
		for (int i = 1; i <= n; i++)
			if (!visited[i] && abs(z[i]) <= r) work(i);
		if (solved) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
