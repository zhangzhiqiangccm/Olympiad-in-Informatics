#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("game.in","r",stdin);
	freopen("game.out","w",stdout);
	
	int total,flag;
	int m,n;
	scanf("%d",&total);
	for(int id=0;id<total;++id){
		flag=1;
		scanf("%d%d",&n,&m);
		if (n<m) swap(n,m);
		do{
			if (m==0){
				flag=-flag;
				if (flag==1) printf("Stan wins\n");
				else printf("Ollie wins\n");
				break;
			}else{
				if (n/m>=2){
					if (flag==1) printf("Stan wins\n");
					else printf("Ollie wins\n");
					break;
				}
			}
			flag=-flag;
			n-=m;
			swap(n,m);
		}while(1);
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
