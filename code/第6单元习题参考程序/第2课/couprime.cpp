#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

bool check(int num){
	for(int i = 2;i <= sqrt(num);i++)
	   if (num % i == 0) return false;
	return true;
}

int main(){
	freopen("couprime.in","r",stdin);
	freopen("couprime.out","w",stdout);
	int n,i,ans = 0;
	cin >> n;
	for(i = 2;i <= n;i++) if (check(i)) ans++;
	cout << ans << endl;
	return 0;	
}
