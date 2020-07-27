#include<cstdio>
using namespace std;

char cchar(char ch){
	if(ch >= 'A' && ch <='Z') ch = ch - 'A' + 'a';
	return ch;
}

int main(){
    char s[] = "ABC+abc=defDEF", *p = s;
    while(*p){
    	*p = cchar(*p);
    	p++;
    }
    printf("%s\n",s);
    return 0;
}
