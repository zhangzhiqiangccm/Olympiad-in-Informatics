#include <stdio.h>
#include <string.h>
const int maxnode=2000000,hsize=500007;
struct{
  int v,next;
} node[maxnode];
int w1[30],w2[30],hash[hsize],totn,lim,c,n,r,v[50];

void insert(int v){
	int p=v%hsize;
	node[++totn].v=v; node[totn].next=hash[p]; hash[p]=totn;
}

int query(int v){
	int p=v%hsize,i;
	for(i=hash[p]; i; i=node[i].next)
		if(node[i].v==v) return 1;
	return 0;
}

void dfs1(int i){
	if(c>r) return;
	if(i==lim) insert(c); else
	{
		c+=v[i]; dfs1(i+1);
		c-=v[i]; dfs1(i+1);
	}
}

int flag;
void dfs2(int i){
	if(c>r) return;
	if(i==lim)
	{
		flag=query(r-c);
		return;
	}
	c+=v[i]; dfs2(i+1);
	if(flag) return;
	c-=v[i]; dfs2(i+1);
}

int main(){
	int i;
	freopen("bday.in","r",stdin);
	freopen("bday.out","w",stdout);
	while(scanf("%d%d",&n,&r)!=EOF)
	{
		memset(hash,0,sizeof(hash)); totn=flag=c=0;
		for(i=0; i<n; ++i) scanf("%d",v+i);
		lim=n/2; dfs1(0);
		lim=n; dfs2(n/2);
		if(flag) puts("YES"); else puts("NO");
	}
	return 0;
}
