#include <bits\stdc++.h>
using namespace std;
int const timecount = 2000;
      
void cross_bridge(int *times, int ntimes, int strategy[][2]){
   sort(times, times + ntimes);
   int i = 0;
   for (; i < ntimes / 2 - 1; ++i) {
     int time1 = times[1] + times[0] + times[ntimes-2*i-1] + times[1];
     int time2 = times[ntimes-2*i-1] + times[0] + times[ntimes-2*i-2] + times[0];
     if (time1 < time2) {
       strategy[4*i+1][0] = times[0];
       strategy[4*i+1][1] = times[1];
       strategy[4*i+2][0] = times[0];
       strategy[4*i+3][0] = times[ntimes-2*i-2];
       strategy[4*i+3][1] = times[ntimes-2*i-1];
       strategy[4*i+4][0] = times[1];
       strategy[0][0] += time1;
     } else {
       strategy[4*i+1][0] = times[0];
       strategy[4*i+1][1] = times[ntimes-2*i-1];
       strategy[4*i+2][0] = times[0];
       strategy[4*i+3][0] = times[0];
       strategy[4*i+3][1] = times[ntimes-2*i-2];
       strategy[4*i+4][0] = times[0];
       strategy[0][0] += time2;
     }
   }
   strategy[4*i+1][0] = times[0];
   strategy[4*i+1][1] = times[1];
   strategy[0][0] += times[1];
   if (ntimes % 2 == 1) {
     strategy[4*i+2][0] = times[0];
     strategy[4*i+3][0] = times[0];
     strategy[4*i+3][1] = times[2];
     strategy[0][0] += times[0] + times[2];
   }
 }
      
int main(int argc, char *argv[]){
   int ncases = 1;
   freopen("bridge.in","r",stdin);
   freopen("bridge.out","w",stdout);
   while (ncases-- > 0) {
     int ntimes;
     cin >> ntimes;
     int times[timecount];
     for (int i = 0; i < ntimes; ++i) cin >> times[i];
     if (ntimes < 2) {
       cout << times[0] << '\n';
     } else {
       int strategy[(timecount-1)*2][2] = {{0}};
       cross_bridge(times, ntimes, strategy);
       for (int i = 0; i < 1; ++i) {
         cout << strategy[i][0];
         if (i % 2 == 1) cout << ' ' << strategy[i][1];
         cout << '\n';
       }
     }
   }
   return 0;
 }
