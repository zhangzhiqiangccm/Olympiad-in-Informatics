#include<cstdio>
using namespace std;
int main(){
    int a[10],*p1,*p2;
    p1 = a;
    p2 = &a[5];
    printf("%d\n",p2-p1);
    return 0;
}
