#include<bits/stdc++.h>
using namespace std;
int pre[100010];//pre[i]存储i的父节点
vector<int>v[100010];//图的邻接表存储方式

void dfs(int s){
  cout << s <<" ";
  for(int i = 0; i < v[s].size(); i++){
        if(pre[v[s][i]]) continue; //已访问过,相当于剪枝
        pre[v[s][i]] = s;          //记录
        dfs(v[s][i]);              //递归深搜
  }
}

int main(){
  freopen("tra.in","r",stdin);
  freopen("tra.out","w",stdout);
  int m,s,a,b;
  scanf("%d%d",&m,&s);//读入边数和起点
  memset(pre,0,sizeof(pre));
  pre[s] = -1;    //起点没有父节点
  for(int i = 0; i <= m-1; i++){
      scanf("%d%d",&a,&b); //读入每一条边
      v[a].push_back(b);   //a与b相连
      v[b].push_back(a);   //b与a也肯定相连
  }
  dfs(s);    //从起点开始深搜
  return 0;
}
