#include<iostream>
using namespace std;

void fun(int *a,int *b){
	int *k;
	k = a; 
	a = b;
	b = k;
	return;
}

int main(){
	int a = 3, b = 6, *x = &a, *y = &b;
	fun(x,y);
	cout << "No.1:" << a << "," << b << " ";
	fun(&a,&b);
	cout << "No.2:" << a << "," << b << endl;
	return 0;
}
