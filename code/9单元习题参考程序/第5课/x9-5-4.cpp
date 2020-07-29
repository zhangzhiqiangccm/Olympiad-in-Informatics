#include <bits\stdc++.h>
using namespace std;

void tran(int n){
	int k = n % 8;
	if(n / 8 != 0) tran(n / 8);
	cout << k;
}

int main(){
	int n;
	cin >> n;
	tran(n);
	return 0;
}
