#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("game.in","r",stdin);
	freopen("game.out","w",stdout);
	int total,m,n;
	int tmp,flag;
	scanf("%d",&total);
	for(int id=0;id<total;++id){
		scanf("%d%d",&m,&n);
		if(m<n){
			tmp=m;m=n;n=tmp;
		}
		flag=1;
		while(m/n==1&&m!=n){
			tmp=m%n;
			m=n;
			n=tmp;
			flag=-flag;
		}
		if (flag==1) printf("Stan wins\n");
		else printf("Ollie wins\n");
	}
	return 0;
}
