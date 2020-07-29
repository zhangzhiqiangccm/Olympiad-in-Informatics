#include<bits/stdc++.h>
using namespace std;
struct Info{
	int x,y,z;
}a[1010];
int t,n,h,r;
bool f[1010][1010],vi[1010];

double di(int x,int y){
	return sqrt((a[x].x-(double)(a[y].x))*(a[x].x-(double)(a[y].x))+(a[x].y-(double)(a[y].y))*(a[x].y-(double)(a[y].y))+(a[x].z-(double)(a[y].z))*(a[x].z-(double)(a[y].z)));
}

void dfs(int x){
	vi[x] = true;
	for(int i = 0; i <= n+1; i++)
		if(f[x][i] && !vi[i]) dfs(i);
}

int main(){
	freopen("cheese.in","r",stdin);
	freopen("cheese.out","w",stdout);
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d",&n,&h,&r);
		for(int i = 1; i <= n; i++)
			scanf("%d %d %d",&a[i].x,&a[i].y,&a[i].z);
		memset(f,false,sizeof(f));
		for(int i = 0; i <= n; i++){
			for(int j = i+1; j <= n+1; j++){
				if(i == 0){
					if(a[j].z <= r && j != n+1) f[i][j] = true,f[j][i] = true;
				}else{
					if(j == n+1){
						if(a[i].z+r >= h) f[i][j] = true,f[j][i] = true;
					}else{
						if(di(i,j) <= r*2) f[i][j] = true,f[j][i] = true;
					}
				}
			}
		}
		for(int i = 0; i <= n+1; i++) vi[i] = false;
		dfs(0);
		if(vi[n+1]) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}