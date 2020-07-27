#include<cstdio>
#include<string>
using namespace std;

void fun(char *pp,int n){
	char k,*p1,*p2;
	p1 = pp;
	p2 = pp+n-1;
	while(p1 < p2){
		k = *p1++;
		*p1 = *p2--;
		*p2 = k;
	}
}

int main(){
    static char s[] = "1234567";
    fun(s,strlen(s));
    puts(s);
    return 0;
}
