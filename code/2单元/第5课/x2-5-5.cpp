#include<iostream>
using namespace std;
int main(){
	int n,h,s,m;
	cin >> n;
	s = n % 60;
	m = n / 60 % 60;
	h = n / 3600 % 24;
	cout << h << " " << m << " " << s << endl;
	return 0;
}