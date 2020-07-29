#include<bits/stdc++.h>
using namespace std;
void printout(int x,int n){
	char ch[5];
	int k=0;
	do{
		ch[k++]=x%n;
		x/=n;
	}while (x!=0);
	if (k==1) printf("   ");else printf("  ");
	for (int i=k-1;i>=0;i--){
		if (ch[i]<10) printf("%d",ch[i]);
	    else printf("%c",ch[i]+55); 
	}
}
int main(){
   freopen("table.in","r",stdin);
   freopen("table.out","w",stdout);
   
   int n;    
   scanf("%d",&n);
   printf("*");
   for (int i=0;i<n;i++) {
       if (i<10) printf("   %d",i);
	   else printf("   %c",i+55);	 
   }
   printf("\n");
   for (int i=0;i<n;i++) {
   	    if (i<10) printf("%d",i);
	    else printf("%c",i+55); 
   	    for (int j=0;j<=i;j++){
   	    	int x=i*j;
			printout(x,n);
		}
   	    printf("\n");
   }
   return 0;
}  
