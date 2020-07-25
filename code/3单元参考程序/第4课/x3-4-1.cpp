#include<iostream>
using namespace std;
int main(){
	int a, b, c;
	a = 1;
	b = 2;
	c = 3;
	if(a > b){
		if(a > c)
			cout << a << ' ';
		else
			cout << b << ' ';
	}
	cout << c << endl;
	return 0;
}
