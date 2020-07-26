#include<iostream> 
#include<cstdio>
using namespace std;
int main(){
	int n,x,max,min;
	cin >> n;
	cin >> x;
	max = min = x;
	for(int i = 2; i <= n; i++){
		scanf("%d", &x);
		if(x > max) max = x;
		if(x < min) min = x;
	}
	cout << max - min << endl; 
	return 0;
}
