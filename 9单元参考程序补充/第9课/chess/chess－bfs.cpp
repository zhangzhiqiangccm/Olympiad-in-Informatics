/*NOIP2017第三题chess 
设lasta[i][j]为此位置的上一步位置，a[i][j]为现在位置，a[i+dx[k]][j+dx[k]]为下一步的位置，
用huafeijingbi函数判断下一次四方向走，可行不可行以及花费金币量， 
如果此位置无色 且 下一个位置无色 或 越界，则不可以走， 
如果此位置有色 且 下一个位置无色，则花费 2 金币 ， 
如果此位置无色 且 上一个位置的颜色与下一个位置的颜色相同，则不花费金币（因为上一次向这里走时已经花费 2 金币），
 			      如果 不相同 则 只花费 1 金币，（理由同上），
如果此位置和下位置均有色 则 相同 花费 0 金币，不相同 花费 1 金币。
再用 s数组（初始定义为无限大）存储每个位置花费的最小金币值，通过宽搜进行迭代（注意lasta数组也要迭代），
如果下一个位置位置的 s 大于 此位置的 s+huafeijinbi（i，j，i+dx[k]，j+dy[k]），则进行迭代，
否则 不变。 
*/ 
#include<bits/stdc++.h>
using namespace std;
long long a[110][110],lasta[110][110],s[110][110],x[11000],y[11000],l;
int n,m,f,r;
const int dx[5]={0,1,0,-1,0},dy[5]={0,0,1,0,-1};
int huafeijinbi(int x1,int yl,int x2,int y2){
    if(a[x1][yl]==-1){
        if(a[x2][y2]==-1) return -1;
        else if(lasta[x1][yl]==a[x2][y2])return 0;
         	 else return 1;
    }
    else {
        if(a[x2][y2]==-1)return 2;
        else if(a[x1][yl]==a[x2][y2])return 0;
             else return 1;
    }
}
int main(){
    freopen("chess.in","r",stdin);
    freopen("chess.out","w",stdout);
    scanf("%d%d",&m,&n);
    memset(a,255,sizeof(a));
    for(int i=1;i<=n;i++){
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        a[x][y]=z;
    }
    for(int i=1;i<=m;i++)
        for(int j=1;j<=m;j++)
            s[i][j]=INT_MAX;
    f=0;
    r=1;
    s[1][1]=0;
    x[1]=1;
    y[1]=1;
    while(r>f){
        f++;
        int i=x[f],j=y[f];
        for(int k=1;k<=4;k++)
        	if(i+dx[k]<=m&&i+dx[k]>0&&j+dy[k]<=m&&j+dy[k]>0){
            	l=huafeijinbi(i,j,i+dx[k],j+dy[k]);
            	if(l!=-1&&s[i][j]+l<s[i+dx[k]][j+dy[k]]){
                	lasta[i+dx[k]][j+dy[k]]=a[i][j];
                	s[i+dx[k]][j+dy[k]]=s[i][j]+l;
                	r++;
                	x[r]=i+dx[k];
                	y[r]=j+dy[k];
           		}
        	}
    }
    if(s[m][m]!=INT_MAX)printf("%d\n",s[m][m]);
    else puts("-1");
    return 0;
}

