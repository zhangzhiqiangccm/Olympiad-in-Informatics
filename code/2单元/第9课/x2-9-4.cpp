#include<iostream>
using namespace std;
int main(){
	double r1,r2,r;
	cin >> r1 >> r2;
	r = 1/(1/r1 + 1/r2);
	cout << fixed << setprecision(2) << r << endl;
	return 0;
}