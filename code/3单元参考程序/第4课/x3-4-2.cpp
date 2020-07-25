#include<iostream>
using namespace std;
int main(){
	int x, y;
	cin >> x >> y;
	if(x < 60)
		if(y >= 60) cout << 1 << endl;
		else cout << 0 << endl;
	else
		if(y < 60) cout << 1 << endl;
		else cout << 0 << endl;
	return 0;
}
