#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;
typedef long long ll;

int n;
ll k;
string ans;
ll num;

void dfs(int step) {
    num++;
    if (num == k) {
        return;
    }
    for (int i = step; i < n; i++) {
        dfs(i+1);
        if (num == k) {
            ans = (char)(i + 'A')+ ans;
            return;
        }
    }
}

int main() {
    freopen("charcom.in", "r", stdin);
    freopen("charcom.out", "w", stdout);
    cin >> n >> k;
    num = -1;
    ans = "";
    dfs(0);
    cout << ans << endl;
    return 0;
}
