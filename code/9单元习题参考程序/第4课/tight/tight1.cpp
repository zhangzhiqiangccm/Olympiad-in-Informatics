#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("tight.in","r",stdin);
	freopen("tight.out","w",stdout);
	
	int k,n;
	double a[12],b[12];
	
	while(~scanf("%d%d",&k,&n)){
		k++;
		memset(a,0,sizeof(a));
		for(int i=1;i<=k;++i) a[i]=1;
		memset(b,0,sizeof(b));
		
		for(int i=1;i<n;++i){
			for(int j=1;j<=k;++j){
				b[j]=(a[j-1]+a[j]+a[j+1])/k;
			}
			for(int j=0;j<=k+1;++j) a[j]=b[j];
		}
		
		for(int i=2;i<=k;++i){
			a[1]+=a[i];
		}
		printf("%.5lf\n",a[1]/k*100.0);
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
