#include<iostream>
using namespace std;
int main(){
	int x, y, i;
	cin >> x >> y;
	for(i = x; i >= 1; i--)
		if(x % i == 0 && y % i == 0) break;
	cout << i << endl;
	return 0;
}
