#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int n,c[4][6],nc[4][6],ans;
const int t[24][6] = 
	{{0,1,2,3,4,5},
     {0,2,4,1,3,5},
     {0,4,3,2,1,5},
     {0,3,1,4,2,5},
     {2,0,1,4,5,3},
     {2,1,5,0,4,3},
     {2,4,0,5,1,3},
     {2,5,4,1,0,3},
     {1,0,3,2,5,4},
     {1,2,0,5,3,4},
     {1,3,5,0,2,4},
     {1,5,2,3,0,4},
     {3,0,4,1,5,2},
     {3,1,0,5,4,2},
     {3,4,5,0,1,2},
     {3,5,1,4,0,2},
     {4,0,2,3,5,1},
     {4,5,3,2,0,1},
     {4,3,0,5,2,1},
     {4,2,5,0,3,1},
     {5,1,3,2,4,0},
     {5,2,1,4,3,0},
     {5,3,4,1,2,0},
     {5,4,2,3,1,0}};
     
void dfs(int p){
	if(p == n){
		int tmp = 0,col[24];
		for (int i = 0; i < 6; i++){
			for(int j = 0; j < 24; j++) col[j] = 0;
			for(int j = 0; j < n; j++) col[nc[j][i]]++;
			int max_c = 0;
			for(int j = 1; j < 24; j++)
				if(col[j] > col[max_c])
					max_c = j;
			for(int j = 0; j < n; j++)
				if(nc[j][i] != max_c) tmp++;
		}
		if(tmp < ans) ans = tmp;
	}else{
		for(int i = 0; i < 24; i++){
			for(int j = 0; j < 6; j++){
				nc[p][j] = c[p][t[i][j]];
			}
			dfs(p+1);
		}
	}
}

int main(){
	freopen("cubes.in","r",stdin);
	freopen("cubes.out","w",stdout);
	while(1){
		ans = 100;
		scanf("%d",&n);
		if(!n) return 0;
		int tot = 0;
		char s[4][6][100],str[24][100];
		for(int i = 0; i < n; i++)
			for(int j = 0; j < 6; j++){
				scanf("%s",&s[i][j]);
				strcpy(str[tot++],s[i][j]);
			}
		for(int i = 0; i < n; i++)
			for(int j = 0; j < 6; j++){
				int k;
				for(k = 0; k < tot; k++)
				   if(strcmp(str[k],s[i][j]) == 0) break;
				c[i][j] = k;
			}
		for(int i = 0; i < 6; i++) nc[0][i] = c[0][i];
		dfs(1);
		printf("%d\n",ans);
	}
	return 0;
}
