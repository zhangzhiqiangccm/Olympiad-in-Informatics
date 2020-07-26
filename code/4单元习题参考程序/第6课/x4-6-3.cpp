#include<iostream> 
using namespace std;
int main(){
	int m,n;
	cin >> m >> n;
	for(int i = m; i <= n; i++){
		int s = 0;
		for(int j = 1; j < i; j++)
			if(i % j == 0) s += j;
		if(s == i) cout << i << endl;
	}
	return 0;
}
