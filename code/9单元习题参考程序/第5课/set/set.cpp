#include<bits/stdc++.h>
using namespace std;

long long F(int i,int j){  
    if(j==0||i<j) 			//���û�к��ӻ��ߺ��Ӹ���������ĸ���  
        return 0;  
    else if(j==1||j==i)		//���ֻ��һ�����ӻ�����ͺ��ӵĸ������  
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
