#include<iostream>
using namespace std;
int main(){
	int n, x = 0;
	cin >> n;
	int i = n;
	while(i){
		x = x * 10 + i % 10;
		i /= 10;		
	}
	cout << x << endl; 
	return 0;
}
