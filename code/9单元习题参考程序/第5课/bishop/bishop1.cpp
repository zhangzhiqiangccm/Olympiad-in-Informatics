#include<bits/stdc++.h>
using namespace std;
const int MAXN=20;
int n,m,ans,tmp,top;
int ax[MAXN*MAXN+1],ay[MAXN*MAXN+1];			//�����洢ÿ������ʿ��λ��
void solve(int p){
//p�ǽ�һ��n*m����������һ��ֱ�ߺ�ÿ����������Ӧ�������λ��
	if (p==m*n+1){
		ans=max(ans,tmp);
		return;
	}
	int y=(p-1)%m + 1;							 //һάת��ά
	int x=(p-1)/m + 1;
	bool flag=true;								//��ͻ���
	for(int i=1;i<=top;++i){					//��鵱ǰλ�����ѷ��õ��Ƿ��ͻ
		if (abs(ax[i]-x)==abs(ay[i]-y)) {
			flag=false;break;
		}
	}
	if (!flag) solve(p+1);						//�����ͻ��ֱ�ӽ�����һ�εݹ�
	else{										//����ͻ
		solve(p+1);								//һ�ַ�������񲻷Ŵ���ʿ��ֱ�ӽ�����һ�εݹ�
		tmp++;									//��һ�ַ��������Ŵ���ʿ��������+1
		top++;ax[top]=x;ay[top]=y;				//��¼�ֳ�
		solve(p+1);								//������һ�εݹ�
		top--;									//���ݣ���ԭ�ֳ�
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
