#include<bits/stdc++.h>
using namespace std;
struct node{
	int num,chi,mat,eng,tot;
};
node a[311];
bool cmp(node x,node y){
	if (x.tot !=y.tot){
		return x.tot>y.tot;
	}else if (x.chi!=y.chi){
			return x.chi>y.chi;
		  } else return x.num<y.num;
}
int main(){
	int n;
	freopen("sort.in","r",stdin);
	freopen("sort.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i].chi>>a[i].mat>>a[i].eng;
		a[i].num=i;
		a[i].tot=a[i].chi+a[i].eng+a[i].mat;
	}
	sort(a+1,a+n+1,cmp);
	for (int i=1;i<=5;i++){
		cout<<a[i].num<<" "<<a[i].tot<<endl;
	}
    return 0;
}

