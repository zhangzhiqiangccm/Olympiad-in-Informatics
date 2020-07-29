#include <bits/stdc++.h>
#define fst first
#define sec second
#define mp make_pair
using namespace std;
typedef long long LL;
typedef long double LD;

LL getin(){
	char ch;
	while (!isdigit(ch = getchar()) && ch != '-');
	LL x = ch == '-' ? 0 : ch - '0';
	LL opt = ch == '-' ? -1 : 1;
	while (isdigit(ch = getchar())) x = x * 10 + ch - '0';
	return x * opt;
}

int main(){
	freopen("minimum.in", "r", stdin);
	freopen("minimum.out", "w", stdout);	
	LL a = getin();
	LL b = getin();
	LL k = getin();
	LL ans = 0;
	while (k > 1 && a <= b / k){
		ans += b % k + 1;
		b /= k;
	}
	ans += b - a;
	cout << ans << endl;
	return 0;	
}
