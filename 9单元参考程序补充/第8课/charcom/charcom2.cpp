#include <cstdio>
#include <iostream>

using namespace std;
typedef long long ll;

int n;
ll k;
string ans;

char last() {
    if (ans == "") return 'A' - 1;
    return ans[ans.length() - 1];
}

ll pow2(int x) {
    ll ans = 1;
    while (x--) ans *= 2ll;
    return ans;
}

int main() {
    freopen("charcom.in", "r", stdin);
    freopen("charcom.out", "w", stdout);
    cin >> n >> k;
    while (k) {
        if (k == 1 && ans != "") {
            k = 0;
        } else {
            ll tot = ans != "" ? 1 : 0;
            for (int i = last() + 1; i <= 'A' + n - 1; i++) {
                ll delta = pow2('A' + n - i - 1);
                if (tot + delta >= k) {
                    ans += i;
                    k -= tot;
                    break;
                }
                tot += delta;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
