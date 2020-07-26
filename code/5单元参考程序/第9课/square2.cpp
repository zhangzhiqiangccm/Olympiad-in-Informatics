#include<iostream>
#include<cstdio>
#include<iomanip>
#include<cstring>
using namespace std;
int dx[4] = {0,-1,0,1};
int dy[4] = {1,0,-1,0};
int main(){
	freopen("square2.in","r",stdin);
	freopen("square2.out","w",stdout);
	int n,i,j,k,d,a[51][51];
	cin >> n;
	for(i = 0; i <= n+1; i++)
	   for(j = 0; j <= n+1; j++)
	      a[i][j] = -1;
	for(i = 1; i <= n; i++)
	   for(j = 1; j <= n; j++)
	      a[i][j] = 0;	
	i = n; j = 1; d = 0;
	for(k = 1; k <= n * n; k++){
		a[i][j] = k;
        if(a[i + dx[d]][j + dy[d]] != 0) d = (d + 1) % 4;   
	    i = i + dx[d];
	    j = j + dy[d];
	}
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++)
		   cout << setw(5) << a[i][j];
		cout << endl;
	}
	return 0;
}
