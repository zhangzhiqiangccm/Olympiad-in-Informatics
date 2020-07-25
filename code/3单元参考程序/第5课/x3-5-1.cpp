#include<iostream>
using namespace std;
int main(){
	char ch;
	cin >> ch;
	ch = (ch >= 'a' && ch <= 'z') ? ch - 32 : ch;
	cout << ch << endl;
	return 0;
}
