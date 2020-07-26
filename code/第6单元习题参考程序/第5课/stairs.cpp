#include<iostream>
#include<cstdio>
using namespace std;

long long cou(int n){
	if (n == 1 || n == 2) return n;
	else return cou(n-1) + cou(n-2);
}

int main(){
	freopen("stairs.in","r",stdin);
	freopen("stairs.out","w",stdout);
	int n;
	cin >> n;
	cout << cou(n) << endl;
	return 0;
}