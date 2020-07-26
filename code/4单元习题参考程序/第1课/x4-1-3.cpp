#include<cstdio>
using namespace std;
int main(){
	int n,i = 1;
	double x;
	scanf("%lf%d",&x,&n); 
	while(i <= n){
		x = x * (1 + 0.001);
		i++;
	}	
	printf("%.4lf\n", x); 
	return 0;
}
