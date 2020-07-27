#include<bits/stdc++.h>
using namespace std;
int a[111];
int main(){
	freopen("reverse.in","r",stdin);
	freopen("reverse.out","w",stdout);
	int n,*p;
	cin >> n;
	p = a;
	for (int i=1;i<=n;i++){
		cin >> *p;
		p++; 
	} 

	for (int i=1;i<n;i++){
		p--;
		cout << *p <<" ";
	
	}
	p--;
	cout << *p <<endl; 
    return 0;
}

