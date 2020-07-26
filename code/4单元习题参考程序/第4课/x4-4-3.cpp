#include<iostream> 
using namespace std;
int main(){
	int n, s = 0;
	cin >> n;
	for(int i = 1; i <= n; i++){
		int x = 1;
		for(int j = 1; j <= i; j++) x *= j;
		s += x;
	}
	cout << s << endl;
	return 0;
}
