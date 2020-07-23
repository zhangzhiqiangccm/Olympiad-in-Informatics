#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int a = 100;
    double b = 246.343;
    printf("a=%d\n", a);
    printf("2*a=%d\n", 2*a);
    printf("a=%2d\n", a);
    printf("%3f\n", b);
    printf("%20.2lf\n", b);
    printf("%-20.2lf\n", b);
    printf("%.2lf\n", b);
    return 0;
}