#include<cstdio>
using namespace std;
int main(){
	int n;
	int b[100];
	scanf("%d",&n);
    for (int i=0;i<=n;i++) b[i]=0;
    while (b[0]==0){
    	for (int i=1;i<=n;i++) printf("%d",b[i]);
    	printf("\n");
    	int j=n;
    	while (b[j]==1) j--;
    	b[j]++;
    	for (int i=j+1;i<=n;i++) b[i]=0;
    }
	return 0;
}
