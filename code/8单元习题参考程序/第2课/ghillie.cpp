#include<bits/stdc++.h>
using namespace std;
int a[211],b[211],g[10][10];
bool cmp(int a,int b){
	return a>b;
}
int sum(int n,int k){
	int s=0;
	while (n!=0){
		s=s+g[n%10][k+1];
		n=n/10;
	} 
	return s;
}
void search(int x,int n){
	for (int i=0;i<n;i++){
		if (x==a[i]) a[i]=0;
	}
	return;
}
int main(){	
	freopen("ghillie.in","r",stdin);
	freopen("ghillie.out","w",stdout);
	int n,*p,*q,m,s;
	for (int i=0;i<=9;i++){
		g[i][1]=i;
	}
	for (int i=0;i<=9;i++){
		for (int j=2;j<=9;j++){
			g[i][j]=g[i][j-1]*i;
		}
		
	}
	cin>>n;
	p = a;
	m=0;
	while (cin>> * p){
		p++;
		m++;
	}
	for (int k=1;k<=n;k++){
		p=a;
		q=b;
		for (int i=1;i<=m;i++){
			*q=sum(*p,k);
			p++;
			q++;
		}
		q=b;
		for (int i=1;i<=m;i++){
			p=a;
			for (int j=1;j<=m;j++){
				if (*q==*p) *p=0;
				p++;
			}
			q++;
		}
		sort(a,a+m,cmp);		
		p=a;
		s=m;
		for (int i=1;i<=m;i++){
			if (*p==0){
				s=i-1;
				break;
			}
			p++;
		}
		m=s;		
	}
	p=&a[m-1];
	for (int i=1;i<m;i++){
		cout<<*p<<" ";
		p--;
	}
	cout<<*p<<endl;
    return 0;
}

