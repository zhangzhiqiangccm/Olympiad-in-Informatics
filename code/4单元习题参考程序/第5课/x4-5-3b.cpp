#include<iostream>
using namespace std;
int main(){
	int x, y, z;
	cin >> y >> x;
	while(x % y){
		z = x;
		x = y;
		y = z % y;
	}
	cout << y << endl;
	return 0;
}
