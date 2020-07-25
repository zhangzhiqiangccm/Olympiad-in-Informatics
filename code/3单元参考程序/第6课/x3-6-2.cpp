#include<iostream>
using namespace std;
int main(){
	int x;
	cin >> x;
	switch(x){
		case 1: 
		case 3: 
		case 5: cout << "NO" << endl; break;
		default: cout << "YES" << endl; break;	
	}
	return 0;
}
