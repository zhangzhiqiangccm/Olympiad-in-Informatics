#include<cstdio>
#include<cstring>
using namespace std;
int n, a[200010];
int x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0;
char st[2000];

void work(char *x){
	if(*x >= 'A' && *x <= 'Z')
		x1 += 1;
	else if(*x >= 'a' && *x <= 'z')
		x2 += 1;
	else if(*x >= '0' && *x <= '9')
		x3 += 1;
	else x4 += 1;
}

int main(){
	freopen("count.in", "r", stdin);
	freopen("count.out", "w", stdout);
	gets(st);
	int i;
	x5 = strlen(st);
	for(i = 0; i < x5; ++i)
		work(st + i);
	printf("%d %d %d %d %d\n", x1, x2, x3, x4, x5);
	return 0; 
}
