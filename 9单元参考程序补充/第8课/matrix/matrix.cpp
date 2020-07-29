#include <bits/stdc++.h>
using namespace std;
int i=2,j=3,n=3;
void luo(int n1){
    int a=0,k,l;
    for (l=1;l<n1;l++)
    {
    a=a+n*4-l*8+4;
    }
    if (i>=j) printf ("%d",a+i+j-2*n1+1);
        else printf ("%d",a+(n-2*n1+1)*4-i-j+n1+n1+1);
}

int main(){
	freopen("matrix.in", "r", stdin);
    freopen("matrix.out", "w", stdout);
    int i1,j1;
    scanf ("%d %d %d",&n,&j,&i);
    i1=i;
    j1=j;
    if (i1>n/2) i1=n-i1+1;
    if (j1>n/2) j1=n-j1+1;
    if(i1>j1) luo(j1);
        else luo(i1);
    return 0;
}
