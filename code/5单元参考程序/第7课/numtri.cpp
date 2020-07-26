#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int a[10][10],n,i,j,t;
int main(){
	freopen("numtri.in","r",stdin);
	freopen("numtri.out","w",stdout);
	cin >> n;
	for(i = 1; i <= n; i++)
		for(j = 1; j <= i; j++)
			a[i][j] = ++t;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= i; j++)
			cout << setw(5) << a[i][j];
		cout << endl;
	}
	return 0;
}