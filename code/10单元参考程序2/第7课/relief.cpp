#include<bits/stdc++.h>
using namespace std;

double Min(int x,double y,int z){
	return (x<y)? (x<z?x:z) : (y<z?y:z); 
}

const int g[6]={0,300,600,300,500,600};
const int r[10]={23,30,6,13,20,27,3,10,17,24};
string s;
int a,b,c;
int p[10];
double q[10];

int main(){
	freopen("relief.in","r",stdin);
	freopen("relief.out","w",stdout);
	int i,j,k;
	double m;
	while(cin>>s){
		cin>>a>>b>>c;
		cout<<s;
		m=Min(g[a],(double)b/20,c);
		printf(" $%.2lf\n",m);
		++p[s[9]-'0'];
		q[s[9]-'0']+=m;
	}
	for(i=0;i<=9;++i)
		if(p[i]>0){
			printf("%d $%.2lf ",p[i],q[i]);
			if(i<2)
				 printf("July ");
			else if(i<6)
				 	  printf("August ");
				 else printf("September ");
			printf("%d\n",r[i]);
		}
	return 0;
}
