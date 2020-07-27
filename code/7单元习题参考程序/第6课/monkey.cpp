#include<bits/stdc++.h>
using namespace std;
int g[111][111];
int a[1011],b[1011];
int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};
int n,m;
void bfs(int x,int y){
	int front,rear,tx,ty,curx,cury;
	g[x][y]=0;
	front=0;rear=1;
	a[1]=x;b[1]=y;
	while (front<rear){
		curx=a[++front];
		cury=b[front];
		for (int i=0;i<4;i++){
			tx=curx+dx[i];
			ty=cury+dy[i];
			if (tx>0&&tx<=n&&ty>0&&ty<=m&&g[tx][ty]==1){
				a[++rear]=tx;
				b[rear]=ty;
				g[tx][ty]=0;
			} 
		} 
	}
	
}

int main(){
	freopen("monkey.in","r",stdin);
	freopen("monkey.out","w",stdout);
	int tot;
	char ch;
	cin >> n >> m;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			cin>>ch;
			if (ch=='0') g[i][j]=0;
				else g[i][j]=1;
		}
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			if (g[i][j]==1){
				tot++;
				bfs(i,j); 
			}
		}
	}	
	cout<<tot<<endl;
    return 0;
}

