#include<bits/stdc++.h>
using namespace std;
struct node{
	string name;
	int mon,day;
};
node a[311];
bool cmp(node x,node y){
	if (x.mon!=y.mon) return x.mon<y.mon;
		else if (x.day!=y.day) x.day<y.day;
				else if (x.name.size()!=y.name.size()) return x.name.size()<y.name.size();
						else return x.name<y.name; 
}
int main(){
	int n;
	freopen("birthday.in","r",stdin);
	freopen("birthday.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i].name>>a[i].mon>>a[i].day;
	}
	sort(a+1,a+n+1,cmp);
	int start=1,tot=1,flag=0;
	for (int i=2;i<=n;i++){
		if (a[i].mon==a[i-1].mon&&a[i].day==a[i-1].day) tot++;
			else {
					if (tot>1){
						flag=1;
						cout<<a[start].mon<<" "<<a[start].day<<" ";
						for (int j=start;j<i-1;j++) 
							cout<<a[j].name<<" ";
							cout<<a[i-1].name<<endl;
					}
					tot=1;
					start=i;				
			}
	}
	if (tot>1){
		flag=1;
		cout<<a[start].mon<<" "<<a[start].day<<" ";
		for (int j=start;j<n;j++) 
			cout<<a[j].name<<" ";
		cout<<a[n].name<<endl;
	}
	if (flag==0) cout<<"None"<<endl;

    return 0;
}

