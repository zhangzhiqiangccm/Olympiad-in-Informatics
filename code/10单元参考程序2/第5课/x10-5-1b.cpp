#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,string> m;
    m.insert(map<int,string>::value_type (1,"a"));
    m.insert(map<int,string>::value_type (1,"b"));
    cout << m[1] << '\n';
    return 0;
}