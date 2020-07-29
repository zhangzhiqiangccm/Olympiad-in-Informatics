#include<bits/stdc++.h>
using namespace std;
struct node{
	int l,r;
	char c;
}a[1000000]; 

int main() {
	freopen("editor.in","r",stdin);
	freopen("editor.out","w",stdout);
    int p,top;
	char str[100001];
	gets(str);
	p=strlen(str);
	for (int i=1;i<=p;i++) a[i].c=str[i-1];
	a[-1].l=0;a[-1].r=1;
	a[1].l=-1;a[1].r=2;
	a[p].l=p-1;a[p].r=0;
	for (int i=2;i<=p-1;i++) a[i].l=i-1,a[i].r=i+1;	
	top=p+1;
	int n;
	scanf("%d\n",&n);
	for (int i=1;i<=n;i++) {
		char ch=getchar();
	    switch ((int)ch) {
	    	case 76:if (a[p].l!=0) p=a[p].l;break;
	    	case 68:if (a[p].r!=0) p=a[p].r;break;	
			case 66:if (a[p].l!=0) {                
						int tmp=a[p].l;
						p=a[p].r;
						a[tmp].r=p;
						a[p].l=tmp;
						p=tmp;
				    }
			        break;
			case 80:char w;                         
			        scanf("%*c%c",&w);
			        a[top].c=w;
	    	        a[top].l=p;
	    	        a[top].r=a[p].r;
	    	        a[a[p].r].l=top;
	    	        a[p].r=top;
	    	        p=top;
	    	        top++;
	    	        break;
	    	default:break;
		}
		scanf("%*c");
	}
    for (int i=-1;i<top;i++) 
        if (a[i].l==0) {p=i;break;}
    while (p!=0) {
    	if (a[p].l!=0) printf("%c",a[p].c);
    	p=a[p].r;
	}
	return 0;
}
