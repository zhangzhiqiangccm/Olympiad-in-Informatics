#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int n,x;
	cin >> n;
	int max = 0;
	for(int i = 1; i <= n; i++){
		scanf("%d", &x);
		if(x > max) max = x;
	}
	cout << max << endl;
	return 0;
}
