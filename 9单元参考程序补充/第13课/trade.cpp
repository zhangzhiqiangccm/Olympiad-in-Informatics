#include<cstdio>
#include<algorithm>
#define N 1010

using namespace std;

struct data{int s, f;} a[N];
int n, m;
double ans;

bool operator<(data a, data b){
	return a.s * b.f > b.s * a.f;
}

int main(){
	freopen("trade.in", "r", stdin);
	freopen("trade.out", "w", stdout);
	int i;
	scanf("%d %d", &m, &n);
	for(i = 1; i <= n; ++i)
		scanf("%d %d", &a[i].s, &a[i].f);
	sort(a + 1, a + n + 1);
	for(i = 1; i <= n; ++i)
	if(m > a[i].f){
		ans += (double)a[i].s;
		m -= a[i].f;
	} else {
		ans += (double)a[i].s * m / a[i].f;
		break;
	}
	printf("%.3lf\n", ans);
	return 0;
}
