#include<bits/stdc++.h>
using namespace std;
#define N 100
map<int,bool>mp[N];
int num[N][10011], ss[N];

void judge(int m, int n){
    double fenm=ss[m]+ss[n], fenz=0;
    int i=0, j=0;
    while(i<ss[m]&&j<ss[n]){
        if(num[m][i]==num[n][j]){
            i++,j++,fenz+=1;
        }
        else
            if(num[m][i]>num[n][j]){
                j++;
            }
            else{
                i++;
            }
    }
    printf("%.2f%%\n",(fenz/(fenm-fenz))*100);
}

int main(){
	freopen("similarity.in","r",stdin);
	freopen("similarity.out","w",stdout);
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        mp[i].clear();
        int cnt=0;
        int m,x;
        cin>>m;
        for(int j=0; j<m; j++){
            cin>>x;
            if(!mp[i][x]){
                mp[i][x]=true;
                num[i][cnt++]=x;
            }
        }
        ss[i]=cnt;
        sort(num[i],num[i]+cnt);
    }
    int k;
    cin>>k;
    while(k--){
        int a,b;
        cin>>a>>b;
        judge(a,b);
    }
    return 0;
}
