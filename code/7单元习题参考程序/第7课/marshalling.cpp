#include<bits/stdc++.h>
using namespace std;
stack <int> st;
int n, in = 1;
int main(){
	freopen("marshalling.in","r",stdin);
	freopen("marshalling.out","w",stdin);
    scanf("%d", &n);
    while (n--){
          int x;
          scanf("%d", &x);
          if (in > x) st.pop();
          else
              for (; in <= x; in++){
                  st.push(in);
                  putchar('A');
              }
          putchar('B');
    }
    putchar('\n');
    return 0;
}

