#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int main(){
	int n,i,j,k,a[21][21];	
	cin >> n;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			if(i >= j) k =j; else k = i;
			cout << setw(5) << k;
	    }
	    cout << endl;
	}
	return 0;
}
