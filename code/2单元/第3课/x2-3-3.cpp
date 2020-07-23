#include<iostream>
using namespace std;
#define PI 3.14159  //const double PI = 3.14159;
int main(){
  double square = 0, volume = 0, radius = 0;
  cin >> radius;
  square = 3.14159 * radius * radius;
  volume = 4 * 3.14159 * radius * radius * radius / 3;
  cout << "square=" << square << " volume=" << volume << endl;
  return 0;
}
//#define（宏常量）与const的比较：
//(1)const常量有数据类型,而宏常量没有数据类型。
//编译器对前者进行类型安全检查,对后者只进行字符替换,没有类型安全检查,
//并且在字符替换可能会产生意料不到的错误(边际效应) 。      
//(2)有些集成化的调试工具可以对const常量进行调试,但是不能对宏常量进行调试。