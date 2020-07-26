#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	char a[20],b[20];
	int i,j,ans = 0;
	cin >> a >> b;
	for(i = 0; i < strlen(a); i++)
	   for(j = 0; j < strlen(b); j++)
	      ans = ans + (a[i] - '0') * (b[j] - '0');
	cout << ans << endl;
	return 0;	
}
