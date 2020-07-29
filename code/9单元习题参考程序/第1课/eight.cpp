#include<bits/stdc++.h>
using namespace std;
int a[45],b[45],ans[45];

int main() {
    char s[20];
	cin>>s;
    int l=strlen(s);
    a[1]=1;
	int la=45,pre;
    for(int i=2;i<l;i++) {	
        pre=0;
        for(int j=1;j<=la;j++) {
            int t=a[j]+pre*10;	
            b[j]=t/8;
            pre=t%8;
        }
        for(int j=la;j>0;j--){
            if(b[j]>9) b[j-1]+=b[j]/10,b[j]%=10;
            a[j]=b[j],ans[j]+=b[j]*(s[i]-'0'); 
        }	
    }
    printf("%s [8] = 0.",s);
    while(!a[la])la--;
    for(int i=la;i>0;i--)
        if(ans[i]>9)ans[i-1]+=ans[i]/10,ans[i]%=10;	
    for(int i=2;i<=la;i++) printf("%d",ans[i]);
    printf(" [10]");	
    return 0;	
}
