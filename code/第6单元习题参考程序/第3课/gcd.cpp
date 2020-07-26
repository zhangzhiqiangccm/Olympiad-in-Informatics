#include<iostream>
#include<cstdio>
using namespace std;

int gcd(int m,int n){
	int r;
	while (m % n != 0){
		r = m % n;
		m = n;
		n = r;		
	}
	return n;	
}

int main(){
	freopen("gcd.in","r",stdin);
	freopen("gcd.out","w",stdout);
	int m,n;
	cin >> m >> n;
	cout << gcd(m,n) << endl;
	return 0;
}
