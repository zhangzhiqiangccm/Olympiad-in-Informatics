#include<bits/stdc++.h>
using namespace std;
int main(){
	int *p,*q;
	freopen("ink.in","r",stdin);
	freopen("ink.out","w",stdout);
	p = new(int);
	q = new(int);
	cin >> *p >> *q;
	cout << *p+*p/(*q-1)<<endl;
    return 0;
}

