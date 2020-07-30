#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("move.in","r",stdin);
	freopen("move.out","w",stdout);
    string s1,s2,s;
    cin >> s1 >> s2;
    if(s1.size() > s2.size()) swap(s1,s2);
    s = s2 + s2;
    if(s.find(s1) != string::npos) cout << "true" << endl;
    else cout << "false" << endl;
    return 0;
}