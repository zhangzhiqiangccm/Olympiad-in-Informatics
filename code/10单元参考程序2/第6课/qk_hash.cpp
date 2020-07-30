#include <cstdio>
using namespace std;
int n,m,k,t,q,l;
bool s[1000][1000];
int an[1000];

int main()
{
	freopen("qk.in","r",stdin);
	freopen("qk.out","w",stdout);
	int i,j,x,y;
	scanf("%d%d",&n,&m);
	for (i=1;i<=n;++i)
	{
		scanf("%d",&y);
		for (j=1;j<=y;++j)
		{
			scanf("%d",&x);
			s[i][x]=1;
		}
	}
	
	scanf("%d",&k);
	for (i=1;i<=k;++i)
	{
		scanf("%d%d",&t,&q);
		if (t==0)
		{
			for (j=1;j<=q;++j)
			{
				scanf("%d",&x);
				for (l=1;l<=m;++l)
					if (s[x][l])
					an[l]=i;
			}
			for (j=1;j<=m;++j)
				if (an[j]!=i)
					printf("%d ",j);
			printf("\n");
		}
		if (t==1)
		{
			for (j=1;j<=q;++j)
			{
				scanf("%d",&x);
				for (l=1;l<=m;++l)
					if (!s[x][l])
					an[l]=i;
			}
			for (j=1;j<=m;++j)
				if (an[j]!=i)
					printf("%d ",j);
			printf("\n");
		}
	}
	return 0;
}
