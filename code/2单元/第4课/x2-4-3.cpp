#include<iostream>
#include<string>
using namespace std;
int main(){
    string st;
    cin >> st;
    st[0] = st[1] = st[2] = 'a';
    cout << st;
    return 0;
}