#include<iostream>
using namespace std;
int main(){
    int a,k;
    float b;
    cin >> a;
    k = a * 10 / 0.45;
    b = a * 10 - 0.45 * k;
    cout << "buy=" << k << "  left=" << b << endl;
    return 0;
}