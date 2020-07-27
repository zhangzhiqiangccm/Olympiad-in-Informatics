#include<cstdio>
using namespace std;
int main(){
    int a[] = {1,2,3,4,5,6},*p;
    p = a;
    *(p+3) += 2;
    printf("%d,%d\n",*p,*(p+3));
    return 0;
}
