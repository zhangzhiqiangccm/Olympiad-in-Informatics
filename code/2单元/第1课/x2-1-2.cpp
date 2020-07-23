#include<iostream>
#include<iomanip>       //格式函数的头文件
using namespace std;
int main(){
    cout << 10.0 / 6.0 << endl;
    cout << fixed << setprecision(8) << 10.0 / 6.0 << endl;
    return 0;
}