#include<bits/stdc++.h>
using namespace std;
int a[1000100];

bool cmp(int a,int b){
	return abs(a)<abs(b);
}

int main(){
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		scanf("%d",&a[i]);
	}
	sort(a,a+n,cmp);
	int ans=INT_MAX/3;
	for(int i=0;i<n-1;++i){
		ans=min(ans,abs(a[i]+a[i+1]));
		//if (abs(a[i]+a[i+1])==0) cout<<a[i]<<endl;
	}
	printf("%d",ans);
	return 0;
}
