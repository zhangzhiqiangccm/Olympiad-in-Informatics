#include<iostream>
using namespace std;
int a,b,c,ans = 100;
int main(){
    a = 1; b = 2; c = 5;
    a = a + b;
    b = a + b + c;
    ans = ans + a + b + c;
    cout << ans << endl;
    return 0;
}