#include<bits/stdc++.h>
using namespace std;

int main(){
   freopen("hanoi.in","r",stdin);
   freopen("hanoi.out","w",stdout);
   int n,len = 1,num[101];
   fill(num+1,num+100+1,0);
   //menset(num+1,num+100+1,0);
   num[1] = 1;
   len = 2;
   cin >> n;
   n++;
   while (n--){//*2操作
     for (int i = 1;i <= len;i++)
       num[i] *= 2;
     for (int i = 1;i <= len;i++)
       if (num[i] >= 10){//进位
         num[i+1] += num[i]/10;
         num[i] %= 10;
       }
     if(num[len] != 0) len++;
   }
   num[1] -= 2;//-2操作
   for (int i = 1;i < len;i++){
     if (num[i] < 0){//退位
       num[i+1] -= 10;
       num[i] += 10;
     }
   }
   if (num[len] < 0) len--;
   for (int i = len-1;i >= 1;i--)
     cout << num[i];//输出
   return 0;
} 
