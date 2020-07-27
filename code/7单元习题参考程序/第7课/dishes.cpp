#include<bits/stdc++.h>
using namespace std;
stack <int> dirty, washed, finished;
int n;
int main(){
	freopen("dishes.in","r",stdin);
	freopen("dishes.out","w",stdin);
    scanf("%d", &n);
    for (int i = n; i >= 1; i--) dirty.push(i);
    while (!(dirty.size() == 0 && washed.size() == 0)){
          int x, y;
          scanf("%d%d", &x, &y);
          if (x == 1)
                while (y-- && !dirty.empty()){
                      washed.push(dirty.top());
                      dirty.pop();
                }
          else
              while (y-- && !washed.empty()){
                    finished.push(washed.top());
                    washed.pop();
              }
    }
    while (!finished.size() == 0){
          printf("%d\n", finished.top());
          finished.pop();
    }
    return 0;
}

