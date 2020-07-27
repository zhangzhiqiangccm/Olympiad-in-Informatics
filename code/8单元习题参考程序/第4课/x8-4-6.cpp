#include<cstdio>
#include<cstring>
using namespace std;
int n, a[200010];

void cmp(int *x){
	if(*x < * (x - 1)){
		int t = *x;
		*x = *(x - 1);
		*(x - 1) = t;
	}
}

int main(){
	freopen("sort.in", "r", stdin);
	freopen("sort.out", "w", stdout);
	int i, j;
	scanf("%d", &n);
	for(i = 1; i <= n; ++i){
		scanf("%d", a + i);
	}
	for(i = 1; i < n; ++i)
		for(j = n; j >= 2; --j)
			cmp(a + j);
	for(i = 1; i <= n; ++i)
		printf("%d ", a[i]);
	return 0; 
}
