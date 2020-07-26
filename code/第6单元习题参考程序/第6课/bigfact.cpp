#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
bool p[20001];

int check(int n){
	int i;
	for(i = n; i >= 2; i--)
		if(p[i] && n % i == 0) return i;
}

int main(){
	freopen("bigfact.in","r",stdin);
	freopen("bigfact.out","w",stdout);
	int n,i,j,num,maxn,ans;
	cin >> n;
	memset(p,true,sizeof(p));
	p[0] = p[1] = false;
	for(i = 2; i <= 20000; i++)
		if(p[i]) for(j=2; j <= 20000/i; j++)
			p[i * j] = false;
	maxn = 0;
	ans = 0;
	for(i = 1; i <= n; i++){
		cin >> num;
		int temp = check(num);
		if(num > 1 && maxn < temp){
			maxn = temp;
			ans = num;
		}
	}
	cout << ans << endl;
	return 0;
}