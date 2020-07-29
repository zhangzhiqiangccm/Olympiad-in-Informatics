#include<stdio.h>
using namespace std;

int min(int x,int y){
	if (x>y) return y;
	return x;
}

int main(){
	freopen("curling.in","r",stdin);
	freopen("curling.out","w",stdout);
	int r,sum0=0,sum1=0;
	int a[5][20];
	scanf("%d",&r);
	for (int g=1;g<=10;g++){
		
		scanf("%d",&a[0][1]);
		
		if (a[0][1] == -1) break; 
		
		int min0,min1=999;
		min0=a[0][1];
		
		for (int i=2;i<=8;i++){
			scanf("%d",&a[0][i]);
			min0 = min(min0,a[0][i]);
		}

		for (int i=1;i<=8;i++){
			scanf("%d",&a[1][i]);
			min1 = min(min1,a[1][i]);
		}

		if ((min0 == min1)||(min(min0,min1)>r)) {
			printf("0:0\n");
			continue;
		}
		
		if (min0<min1){
			int f=0;
			for (int i=1;i<=8;i++)
			 if ((a[0][i]<=r)&&(a[0][i]<min1)) f++;
			sum0 += f;
			printf("%d:0\n",f);
			continue;
		}
		
		if (min1<min0){
			int f=0;
			for (int i=1;i<=8;i++)
			 if ((a[1][i]<=r)&&(a[1][i]<min0)) f++;
			sum1 += f;
			printf("0:%d\n",f);
			continue;
		}
	}	
	printf("%ld:%ld\n",sum0,sum1);
	return 0;
} 
