#include <bits/stdc++.h>
using namespace std;

const int dx[4]={-1,0,1,0},dy[4]={0,1,0,-1};
int m,n,board[105][105],ans[105][105];

void init()
{
	cin>>m>>n;
	memset(ans,1,sizeof(ans));
	memset(board,-1,sizeof(board));
	for (int i=1;i<=n;i++) 
    {   int x,y,c; 
        cin>>x>>y>>c; 
        board[x][y]=c;
    }
}

void dfs(int coin,int x,int y,int last_color) 
{
	//cout<<coin<<" "<<x<<" "<<y<<" "<<last_color<<endl;
	if (coin>=ans[x][y]) return;
	ans[x][y]=coin;
	for (int k=0;k<4;k++) 
	{
		int tx=x+dx[k],ty=y+dy[k];
		if ((tx<1)||(tx>m)||(ty<1)||(ty>m)) continue;
		if (board[x][y]==-1&&board[tx][ty]==-1) continue;
		int cost=1;
		if (board[tx][ty]==last_color) cost=0;
		if (board[tx][ty]==-1) cost=2;
		if (board[tx][ty]==-1) dfs(coin+cost,tx,ty,last_color);
		else dfs(coin+cost,tx,ty,board[tx][ty]);
    }
}

int main() {
	freopen("chess.in","r",stdin);
	freopen("chess.out","w",stdout);
    init();
	dfs(0,1,1,board[1][1]);
	if (ans[m][m]>=m*m) cout<<-1<<endl;
	else cout<<ans[m][m]<<endl;
	return 0;
}

