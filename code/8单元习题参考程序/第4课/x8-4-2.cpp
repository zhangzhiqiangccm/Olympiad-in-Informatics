#include <iostream>
using namespace std;

void fun(char *a,char *b){
	a = b;
	(*a)++;
}

int main(){
	char c1, c2, *p1, *p2;	
	c1 = 'A';	
	c2 = 'a';	
	p1 = &c1;	
	p2 = &c2;	
	fun(p1,p2);	
	cout << c1 << c2 << endl;	
	return 0;
}
