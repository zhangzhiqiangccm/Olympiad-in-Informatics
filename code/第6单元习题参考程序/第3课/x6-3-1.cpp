#include <iostream>
using namespace std;

void AddFive(int *num){
	*num = *num + 5;
	cout << *num << endl;
}

int main(){
	int num = 10;
	AddFive(&num);
	cout << num << endl;
	return 0;
}
