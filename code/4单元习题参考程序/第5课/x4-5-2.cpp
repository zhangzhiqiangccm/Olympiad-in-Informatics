#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int k = 4, n = 0;
	while(n < k){
		n++;
		if(n % 3 != 0) continue;
		k--;
	}
	cout << k << "," << n << endl;
	return 0;
}
