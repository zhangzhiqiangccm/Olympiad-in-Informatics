#include<iostream>
using namespace std;
int main(){
	int n,g,s,b,q,t;
	cin >> n;
	g = n % 10;
	s = n / 10 % 10;
	b = n / 100 % 10;
	q = n / 1000 % 10;
	t = g * 1000 + s * 100 + b * 10 + q;
	cout << n - t << endl;
	return 0;
}