#include<bits/stdc++.h>
using namespace std;
int t;
void work(int i){
	if (!i) t++;
	else for(int j=1;j<=i;++j) work(i-j);
}
int main(){
	freopen("hui.in","r",stdin);
	freopen("hui.out","w",stdout);
	
	int n;scanf("%d",&n);
	t=0;
	for(int i=0;i<n;++i){
		if ((n-i)%2==0) work((n-i)/2);
	} 
	printf("%d\n",t);
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
