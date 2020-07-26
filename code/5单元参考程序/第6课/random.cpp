#include<iostream>
#include<cstdio>
using namespace std;
bool a[1001];
int main(){
  freopen("random.in","r",stdin);
  freopen("random.out","w",stdout);
  int n,i,j,ans = 0;;
  cin >> n;
  for(i = 1; i <= n; i++){
   	 cin >> j;
     if(a[j] == 0) ans++;
   	 a[j] = 1;
  }
  cout << ans << endl;
  for(i = 1; i <= 1000; i++)
     if(a[i] == 1) cout << i << " ";
  cout << endl;
 return 0;
}