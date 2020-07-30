#include<bits/stdc++.h>
using namespace std;
stack<int> stv;
stack<double> stc;
int main(){
    freopen("simulator.in","r",stdin);
    freopen("simulator.out","w",stdout);
    char ch;
    int v0,v,n;
    double c0,c;
    scanf("%d %lf\n",&v0,&c0);
    scanf("%d\n",&n);
    stv.push(v0);stc.push(c0);
    for(int i = 1; i <= n; i++){
        scanf("%c",&ch);
        if(ch == 'P'){
            scanf("%d %lf",&v,&c);
            v0 = stv.top();
            c0 = stc.top();
            stv.push(v0 + v);
            stc.push((v0 * c0 + v * c) / stv.top());
            printf("%d %.5f\n",stv.top(),stc.top());
        }else{
            if(stv.size() > 1){stv.pop();stc.pop();}
            printf("%d %.5f\n",stv.top(),stc.top());            
         }
        scanf("\n");
    }
    return 0;
}