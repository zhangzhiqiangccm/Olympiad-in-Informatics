#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200 + 10;
int N, A, B;
int K[MAXN];

struct node
{
	int x, steps;  //x当前所在的楼层，steps已按键的次数 
	node(int _x, int _steps):x(_x),steps(_steps){}	
};
queue<node> q;
bool vis[MAXN];

bool bfs()
{
	q.push(node(A,0)); vis[A] = true;
	
	while(!q.empty())
	{
		node cur = q.front();
		
		for(int i = 0; i < 2; i++)
		{
			int nx;
			if(i == 0) nx = cur.x + K[cur.x]; //上 
			if(i == 1) nx = cur.x - K[cur.x]; //下
			
			if(nx >= 1 && nx <= N && !vis[nx])
			{
				q.push(node(nx,cur.steps+1));
				vis[nx] = true;	
				
				if(nx == B)
				{
					cout << cur.steps + 1 << endl;
					return true;
				}
			} 
		}
		
		q.pop();
	}
	
	return false;
}

int main()
{
	freopen("lift.in","r",stdin);
	freopen("lift.out","w",stdout);
	
	cin >> N >> A >> B;
	for(int i = 1; i <= N; i++) cin >> K[i];
	if(A == B) { cout << 0 << endl; return 0;}
	bool flag = bfs();
	if(!flag) cout << -1 << endl;
	
	return 0;
} 
