#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("roma.in","r",stdin);
    freopen("roma.out","w",stdout);
	int x;
	cin>>x;
	string s[5];
	string l[8]={"","i","v","x","l","c","d","m"};
	for (int n=1;n<=4;n++) {
		int i=x%10;
		x/=10;
		int j=2*n-1;
		switch (i) {
			case 0:s[n]="";break;
			case 1:s[n]=l[j];break;
			case 2:s[n]=l[j]+l[j];break;
			case 3:s[n]=l[j]+l[j]+l[j];break;
			case 4:if (j<7) s[n]=l[j]+l[j+1];else s[n]="mmmm";break;
			case 5:s[n]=l[j+1];break;
			case 6:s[n]=l[j+1]+l[j];break;
			case 7:s[n]=l[j+1]+l[j]+l[j];break;
			case 8:s[n]=l[j+1]+l[j]+l[j]+l[j];break;
			default:s[n]=l[j]+l[j+2];break;
		}
	}
	string ans=s[4]+s[3]+s[2]+s[1];
	cout<<ans;
	return 0;
} 
