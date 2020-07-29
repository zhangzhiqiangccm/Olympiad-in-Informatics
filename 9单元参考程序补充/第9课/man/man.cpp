#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

const int dx[4] = {-1,0,0,1};//上左右下
const int dy[4] = {0,-1,1,0};
bool trap[20][20];
bool hash[20][20][20][20][4];
int f,r,n,m,w[20][20],edx,edy;

struct point 
{
	int x1,y1,x2,y2,t,tot,nx,dir;
}q[500000];

void printdir(int i)
{
	switch (i)
	{
		case 0 : printf("up\n"); break;
		case 1 : printf("left\n"); break;
		case 2 : printf("right\n"); break;
		case 3 : printf("down\n"); break;
	}
}

int ok(int x,int y,int i)
{
	int new_x = x + dx[i];
	int new_y = y + dy[i];
	if ((w[x][y]>>i)&1) return 0;
	if ((w[new_x][new_y]>>(3-i))&1) return 0;
	return 1;
}

int calc(int x1,int y1,int &x2,int &y2)
{
	if (y1 < y2) //左
	{
		if (ok(x2,y2,1))
		{
			y2--;
			return 0;
		}
	} else if (y1 > y2) { //右
		if (ok(x2,y2,2))
		{
			y2++;
			return 0;
		}
	} 
	if (x1 < x2) //上
	{
		if (not ok(x2,y2,0)) return 1;
		x2--;
	} else if (x1 > x2){       //下
		if (not ok(x2,y2,3)) return 1;
		x2++;
	} else {
		return 1;
	}
	return 0;
}

void add(int x1,int y1,int x2,int y2,int t,int i)
{
	if (hash[x1][y1][x2][y2][t]) return;
	hash[x1][y1][x2][y2][t] = 1;
	q[++r].x1 = x1; q[r].y1 = y1;
	q[r].x2 = x2; q[r].y2 = y2;
	q[r].t = t;
	q[r].tot = q[f].tot+1;
	q[r].nx = f;
	q[r].dir = i;
}

void print(int no)
{
	if (no == 0) return;
	print(q[no].nx);
	printdir(q[no].dir);
}

int main()
{
	freopen("man.in","r",stdin);
	freopen("man.out","w",stdout);
	memset(trap,0,sizeof(trap));
	memset(hash,0,sizeof(hash));
	q[0].tot = q[0].t = f = r = q[0].nx = 0;
	scanf("%d%d",&n,&m);
	for (int i = 0;i < n;i++) for (int j = 0;j < m;j++) scanf("%d",&w[i][j]);
	for (int i = 0;i < n;i++) w[i][0] |= 2,w[i][m-1] |= 4;
	for (int i = 0;i < m;i++) w[0][i] |= 1,w[n-1][i] |= 8;
	for (int i = 0;i < n;i++)
		for (int j = 0;j < m;j++)
		{
			char c;
			cin >> c;
			switch (c)
			{
				case 'W' : trap[i][j] = 1;break;
				case 'S' : q[0].x1 = i;q[0].y1 = j;break;
				case 'M' : q[0].x2 = i;q[0].y2 = j;break;
				case 'E' : edx = i;edy = j;break;
			}
		}
	while (f <= r)
	{
		for (int i = 0;i < 4;i++) 
		{
			int tag;
			if (not ok(q[f].x1,q[f].y1,i)) continue;
			int new_x = q[f].x1+dx[i];
			int new_y = q[f].y1+dy[i];
			if (trap[new_x][new_y]) continue;
			if (new_x == edx&&new_y == edy) 
			{
				print(f);
				printdir(i);
				printf("total steps: %d\n",q[f].tot+1);
				return 0;//结束
			}
			int x = q[f].x2;
			int y = q[f].y2;
			if (q[f].t) {add(new_x,new_y,x,y,q[f].t-1,i); continue;}
			tag = calc(new_x,new_y,x,y);
			if (new_x == x&&new_y == y) continue;
			if (trap[x][y]&&(not tag)) {add(new_x,new_y,x,y,3,i);continue;}
			tag = calc(new_x,new_y,x,y);
			if (new_x == x&&new_y == y) continue;
			if (trap[x][y]&&(not tag)) {add(new_x,new_y,x,y,3,i);continue;}
			add(new_x,new_y,x,y,0,i);
		}
		f++;
	}
	printf("impossible\n");
	return 0;
}