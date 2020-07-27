#include<bits/stdc++.h>
using namespace std;
int g[111][111];
int a[1011],b[1011];
int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};
int n,m,tot;
void dfs(int x,int y){
	int tx,ty;
	g[x][y]=0;
	tot++;
	for (int i=0;i<4;i++){
		tx=x+dx[i];
		ty=y+dy[i];
		if (tx>0&&tx<=n&&ty>0&&ty<=m&&g[tx][ty]==1){
			dfs(tx,ty);
		} 
	}
}

int main(){
	freopen("tile.in","r",stdin);
	freopen("tile.out","w",stdout);
	int x,y;
	char ch;
	cin >> m >> n;
	for (int i=1;i<=n;i++){
			for (int j=1;j<=m;j++){
				cin>> ch;
				if (ch=='.') {	g[i][j]=1;}
					else if (ch=='#')g[i][j]=0;
							else if (ch=='@'){x=i;y=j;}
		}
	}
	tot=0;
    dfs(x,y);
	cout<<tot<<endl;
    return 0;
}

