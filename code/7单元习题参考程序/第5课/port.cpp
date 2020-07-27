#include <bits/stdc++.h>
using namespace std;

const int MAXN = 300000 + 10;
struct Node
{
	int t; 
	int n;	
};
Node q[MAXN];
int front, rear;
int n;
int vis[MAXN], sum;

int main()
{
	freopen("port.in","r",stdin);
	freopen("port.out","w",stdout);
	
	front = rear = 0; sum = 0;
	cin >> n;
	
	for(int i = 1; i <= n; ++i)
	{
		int t, k;
		cin >> t >> k;
		for(int j = 1; j <= k; ++j)
		{
			int x;
			cin >> x;
			q[rear].t = t; 
			q[rear].n = x;
			rear++;
			vis[x]++;
			if(vis[x] == 1) sum++;
		}
		
		while(true)
		{
			int a = q[front].t;
			int b = q[front].n;
			
			if(t - a < 86400) break;
			
			vis[b]--;
			if(vis[b] == 0) sum--;
			
			front++;
		}
		
		cout << sum << endl;
	}
	
	return 0;	
}
