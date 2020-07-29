#include <cstdio>
#include <iostream>
#include <cstring>
#define inf 1000000000
using namespace std;
int min(int a,int b){return a<b?a:b;}
int main(){
	freopen("mul.in","r",stdin);
	freopen("mul.out","w",stdout);
	int n,c[100],f[100][100];
	cin >> n;
	for (int i = 0;i < n;i++) scanf("%d",&c[i]);
	memset(f,0,sizeof(f));
	for (int i = 2;i <= n-1;i++){
		for (int j = 0;j < n-i;j++){ // [j,j+i]
			f[j][j+i] = inf;
			for (int k = j+1;k <= j+i-1;k++){
				f[j][j+i] = min(f[j][j+i],f[j][k]+f[k][j+i]+c[j]*c[k]*c[j+i]);
			}
		}
	}
	printf("%d\n",f[0][n-1]);
	return 0;
}