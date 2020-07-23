#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  int a;
  cin >> a;
  cout << "dec:" << dec << a << endl; //以十进制形式输出整数
  cout << "hex:" << hex << a << endl; //以十六进制形式输出整数
  cout << "oct:" << setbase(8) << a << endl; //以八进制形式输出整数
  return 0;
}