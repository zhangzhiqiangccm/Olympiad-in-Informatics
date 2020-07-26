#include<iostream>
#include<cstdio>
using namespace std;

void ver(int n){
	if(n == 1) return;
	if(n % 2 == 0){
		cout << n << "/2=" << n/2 << endl;
		ver(n/2);
	}
	else{
	 	cout << n << "*3+1=" << n*3+1 << endl;
		ver(n*3+1);
	}
}

int main(){
	freopen("verify.in","r",stdin);
	freopen("verify.out","w",stdout);
	int n;
	cin >> n;
	ver(n);
	return 0;
}