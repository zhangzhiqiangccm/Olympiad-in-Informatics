#include<iostream>
using namespace std;
int b = 0; 
int f(){ 
  static int c = 1;//cΪ��̬��������һ�ε���ʱ�������ڴ沢��ʼ��
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
