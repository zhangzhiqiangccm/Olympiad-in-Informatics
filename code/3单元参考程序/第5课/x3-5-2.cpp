#include<iostream>
using namespace std;
int main(){
	int x1, x2, x3, max;
	cin >> x1 >> x2 >> x3;
	max = x1;
	max = max > x2 ? max : x2;
	max = max > x3 ? max : x3;
	cout << max << endl;
	return 0;
}
