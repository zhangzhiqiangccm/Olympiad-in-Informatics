#include<iostream>
using namespace std;

void callnum(){
	static int num = 0;
	num++;
	cout << "I have been called " << num << " times." << endl ;
}

int main(){
	for(int i = 1; i <= 3; i++) callnum();
	return 0;
}
