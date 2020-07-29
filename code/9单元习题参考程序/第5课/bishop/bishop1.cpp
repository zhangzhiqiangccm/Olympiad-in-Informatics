#include<bits/stdc++.h>
using namespace std;
const int MAXN=20;
int n,m,ans,tmp,top;
int ax[MAXN*MAXN+1],ay[MAXN*MAXN+1];			//用来存储每个传教士的位置
void solve(int p){
//p是将一个n*m的数组拉成一条直线后每个格子所对应的数组的位置
	if (p==m*n+1){
		ans=max(ans,tmp);
		return;
	}
	int y=(p-1)%m + 1;							 //一维转二维
	int x=(p-1)/m + 1;
	bool flag=true;								//冲突标记
	for(int i=1;i<=top;++i){					//检查当前位置与已放置的是否冲突
		if (abs(ax[i]-x)==abs(ay[i]-y)) {
			flag=false;break;
		}
	}
	if (!flag) solve(p+1);						//如果冲突，直接进入下一次递归
	else{										//不冲突
		solve(p+1);								//一种方法是这格不放传教士，直接进入下一次递归
		tmp++;									//另一种方法是这格放传教士，则数量+1
		top++;ax[top]=x;ay[top]=y;				//记录现场
		solve(p+1);								//进入下一次递归
		top--;									//回溯，还原现场
		tmp--;
	}
}
int main(){
	freopen("bishop.in","r",stdin);
	freopen("bishop.out","w",stdout);
	
	scanf("%d%d",&n,&m);
	ans=0;tmp=0;top=0;
	solve(1);
	printf("%d\n",ans);
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
