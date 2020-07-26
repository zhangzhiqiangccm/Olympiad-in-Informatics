#include <iostream>
#include<cstdio>
using namespace std;

bool check(int n){
	int m = n, dn = 0;
	while(n != 0){
		dn = dn * 10 + n % 10;
		n /= 10;
	}
	return (m == dn ? true : false);
}

int main(){
	freopen("hws.in","r",stdin);
	freopen("hws.out","w",stdout);
	int n,i,ans = 0;
	scanf("%d",&n);
	for(i = 1; i <= n; i++) if(check(i)) ans++;
	printf("%d\n",ans);
	return 0;
}
