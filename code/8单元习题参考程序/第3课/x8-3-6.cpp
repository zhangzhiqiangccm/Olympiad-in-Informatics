#include<cstdio>
using namespace std;
int main(){
	freopen("mountain.in", "r", stdin);
	freopen("mountain.out", "w", stdout);
	int i, n, mx = 0, ans = 0;
	int *a = NULL;
	scanf("%d", &n);
	a = new int(n + 5);
	for(i = 1; i <= n; ++i)
		scanf("%d", a + i);
	for(i = 1; i <= n; ++i)
		if(a[i] > mx)
			mx = a[i], ++ans;
	printf("%d\n", ans);
	delete []a;
	return 0; 
}
