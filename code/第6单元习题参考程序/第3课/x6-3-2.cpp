#include <iostream>
using namespace std;

void AddFive(int *num, char ch){
	*num = *num + 5;
	ch = 'B';
	cout << *num << " " << ch << endl;
}

int main(){
	int num = 10;
	char ch = 'A';
	AddFive(&num,ch);
	cout << num << " " << ch << endl;
	return 0;
}
