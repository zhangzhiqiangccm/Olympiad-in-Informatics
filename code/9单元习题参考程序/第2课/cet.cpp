#include <bits/stdc++.h>
using namespace std;
int ans[1000]={0};

void work(int n) {
	int t=0;
	for (int i=1;i<=ans[0];i++) {
		ans[i]=ans[i]*n+t;
		t=ans[i]/10;
		ans[i]=ans[i]%10;
	}
	while (t!=0) {
		ans[++ans[0]]=t%10;
		t=t/10;
	}
}

int main(){
	freopen("cet.in","r",stdin);
	freopen("cet.out","w",stdout);
	int n; 
	scanf("%d\n",&n);
	string s;
	getline(cin,s);
	int a[100];
	for (int i=0;i<n;i++) {
		string s1;
		getline(cin,s1);
		s1+=" ";
		for (int j=0;j<s[i]-'A';j++) {
			int k=s1.find(' ');
			s1.erase(0,k+1);
		}
		int k=s1.find(' ');
		s1=s1.substr(0,k-1);
		a[i]=atoi(s1.c_str());
	}
    ans[0]=ans[1]=1;
	for (int i=0;i<n;i++) work(a[i]);
	
	int p=n*2; int k=1;
	while (ans[k]==0&&k<=ans[0]) k++;
	if (k>ans[0]) cout<<0;
	else if (k==ans[0]&&ans[ans[0]]==1) cout<<1;
	     else {
	     	if (p>ans[0]) ans[0]=p;
	     	cout<<"0.";
	     	for (int i=ans[0];i>=k;i--) cout<<ans[i];
		 } 
	return 0;
}
