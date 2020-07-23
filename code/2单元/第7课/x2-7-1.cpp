#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin >> a >> b;
    a *= b;
    b--;  // b-- 表示 b = b - 1
    (c = d = a )= b;
    d = (a++, b+10,c--);  // a++ 表示 a = a + 1
    cout << a << " " << b << " " << c << " " << d << endl;
    return 0;
}