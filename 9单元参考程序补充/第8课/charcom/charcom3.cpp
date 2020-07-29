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
    int t = 'A';
    while (true) {
        if (k == 1) {
            printf("%c", (char)(t));
            break;
        };
        if (k <= (1 << (--n))) { 
            printf("%c", (char)(t++));
            --k;
            continue;
        } else {
            ++t;
            k -= 1 << n;
            continue;
        };
    }

    cout << endl;
    return 0;
}
