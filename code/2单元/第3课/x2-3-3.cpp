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
//#define���곣������const�ıȽϣ�
//(1)const��������������,���곣��û���������͡�
//��������ǰ�߽������Ͱ�ȫ���,�Ժ���ֻ�����ַ��滻,û�����Ͱ�ȫ���,
//�������ַ��滻���ܻ�������ϲ����Ĵ���(�߼�ЧӦ) ��      
//(2)��Щ���ɻ��ĵ��Թ��߿��Զ�const�������е���,���ǲ��ܶԺ곣�����е��ԡ�