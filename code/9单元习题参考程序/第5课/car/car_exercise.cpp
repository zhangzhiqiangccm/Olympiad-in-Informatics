#include<bits/stdc++.h>
const double v1=50.0;
const double v2=5.0;
const double s=100.0;

int main()
{
	freopen("car.in","r",stdin);
	freopen("car.out","w",stdout);
	
    double n;
    scanf("%lf",&n);
    double L=s/(1+(v2/(v1+v2)+v2/(v1-v2))*(n-1)*0.9);
	double time=L/50+(100-L)/5;
	
    printf("%.2lf\n",time);
    
    fclose(stdin);
    fclose(stdout);
	return 0;
}
