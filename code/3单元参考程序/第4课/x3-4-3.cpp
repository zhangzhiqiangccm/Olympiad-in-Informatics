#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float x, t1, t2;
	cin >> x;
	t1 = 27 + 23 + x / 3;
	t2 = x / 1.2;
	float zero = 0.0001;
	if(fabs(t1 - t2) <= zero) 
		cout << "All" << endl;
	else
		if(t1 - t2 > zero)
			cout << "Walk" << endl;
		else
			cout << "Bike" << endl;
	return 0;
}
