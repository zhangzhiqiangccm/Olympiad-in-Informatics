#include<bits/stdc++.h>
using namespace std;
struct Node{
    string flower,point;
}st[1000],temp[1000];
int times,i,n,j,k,icount,data;
int change[200][53];
string flower[4]={"Clubs","Diamonds","Hearts","Spades"};
string point[13]={"2","3","4","5","6","7","8","9","10","Jack","Queen","King","Ace"};

int main(){
    freopen("stack.in","r",stdin);
	freopen("stack.out","w",stdout);
    scanf("%d",&n);
    memset(change,0,sizeof(change));
    for(i=1;i<=n;i++)
        for(j=1;j<=52;j++) scanf("%d",&change[i][j]);
    icount = 0;
    for(j=0;j<4;j++)
        for (k=0;k<13;k++){
            icount++;
            st[icount] . flower = flower[j];
            st[icount] . point  = point[k];
        }
    while(scanf("%d",&data)!=EOF){
        for(i=1;i<=52;i++) temp[i]=st[change[data][i]];
        for(i=1;i<=52;i++) st[i] = temp[i];
    }
    for(i=1;i<=52;i++) cout << st[i].point << " of "<<st[i].flower << endl;
    return 0;
}
