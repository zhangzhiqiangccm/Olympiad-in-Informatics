#include<cstdio>
using namespace std;
int main(){
    int *p,*p1,*p2,a = 3,b = 7;
    p1 = &a; p2 = &b;
    if(a < b){p = p1; p1 = p2; p2 = p;}
    printf("%d,%d,",*p1,*p2);
    printf("%d,%d",a,b);
    return 0;
}
