#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <limits>
#define hashnum 2000003
using namespace std;
long goods[41],n,m,cho[41],hash[hashnum],lf,ls;
bool ok;

int getin(long x)
{
   long i;
   i=x%hashnum;
   while(hash[i]!=-1)
   {
      if(hash[i]==x){return 1;}
      i++;
      if(i==hashnum){i=0;}
   }
   hash[i]=x;
   return 0;
}

bool findnum(long x)
{
   long i;
   i=x%hashnum;
   while(hash[i]!=x)
   {
      if(hash[i]==-1){return false;}
      i++;
      if(i==hashnum){i=0;}
   }
   return true;
}

int fsearch(long dep,long tot)
{
   long i;
   if(tot==m){ok=true;}
   if(tot>m){return 0;}
   if(ok){return 0;}
   getin(tot);
   for(i=cho[dep-1]+1;i<=n/2;i++)
   {
      cho[dep]=i;
      fsearch(dep+1,tot+goods[i]);
   }
}

int ssearch(long dep,long tot)
{
   long i;
   if(tot==m){ok=true;}
   if(tot>m){return 0;}
   if(findnum(m-tot)){ok=true;}
   if(ok){return 0;}
   for(i=cho[dep-1]+1;i<=n;i++)
   {
      cho[dep]=i;
      ssearch(dep+1,tot+goods[i]);
   }
}

int main(void)
{
   freopen("birthday.in","r",stdin);
   freopen("birthday.out","w",stdout);
   while(scanf("%d %d\n",&n,&m)!=-1)
   {
      long i;
      for(i=1;i<=n;i++){scanf("%d",&goods[i]);}
      scanf("\n");
      for(i=0;i<hashnum;i++){hash[i]=-1;}
      ok=false;
      cho[0]=0;
      fsearch(1,0);
      cho[0]=n/2;
      ssearch(1,0);
      if(ok){cout<<"YES"<<endl;}
      else{cout<<"NO"<<endl;}
   }
   return 0;
}
