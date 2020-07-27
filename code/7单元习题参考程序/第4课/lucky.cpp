#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
	if (n==1) return 0;
	for (int i=2;i*i<=n;i++){
		if (n%i==0) return 0;
	}
	return 1;
}
int main(){
	int n,s,j,t;
	freopen("lucky.in","r",stdin);
	freopen("lucky.out","w",stdout); 
	cin>>n;
	for (int i=2;i<=n;i++){
		t = i;
		s = 0;
		j = 2;
		while (t!=1){
			if (t % j==0){
				s++;
				t/=j;
			} else j++;
		}
		if (prime(s)) cout<<i<<endl;
	
	} 
    return 0;
}

