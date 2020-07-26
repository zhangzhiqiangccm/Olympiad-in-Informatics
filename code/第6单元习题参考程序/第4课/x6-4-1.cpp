#include <iostream>
using namespace std;
int x = 10;

void change(int a, int &b, int x){
	int temp;
	x++;
	temp = a;
	a = b;
	b = temp;
}

int main(){
	int a = 30, b = 50;
	cout << x << " " << a << " " << b << endl;
	change(a , b , x );
	cout << x << " " << a << " " << b << endl;
	return 0;
}
