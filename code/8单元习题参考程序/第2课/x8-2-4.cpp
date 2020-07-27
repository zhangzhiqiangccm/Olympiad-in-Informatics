#include<cstdio>
using namespace std;
int main(){
    static int a[] = {6,2,8,4,3};
    int b = 1, *p;
    p = &a[1];
    for(int i = 0; i < 4; i++) b *= *(p+i);
    printf("%d\n",b);
    return 0;
}
