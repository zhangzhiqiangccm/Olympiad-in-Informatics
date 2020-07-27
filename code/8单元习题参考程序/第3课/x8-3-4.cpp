#include<cstdio>
using namespace std;
int main(){
	int i;
    char a[] = "you are a boy", b[20];
    for(i = 0; *(a+i) != '\0'; i++) *(b+i) = *(a+i);
    *(b+i) = '\0';
    for(int i = 0; b[i] != '\0'; i++) printf("%c",b[i]);
    return 0;
}
