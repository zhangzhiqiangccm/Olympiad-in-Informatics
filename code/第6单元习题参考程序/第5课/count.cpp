#include<iostream>
#include<cstdio>
using namespace std;
int ans;

void cou(int n){
	 int i;
	 ans++;
	 for(i = 1; i <= n/2; i++) cou(i);
	 return;
}

int main(){
	freopen("count.in","r",stdin);
	freopen("count.out","w",stdout);
	int n;
	cin >> n;
	cou(n);
	cout << ans << endl;
	return 0;
}