#include<iostream>
#include<cstdio>
using namespace std;

int sum(int i){
	int s = 0;
	for(int j = 2; j <= i / 2; j++)
		if(i % j == 0) s += j;
	return s;
}

int main(){
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	int n,i,newi,ans = 0;
	cin >> n;
	for(i = 1; i <= n; i++){
		newi = sum(i);
		if(i <= n && newi <= n && i != newi && sum(newi) == i) cout << i << " " << newi <<endl;
	}
	return 0;
}

