#include<iostream>
#include<cmath>
using namespace std;
int main(){
  	double a,b,c,p,s;
	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	s = sqrt(p * (p-a) * (p-b) * (p-c));
	cout << s << endl;
  	return 0;
}