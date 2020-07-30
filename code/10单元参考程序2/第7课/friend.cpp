#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("friend.in","r",stdin);
	freopen("friend.out","w",stdout);
    string a,b;
    cin >> a;
    for(int i = 0; i < a.size(); ++i)
        b += char(a[i]+a[(i+1) % a.size()]);
    cout << b << endl;
    return 0;
}