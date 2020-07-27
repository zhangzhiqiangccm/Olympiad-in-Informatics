#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    char b1[8] = "abcdefg", b2[8],*pb = b1+3;
	while(--pb >= b1) strcpy(b2,pb);
    printf("%d\n",strlen(b2));
    return 0;
}
