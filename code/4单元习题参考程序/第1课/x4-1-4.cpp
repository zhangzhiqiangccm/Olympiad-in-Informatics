#include<iostream>
using namespace std;
int main(){
	double h, s = 0;
	cin >> h;
	int i = 1;
	while(i <= 10){
		if(i == 1) s += h;
		else s += 2*h;
		h /= 2;	
		i++;	
	}
	cout << s << endl << h << endl; 
	return 0;
}
