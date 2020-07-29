#include<stdio.h>
#define maxn 100001

using namespace std;

int longg[maxn];
int father[maxn];
long i,k,n,len=1,r=1,tempf,templ,x;
int firstz;

int main(){
	freopen("min01.in","r",stdin);
	freopen("min01.out","w",stdout);
	scanf("%ld",&n);
	if (n==1){
		printf("1 1 1\n");
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	longg[0]=0;
	longg[1]=1;
	father[1]=0;

    while (longg[0]==0){
    	r=r*10%n;
        len++;
        for (i=0;i<n;i++)
        	if (((i==0)||(longg[i]>0)) && (longg[i]<len)){
            	k=i+r;
                if (k>=n) k=k-n;
                if (longg[k]==0){
					longg[k]=len;
					father[k]=i;
				}
            }
    }
    printf("%ld ",n);
    k=father[0];
	tempf=k;
	templ=len;
    father[0]=-1;
	longg[0]=0;
	r=0;
	firstz=1;
    while (k>=0){
    	r=r*10+1;
        if (r/n>0){
			printf("%ld",r/n);
			firstz=0;
		}
        if (((r/n)==0)&&(!firstz)) printf("0");
        r%=n;
        for (int i=len-1;i>=longg[k]+1;i--){
        	r*=10;
            if (r/n>0){
				printf("%ld",r/n);
				firstz=0;
			}
            if ((r/n==0)&&(!firstz)) printf("0");
            r%=n;
        }
        len=longg[k];
        k=father[k];
    }
    printf(" ");
    k=tempf;
	len=templ;
    father[0]=-1;
	longg[0]=0;
    while (k>=0){
    	printf("1");
        for (i=len-1;i>=longg[k]+1;i--) printf("0");
        len=longg[k];
        k=father[k];
    }
    printf("\n");
    fclose(stdin);
	fclose(stdout);
    return 0;
}
