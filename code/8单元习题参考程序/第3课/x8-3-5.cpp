#include<cstdio>
using namespace std;
int main(){
	freopen("brace.in", "r", stdin);
	freopen("brace.out", "w", stdout);
	int i, n;
	int a[10000];
	scanf("%d", &n);
	for(i = 1; i <= n; ++i)
		scanf("%d", a + i);
	for(i = 2; i < n; ++i)
		if(a[i] > a[i - 1] && a[i] > a[i + 1])
			printf("%d ", a[i]);
	printf("\n");
	return 0; 
}
