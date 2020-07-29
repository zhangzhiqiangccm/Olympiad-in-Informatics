#include <bits\stdc++.h>
using namespace std;
priority_queue< int > maxheap;
int main(){
  freopen("piloti.in","r",stdin);
  freopen("piloti.out","w",stdout);
  int n, rez = 0, kap, zam;
  for( cin >> n; n; --n ){
     cin >> kap >> zam;
     rez += kap;
     maxheap.push( kap-zam );
     if( n%2==0 ) { rez -= maxheap.top(); maxheap.pop(); }
  }
  cout << rez << endl;
  return 0;
}
