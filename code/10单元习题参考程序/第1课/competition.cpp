#include<bits/stdc++.h>
using namespace std;  
bitset<501000> H;//HΪһ�����������飬ÿ��Ԫ����һ��0����1 
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
