#include<bits/stdc++.h>
using namespace std;
const int MAXN=20;
const int MAXM=20;
typedef struct{
	int x,y;
}node;
node st[MAXN+MAXM];
bool place(int k){
	for(int i=0;i<k;++i){
		if (st[k].y-st[k].x==st[i].y-st[i].x) 
			return false;
	}
	return true;
}
int main(){
	freopen("bishop.in","r",stdin);
	//freopen("bishop.out","w",stdout);
	
	int n,m;
	scanf("%d%d",&n,&m);
	int top=0,ans=0;
	st[top].x=1;st[top].y=-1;
	do{
		st[top].x--;
		st[top].y++;
		if (top>ans) ans=top;
		if (st[top].x<0||st[top].y>=m) top--;
		else{
			if (top>=n+m-1) top--;
			else{
				if (place(top)){
					top++;
					st[top].x=top+1;
					st[top].y=-1;
					while(st[top].x>n){
						st[top].x--;
						st[top].y++;
					}
				}
			}
		}
	}while(top>=0);
	
	printf("%d\n",ans);
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
