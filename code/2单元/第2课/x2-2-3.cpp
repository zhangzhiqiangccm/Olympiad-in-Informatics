#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double y0,y1,y2,y3,p;
	p = 0.0453;
	y0 = 1000;
	y1 = y0 * (1 + p);
	y2 = y1 * (1 + p);
	y3 = y2 * (1 + p);	
	cout << setprecision(2) << fixed << y3 << endl; 
    return 0;
}