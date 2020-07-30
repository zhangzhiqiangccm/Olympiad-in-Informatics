#include<bits/stdc++.h>
using namespace std;  
bitset<501000> H;//H为一个二进制数组，每个元素是一个0或者1 
int  n,s=0,x;
int  main(){
	freopen("competition.in","r",stdin);
	freopen("competition.out","w",stdout);
    cin>>n;
    H[0]=true;
	for(int i=1;i<=n;i++){
		cin>>x;
		s+=x;
		H=H | (H<<x);
	}
	int x=0;
	for(int i=1;i<=s;i++)
		if(H[i] && i <= s-i) x=i;
	cout<<x<<" "<<s-x<<endl;
    return 0;
}
