#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  int a;
  cin >> a;
  cout << "dec:" << dec << a << endl; //��ʮ������ʽ�������
  cout << "hex:" << hex << a << endl; //��ʮ��������ʽ�������
  cout << "oct:" << setbase(8) << a << endl; //�԰˽�����ʽ�������
  return 0;
}