#include<bits/stdc++.h>
using namespace std;

bool judge(int x,int k) {
    int top=0,s[100000];
    do{
    	s[top++]=x%k;
    	x/=k;
	}while (x!=0);
	for (int i=0;i<top/2;i++) 
	    if (s[i]!=s[top-i-1]) return false;
	return true;
} 
int main() {
   freopen("base.in","r",stdin);
   freopen("base.out","w",stdout);
   int m1,m2,n1,n2;
   scanf("%d%d%d%d",&m1,&m2,&n1,&n2);
   int ans=0;
   for (int i=m1;i<=m2;i++) {
   	    int x=i*i;
   	    int count=0;
   	    for (int k=n1;k<=n2;k++) {
   	    	if (judge(x,k)) count++;
   	    	if (count>1) break;
		}
		if (count==1) ans++;
   }
   printf("%d",ans);
   return 0;
}
