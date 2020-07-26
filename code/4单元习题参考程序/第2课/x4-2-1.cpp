#include<iostream>
using namespace std;
int main(){
	int s, a, n;
	s = 0; a = 1;
	cin >> n;
	do{
		s += 1; a -= 2;
	}while(a != n);
	cout << s << endl;
	return 0;
}
