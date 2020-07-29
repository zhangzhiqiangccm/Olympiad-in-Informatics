#include<bits/stdc++.h>
int main(){
	freopen("car.in","r",stdin);
	freopen("car.out","w",stdout);	
    double s,a,b,c;
    double t1,t2,t3,t4;
    scanf("%lf%lf%lf",&s,&a,&b);
    double c0=0,c1=s;
    do{
    	c=(c0+c1)/2.0;
    	t3=c/b;
    	t1=t3+(s-c)/a;
    	t4=(c-t3*a)/(a+b);
    	t2=t3+t4+(s-(t3+t4)*a)/b;
    	if (t1<t2) c1=c;
    	else c0=c;
	}while(fabs(t1-t2)>=1e-4);	
    printf("%.2lf\n",t1);
	return 0;
}
