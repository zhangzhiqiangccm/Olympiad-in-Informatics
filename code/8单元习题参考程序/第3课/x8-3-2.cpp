#include<cstdio>
using namespace std;
const int N = 10;
int a[N],sum = 0;
int main(){
	for(int *p = a; p-a < N; p++){
		scanf("%d",p);
		sum += *p;
	}
    printf("%d\n",sum);
	return 0;
}