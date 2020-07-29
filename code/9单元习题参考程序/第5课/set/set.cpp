#include<bits/stdc++.h>
using namespace std;

long long F(int i,int j){  
    if(j==0||i<j) 			//如果没有盒子或者盒子个数大于球的个数  
        return 0;  
    else if(j==1||j==i)		//如果只有一个盒子或者球和盒子的个数相等  
        return 1;  
    else if(j>0&&i>j)  
        return F(i-1,j-1)+F(i-1,j)*j;  
  
}

int main(){
	freopen("set.in","r",stdin);
	freopen("set.out","w",stdout);	
	int n,k;
	scanf("%d%d",&n,&k);
    cout<<F(n,k)<<endl;  
	return 0;
}
