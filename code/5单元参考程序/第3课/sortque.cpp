#include<iostream>
#include<cstdio>
using namespace std;
int a[2001];
int main(){
	freopen("sortque.in","r",stdin);
	freopen("sortque.out","w",stdout);
	int n,m,i,j,num,k;
	cin >> n >> m;
	for(i = 1; i <= n; i++) cin >> a[i];
	for(i = 1; i <= m; i++){
		cin >> num;
		if(num >= a[n]) a[++n] = num;
		else{
			 for(j = 1; j <= n; j++)
			    if(a[j] >= num) break;
			 for(k = n; k >= j; k--)
			 	a[k + 1] = a[k];
			 a[j] = num;
			 n++;
		}
	}
	for(i = 1; i < n; i++) cout << a[i] << " ";
	cout << a[n] << endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
