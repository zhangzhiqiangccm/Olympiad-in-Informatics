#include<algorithm>
#include<cstdio>
using namespace std;
const int MAXN = 10000;
struct data{
  int b,e,w;
}d[MAXN];

bool cmp(data x,data y){
  return x.w<y.w;
}

int main(){
  freopen("airport.in","r",stdin);
  freopen("airport.out","w",stdout);
  int T;
  scanf("%d",&T);
  for(int TC=1;TC<=T;++TC){
    int n;
    double x,s,r,t;
    scanf("%lf%lf%lf%lf%d",&x,&s,&r,&t,&n); 
    for(int i=0;i<n;++i){
      scanf("%d%d%d",&d[i].b,&d[i].e,&d[i].w);
      x-=d[i].e-d[i].b;
    }
    sort(d,d+n,cmp);
    double ans=x/r;
    if(ans<=t)
      t-=x/r;
    else{
      x-=t*r;
      ans=t+x/s;
      t=0;
    }
    for(int i=0;i<n;++i){
      x=d[i].e-d[i].b;
      double tmp=x/(r+d[i].w);
      if(tmp<=t){
        t-=x/(r+d[i].w);
        ans+=tmp;
      }
      else{
        x-=t*(r+d[i].w);
        ans+=t+x/(s+d[i].w);
        t=0;
      }
    }
    printf("Case #%d: %.9lf\n",TC,ans);
  }
  return 0;
}
