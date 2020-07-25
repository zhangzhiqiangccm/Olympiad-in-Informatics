#include<iostream>
using namespace std;
int main(){
	int x, y;
	cin >> x;
	y = (x == 0) ? 0 : ((x > 0) ? 1 : -1);
	cout << y << endl;
	return 0;
}
