#include<bits/stdc++.h>
using namespace std;
string s,a[10000];
int n;

void init(string str) {
	int l=str.length();
	for (int i=0;i<l-1;i++) {
		if (str.substr(i,2)=="at") {
			string ss=str.substr(0,i)+"@"+str.substr(i+2,l-i-2);
			int ll=ss.length();
			bool flag=true;
			for (int j=0;j<ll-1;j++) 
			    if (ss.substr(j,2)==".@"||ss.substr(j,2)=="@.") flag=false;
			if (ss[0]=='.'||ss[0]=='@'||ss[ll-1]=='.'||ss[ll-1]=='@') flag=false;
			for (int j=0;j<n;j++) if (a[j]==ss) flag=false;
			if (flag) a[n++]=ss;
		}
	}
}
int main() {
	freopen("spam.in","r",stdin);
	freopen("spam.out","w",stdout);
	while (getline(cin,s)) {
		n=0;
		int l=s.length();
		init(s);
		for (int i=0;i<l-5;i++)
			if (s.substr(i,6)=="nospam") init(s.substr(0,i)+s.substr(i+6,l-i-5));
	    sort(a,a+n);
	    for (int i=0;i<n;i++) cout<<a[i]<<"\n";
	}
	return 0;
} 
