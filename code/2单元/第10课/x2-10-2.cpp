#include<cmath>
#include<cstdio>
using namespace std;
int a,b,c;
double p,s;
int main(){
    scanf("%d%d%d",&a,&b,&c);
    p = (a+b+c)/2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.2f",s);
    return 0;
}