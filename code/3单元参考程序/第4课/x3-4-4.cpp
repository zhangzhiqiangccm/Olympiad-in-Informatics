#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int ans, x;
	char ch;
	scanf("%d %c", &x, &ch);
	if(ch == 'y') ans = 5;
	else ans = 0;
	ans += 8;
	if(x > 1000){
		ans += ((x - 1000) / 500) * 4;
		if(x % 500) ans += 4;
	}
	cout << ans << endl;
	return 0;
}
