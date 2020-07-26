#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

bool p(int num){
	for(int i = 2; i <= sqrt(num); i++)
		if(num % i == 0) return false;
	return true;
}

int main(){
	freopen("guess.in","r",stdin);
	freopen("guess.out","w",stdout);
	int n,i,j;
	cin >> n;
	for(i = 2; i <= n / 2; i++){
		j = n - i;
		if(p(i) && p(j)){
			cout << n << " = " << i << " + " << j << endl;
			break;
		}
	}
	return 0;
}
