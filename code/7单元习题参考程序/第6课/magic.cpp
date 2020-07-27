#include<bits/stdc++.h>
using namespace std;
int q[10010],b[10010],c[10010];
int main(){
	freopen("magic.in","r",stdin);
	freopen("magic.out","w",stdout);
	int n,f,r;
	cin>>n;
	for (int i=1;i<=n;i++){
		q[i-1]=i;
	}
	b[1]=1;
	f=1;r=n-1;
	for (int i=2;i<=n;i++){
		for (int j=1;j<=i;j++){
			r=(r+1)%10010;
			q[r]=q[f];
			f=(f+1)%10010;
		}
		b[i]=q[f];
		f=(f+1)%10010; 
	}

	for (int i=1;i<=n;i++){
		c[b[i]]=i;		
	}
	for (int i=1;i<n;i++){
		cout<<c[i]<<" ";
	}
	cout<<c[n]<<endl;
    return 0;
}

