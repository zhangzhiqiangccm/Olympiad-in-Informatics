#include<iostream>
using namespace std;
int main(){
	double pi = 0;
	int i = 1;
	while(1 / (double)(2 * i - 1) >= 0.000001){
		if(i % 2) 
			pi += 1 / (double)(2 * i - 1);
		else
			pi -= 1 / (double)(2 * i - 1);
		i++;
	}
	cout << pi * 4 << endl;
	return 0;
}
