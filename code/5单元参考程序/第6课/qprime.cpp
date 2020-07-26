#include<iostream>
#include<cstdio>
using namespace std;
bool t[4000001];
int main(){
  freopen("qprime.in","r",stdin);
  freopen("qprime.out","w",stdout);
  int i,j,a,b,d,k,ans = 0;
  cin >> a >> b >> d;
  t[1] = 1;
  for(i = 2; i <= b; i++)
     if(t[i] == 0)
        for(j = 2*i; j <= b; j += i)
           t[j] = 1;
  for(i = a; i <= b; i++)
     if(t[i] == 0){
        k = i;
	    while(k > 0){
	   	   if(k % 10 == d){
		      ans++;
		      break;
     	    }
	    	else k = k / 10;
	    }
     }
  cout << ans << endl;
  return 0;
}