#include<bits/stdc++.h>
using namespace std;
int h[100000];
int a,n,ans,w;
int main(){
	freopen("stone.in","r",stdin);
	freopen("stone.out","w",stdout);
    scanf("%d%d",&n,&w);
    for (int un=1;un<=n;++un){
    	scanf("%d",&a);
        int min=99999,mi;
        for (int j=1;j<=w-a+1;++j){
            int max=h[j];
            for (int k=j+1;k<=j+a-1;++k)
                if (h[k]>max) max=h[k];
            if (max<min){
            	min=max;
                mi=j;
            }
        }
        for (int j=mi;j<=mi+a-1;++j) h[j]=min+a;
    }
    for (int i=1;i<=w;++i)
        if (h[i]>ans) ans=h[i];
    printf("%d\n",ans);
    fclose(stdin);
	fclose(stdout);
    return 0;
}  
