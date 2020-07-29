#include<bits/stdc++.h>
using namespace std;
int main() {
    freopen("angel.in","r",stdin);
    freopen("angel.out","w",stdout);
    
    int n;
    cin>>n;
    char ch[1010];
    cin>>ch;
    int l=strlen(ch);
    int m[1001];
    for(int i=0;i<l;i++) m[i]=ch[i]-'0';
    m[l]=0; 
    int sh[1001];
    for(int i=0;i<l;i++) {
        sh[i]=m[i]/n;
        m[i+1]+=10*(m[i]%n);
    }
    if(m[l]!=0) cout<<m[l]/10;else cout<<n;
    return 0; 
} 
