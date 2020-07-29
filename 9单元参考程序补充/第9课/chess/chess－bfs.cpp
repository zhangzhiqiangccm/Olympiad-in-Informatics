/*NOIP2017������chess 
��lasta[i][j]Ϊ��λ�õ���һ��λ�ã�a[i][j]Ϊ����λ�ã�a[i+dx[k]][j+dx[k]]Ϊ��һ����λ�ã�
��huafeijingbi�����ж���һ���ķ����ߣ����в������Լ����ѽ������ 
�����λ����ɫ �� ��һ��λ����ɫ �� Խ�磬�򲻿����ߣ� 
�����λ����ɫ �� ��һ��λ����ɫ���򻨷� 2 ��� �� 
�����λ����ɫ �� ��һ��λ�õ���ɫ����һ��λ�õ���ɫ��ͬ���򲻻��ѽ�ң���Ϊ��һ����������ʱ�Ѿ����� 2 ��ң���
 			      ��� ����ͬ �� ֻ���� 1 ��ң�������ͬ�ϣ���
�����λ�ú���λ�þ���ɫ �� ��ͬ ���� 0 ��ң�����ͬ ���� 1 ��ҡ�
���� s���飨��ʼ����Ϊ���޴󣩴洢ÿ��λ�û��ѵ���С���ֵ��ͨ�����ѽ��е�����ע��lasta����ҲҪ��������
�����һ��λ��λ�õ� s ���� ��λ�õ� s+huafeijinbi��i��j��i+dx[k]��j+dy[k]��������е�����
���� ���䡣 
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

