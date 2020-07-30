#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,string> m;
    m.insert(pair<int,string> (1,"a"));
    m.insert(make_pair (1,"b"));
    cout << m[1] << '\n';
    return 0;
}