#include<cstdio>
#include<string>
using namespace std;
int main(){
	freopen("gene.in", "r", stdin);
	freopen("gene.out", "w", stdout);
	int n, x;
	scanf("%d", &n);
	for(int i = 1; i <= n; ++i){
		scanf("%d", &x);
		if(x * x % 7 != 1)
			printf("%d ", x);
	}
	return 0;
}
