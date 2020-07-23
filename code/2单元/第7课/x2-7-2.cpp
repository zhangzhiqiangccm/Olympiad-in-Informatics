#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,w1,w2,w3,w4;
    cin >> a;
    w1 = a / 1000;
    w2 = (a - w1 * 1000) / 100;
    w3 = (a - w1 * 1000 - w2 * 100) / 10;
    w4 = a % 10;
    b = w4 * 1000 + w3 * 100 + w2 * 10 + w1;
    d = w1 + w2 + w3 + w4;
    w1 = a / 100;
    w2 = a % 100;
	c = w2 * 100 + w1;
    cout << b << " " << c << " " << d << endl;
    return 0;
}