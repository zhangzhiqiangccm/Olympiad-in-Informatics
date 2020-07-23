#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,ans;
    cin >> a >> b >> c;
    d = a - b;
    a = d + c;
    ans = a * b;
    cout << "Ans = " << ans << endl;
    return 0;
}