#include <iostream>
using namespace std;
int main(){
	char ch;
	int x, y;
	cin >> x >> y >> ch;
	switch(ch){
		case '+': cout << x + y << endl; break;
		case '-': cout << x - y << endl; break;
		case '*': cout << x * y << endl; break;
		case '/': {
			if(!y) 
				cout << "Divided by zero" << endl;
			else 
				cout << x / y << endl;
			break;
		} 
		default:
			cout << "Invalid operator" << endl;
	}
	return 0;
}
