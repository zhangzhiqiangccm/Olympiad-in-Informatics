#include<iostream>
#include<cstdio>
using namespace std;
int t[110][110][3],v = 100000000;
int p[110][110];
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};
struct t3{
	int x,y,s,c;
}a[1000001];
int main(){
	freopen("chess.in","r",stdin);
	freopen("chess.out","w",stdout);
	int nx,ny,ns,n,m,f,r,ans=v;
	cin >> m >> n;
	for(int i = 1; i <= n; i++){
		cin >> nx >> ny >> ns;
		p[nx][ny] = ns + 1;
	}
	for(int i = 1; i <= m; i++)
		for(int j = 1; j <= m; j++)
			t[i][j][0] = t[i][j][1] = t[i][j][2] = v;
	f = 1,r = 1;
	a[1].x = 1;
	a[1].y = 1;
	t[1][1][p[1][1]] = 0;
	a[1].c = p[1][1];
	a[1].s = 0;
	while(f <= r){
		if(ans < a[f].s){
			f++;
			continue;
		}
		for(int i = 0; i < 4; i++){
			nx = a[f].x + dx[i];
			ny = a[f].y + dy[i];
			if(nx > 0 && nx <= m && ny > 0 && ny <= m){
				if (p[nx][ny] == 0){
					if (p[a[f].x][a[f].y] != 0){
						ns = a[f].s + 2;
						if (a[f].c != 1) ns++;
						if (ns < t[nx][ny][1]){
							if (nx == m && ny == m && ans > ns)	ans = ns;
							else{
								r++;
								a[r].c = 1;
								a[r].x = nx;
								a[r].y = ny;
								a[r].s = ns;
								t[nx][ny][1] = ns;
							}
						}
						ns = a[f].s + 2;
						if (a[f].c != 2) ns++;
						if (ns < t[nx][ny][2]) {
							if(nx == m && ny == m && ans > ns)	ans = ns;
							else{
								r++;
								a[r].c = 2;
								a[r].x = nx;
								a[r].y = ny;
								a[r].s = ns;
								t[nx][ny][2] = ns;
							}
						}
					}
				}else{
					ns = a[f].s;
					if(p[nx][ny] != a[f].c) ns++;
					if(ns < t[nx][ny][p[nx][ny]]){
						if(nx == m && ny == m && ans > ns)	ans = ns;
						else{
							r++;
							a[r].c = p[nx][ny];
							a[r].x = nx;
							a[r].y = ny;
							a[r].s = ns;
							t[nx][ny][p[nx][ny]] = ns;
						}
					}
				 }
			}
		}
		++f;
	}
	if(ans != v) cout << ans << endl;
	else cout << -1 << endl;
	return 0;
}