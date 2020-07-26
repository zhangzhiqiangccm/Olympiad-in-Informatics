#include<iostream>
using namespace std;
int b = 0; 
static int c = 1;//c为静态变量，第一次调用时被分配内存并初始化
int f(){ 
  b = b + 1;
  c = c + 1;
  return (b+c);
}

int main(){
  for(int i = 1;i < 4; i++)
     cout << i << ".sum=" << f() << endl;
  cout << "b=" << b << endl; 
  cout << "c=" << c << endl; 
  return 0;
}
