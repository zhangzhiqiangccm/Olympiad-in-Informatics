#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
   freopen("isbn.in","r",stdin);
   freopen("isbn.out","w",stdout);
   char s[10];
   int i,k,sum = 0,ans = -1;
   cin >> s;
   for(i = 0;i < strlen(s);++i)
       if(s[i] >= '0' && s[i] <= '9') sum += (10 - i) * (s[i] - '0');
       else if(s[i] == 'X') sum += (10 - i) * 10;
            else k = i;
   for(i = 0;i < 10;i++)
      if((sum + (10 - k) * i) % 11 == 0) ans = i;
   if(k == 9&&(sum + (10 - 9) * 10) % 11 == 0) ans = 10;
   if(ans < 10) cout << ans << endl;
   else cout << "X" << endl;
   return 0;
}
