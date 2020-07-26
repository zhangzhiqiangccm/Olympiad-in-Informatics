#include<iostream>
#include<cstdio>
using namespace std;
int a[10001];
int main() {
	freopen("middle.in","r",stdin);
	freopen("middle.out","w",stdout);
	int i,j,n;
	cin >> n;
	for(i = 1; i <= n; i++) cin >> a[i];
	for(int i = 2; i <= n; i++) {
		int tmp = a[i];
		int k = 1;
		while(a[k] <= tmp && k < i) k++;
		for(int j = i-1; j >= k; j--) a[j + 1] = a[j];
		a[k] = tmp;
	}
	cout << a[n / 2 + 1] << endl;
	return 0;
}
