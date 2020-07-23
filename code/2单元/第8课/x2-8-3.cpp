#include<cstdio>
using namespace std;
int main(){
	int b = 13, a = 10;
	(a = (b *= b)) += 4;
	printf("%d %d\n",a,b);
	return 0;
}