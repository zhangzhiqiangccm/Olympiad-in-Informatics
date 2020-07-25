#include<iostream>
using namespace std;
int main(){
	int a, b, c, d;
	a = 2; b = 3; c = 0;
	d = (a < b || ( c = 4));
	cout << d << " " << c << endl;
	return 0;
}
