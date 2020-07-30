#include<bits/stdc++.h>
#define read(x) scanf("%d",&x);
using namespace std;
pair < float , float > r, q;

int main(){
	freopen("focus.in","r",stdin);
	freopen("focus.out","w",stdout);
    int n;
    read(n);
    while(n){
        for(int i = 1; i <= n; i++){
            q = make_pair( 0 , 0 );
            for(int j = 1; j <= 3; j++){
                scanf("%f%f",&r.first, &r.second);
                q.first += r.first;
                q.second += r.second;
            }
            printf("%.1f %.1f\n",q.first / 3,q.second / 3);
        }
        read( n );
    }
    return 0;
}