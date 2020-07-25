#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    freopen("pencil.in", "r", stdin);
    freopen("pencil.out", "w", stdout);
    int n, q, w, e, r, t, y, ans;
    scanf("%d%d%d%d%d%d%d",&n, &q, &r, &w, &t, &e, &y);
    if(n % q)
		q = (n / q) + 1;
    else 
		q = n / q;
    if(n % w)
		w = (n / w) + 1;
    else 
		w = n / w;
    if(n % e)
		e = (n / e) + 1;
    else 
		e = n / e;
    q *= r;
    w *= t;
    e *= y;
    ans = q;
	if(ans > w) ans = w;
	if(ans > e) ans = e;
    printf("%d\n", ans);
    return 0;
}