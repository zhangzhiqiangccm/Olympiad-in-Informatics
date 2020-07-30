#include<bits/stdc++.h>
using namespace std;
int vs[11000];
double cs[11000];
int main(){
	freopen("simulator.in","r",stdin);
	freopen("simulator.out","w",stdout);
	int n,top=0;
	char x;
	cin>>vs[0]>>cs[0];
	cs[0]=cs[0]/100*vs[0];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		if(x=='Z') {if(top>0)top--;}
		else {
			int vi,ci;
			cin>>vi>>ci;
			top++;
			vs[top]=vs[top-1]+vi;
			cs[top]=cs[top-1]+ci*1.0/100*vi;
		}
		cout<<vs[top]<<" "<<fixed<<setprecision(5)<<cs[top]*100.0/vs[top]*1.0<<endl;
	}
	return 0;
}

