#include<stdio.h>
int main(){
	freopen("car.in","r",stdin);
	freopen("car.out","w",stdout);	
    double s,a,b;
    double x;
    scanf("%lf%lf%lf",&s,&a,&b);
    x=(b+a)*s/(b+3*a);
    printf("%.2lf\n",x/b+(s-x)/a);
	return 0;
}
