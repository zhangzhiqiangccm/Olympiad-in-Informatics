#include<iostream>
using namespace std;
int main(){
	int a,b,i,tot,c1,c2;
	cin >> a >> b;
	tot = 0;
	for(i = a; i <= b; i++){
		c1 = i / 10;
		c2 = i % 10;
		if((c1 + c2) % 3 == 0) tot++;
	}
	cout << tot << endl;
	return 0;
}
