#include<iostream>
using namespace std;
int main(){
	int a, b, c = 0,d = 0;
	cin >> a >> b;
	if(a > b){
		c = a / b;
		d = a % b;
	}
    cout << c << " " << d << endl;
	return 0;	
}
