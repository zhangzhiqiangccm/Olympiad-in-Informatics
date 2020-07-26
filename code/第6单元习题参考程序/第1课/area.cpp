#include<cstdio>
#include<cmath>
using namespace std;

double area(double a,double b,double c){
	double d = (a + b + c) / 2;
	return sqrt(d * (d - a) * (d - b) * (d - c));
}

int main(){
	freopen("area.in","r",stdin);
	freopen("area.out","w",stdout);
	double x1,y1,x2,y2,x3,y3,x4,y4,a,b,c;
	scanf("%lf%lf",&x1,&y1);
	scanf("%lf%lf",&x2,&y2);
	scanf("%lf%lf",&x3,&y3);
	a = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	b = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	c = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
	printf("%0.2lf\n",area(a,b,c));
	return 0;
}
