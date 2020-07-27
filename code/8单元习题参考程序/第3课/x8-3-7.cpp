#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int n, a[200010];
char st[200010][10];

int cmp(char *x, char *y){
	if(*x == *y){
		if(*x == '\0')
			return 0;
		return cmp(x + 1, y + 1);
	}
	if(*y == '\0')
		return 0;
	if(*x == '\0' || *x < *y)
		return 1;
	return 0;
}

bool check(int x, int y){
	return cmp(st[x], st[y]);
}

int main(){
	freopen("dictionary.in", "r", stdin);
	freopen("dictionary.out", "w", stdout);
	int i;
	scanf("%d", &n);
	for(i = 1; i <= n; ++i){
		scanf(" %s", st[i]);
		a[i] = i;
	}
	sort(a + 1, a + n + 1, check);
	for(i = 1; i <= n; ++i)
		printf("%s\n", st[a[i]]);
	return 0; 
}
