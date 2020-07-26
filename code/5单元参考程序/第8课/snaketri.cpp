#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int a[35][35];
int main(){
	freopen("snaketri.in","r",stdin);
	freopen("snaketri.out","w",stdout);
	int n,i,j,k = 0;
	cin >> n;
	for(i = 2; i <= n + 1; i++)
		for(j = 1; j < i; j++) a[j][i - j] = ++k;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n + 1 - i; j++) cout << setw(5) << a[i][j];
		cout << endl;
	}
	return 0;
}
