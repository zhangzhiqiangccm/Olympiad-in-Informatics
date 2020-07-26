#include <iostream>
using namespace std;

void AddFive(int &x, char ch){
	x = x + 5;
	ch = 'B';
	cout << x << " " << ch << endl;
}

int main(){
	int num = 10;
	char ch = 'A';
	AddFive(num,ch);
	cout << num << " " << ch << endl;
	return 0;
}
