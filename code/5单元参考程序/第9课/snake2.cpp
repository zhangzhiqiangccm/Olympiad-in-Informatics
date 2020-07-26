#include<iostream>
#include<cstdio>
#include<iomanip>
#include<cstring>
using namespace std;
int main(){
	freopen("snake2.in","r",stdin);
	freopen("snake2.out","w",stdout);
	int n,i,j,k,t = 0;
	int a[21][21] = {0};
	cin >> n;
	for(k = 1; k <= n; k++)
		if(k % 2 == 0) for(i = 1; i <= k; i++){
				j = n - k + i;
				t++;
				a[i][j] = t;
				a[n + 1 - i][n + 1 - j] = n * n + 1 - t;
			}
		else for(i = k; i >= 1; i--){
				j = n - k + i;
				t++;
				a[i][j] = t;
				a[n + 1 - i][n + 1 - j] = n * n + 1 - t;
			}
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++)
			cout << setw(5) << a[i][j];
		cout << endl;
	}
	return 0;
}
