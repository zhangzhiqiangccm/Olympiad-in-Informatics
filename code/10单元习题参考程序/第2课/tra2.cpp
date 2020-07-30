#include<bits/stdc++.h>
using namespace std;
int m,s,i,a,b;
bool vis[100010];
vector<int> v[100010];
const int n = 100000;

void dfs(int x){
	printf("%d ",x);
	vis[x] = 1;
	for(vector<int>::iterator it = v[x].begin(); it != v[x].end(); ++it)
	  if (!vis[*it]) dfs(*it);
}

int main(){
	freopen("tra.in","r",stdin);
	freopen("tra.out","w",stdout);
	scanf("%d %d",&m,&s);
	for(i = 1; i <= m; ++i){
		scanf("%d %d",&a,&b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for(i = 1; i <= n; ++i) 
		vis[i] = 0;
	dfs(s);
	return 0;
}
