#include<cstdio>
using namespace std;
int main(){
    static char s1[] = "programe",s2[] = "language";
    char *p1,*p2;
    p1 = s1; p2 = s2;
    for(int i = 0; i < 8; i++)
      if(*(p1+i) == *(p2+i)) printf("%c",*(p1+i));
    return 0;
}
