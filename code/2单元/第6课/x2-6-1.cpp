#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    int n,a,b,c,d,e;
    float ave;
    cin >> a >> b >> c >> d >> e;
    ave = (a + b + c + d + e) / 5.0;
    cout << setprecision(1) << fixed << ave << endl;
    return 0;
}