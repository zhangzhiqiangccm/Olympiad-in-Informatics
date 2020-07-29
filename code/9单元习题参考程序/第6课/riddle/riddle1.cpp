#include<bits/stdc++.h>
using namespace std;
int a[505],b[505];
bool hash[505];
int n,m;

void sort(){
	for(int i=1;i<n;++i){
		for(int j=i+1;j<=n;++j){
			if (b[i]<b[j]){
				int tmp=b[i];b[i]=b[j];b[j]=tmp;
				tmp=a[i];a[i]=a[j];a[j]=tmp;
			}
		}
	}
}

int main(){
	freopen("riddle.in","r",stdin);
	freopen("riddle.out","w",stdout);
	scanf("%d%d",&m,&n);
	int s=0;
	for(int i=1;i<=n;++i) scanf("%d",&a[i]);
	for(int i=1;i<=n;++i) scanf("%d",&b[i]);
	memset(hash,true,sizeof(hash));
	sort();
	for(int i=1;i<=n;++i){
		bool flag=true;
		for(int j=a[i];j>0;j--){
			if (hash[j]){
				flag=false;
				hash[j]=false;
				break;
			}
		}
		if (flag){
			for(int k=n;k>0;--k){
				if (hash[k]){
					hash[k]=false;
					break;
				}
			}
			s+=b[i];
		}
	}
	printf("%d\n",m-s);
	return 0;
}
