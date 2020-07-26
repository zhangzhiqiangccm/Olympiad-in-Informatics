#include<iostream>
using namespace std;
int main(){
	int k,x,x1,x2;
	x = x1 = x2 = 1;
	cin >> k;
	if(k > 2){
		int i = 3;
		while(i <= k){
			x = x1 + x2;
			x2 = x1;
			x1 = x;
			i++;
		}		
	} 
	cout << x << endl;
	return 0;
}
