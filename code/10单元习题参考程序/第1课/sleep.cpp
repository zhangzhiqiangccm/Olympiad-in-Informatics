#include<bits/stdc++.h>
using namespace std;
#define maxn 100010
#define Size 30
int  A[maxn],B[maxn];
int  X[100],Y[100];
int  n,m;

void init(){
	char S[100];
	scanf("%d%d\n",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%s %d\n",S,&B[i]);
		switch(S[0]){
			case 'A':A[i]=1;break;
			case 'O':A[i]=2;break;
			case 'X':A[i]=3;break;			
		}
	}
	
	int u,v;
	for(int k=0;k<=Size;k++){
		u=1<<k;v=0;
		for(int i=1;i<=n;i++){
			if(A[i]==1){u=u&B[i];v=v&B[i];}
			if(A[i]==2){u=u|B[i];v=v|B[i];}
			if(A[i]==3){u=u^B[i];v=v^B[i];}
		}
		X[k]=u&(1<<k);Y[k]=v&(1<<k);
		//cout<<k<<" "<<X[k]<<" "<<Y[k]<<endl;
	}
}

void Work(){
	int Lefts=m,Ans=0;
	for(int k=Size;k>=0;k--)
		if(Y[k]){
			Ans+=1<<k;
		}
		else{
			if(X[k]&&Lefts>=(1<<k)){
				Lefts-=(1<<k);Ans+=1<<k;
			}
		}
	cout<<Ans<<endl;
}
int  main(){
	freopen("sleep.in","r",stdin);
	freopen("sleep.out","w",stdout);
	init();
	Work();
	return 0;
}