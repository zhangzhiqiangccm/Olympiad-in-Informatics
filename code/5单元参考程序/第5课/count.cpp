#include<iostream>
#include<cstdio>
using namespace std;
int num[200002];
int main() {
	freopen("count.in","r",stdin);
	freopen("count.out","w",stdout);
	int n,i,j,tmp,s = 1;
	cin >> n;
	for(i = 1; i <= n; i++) cin >> num[i];
	for(i = 1; i < n; i++) {
		bool flag = true;
		for(j = 1; j <= n - i; j++)
			if(num[j] > num[j + 1]) {
				tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp;
				flag = false;
			}
		if(flag) break;
	}
	num[n + 1] = -1;
	for(i = 2; i <= n + 1; i++)
		if(num[i] == num[i - 1]) s++;
		else {
			cout << num[i - 1] << " " << s <<endl;
			s = 1;
		}
	return 0;
}
