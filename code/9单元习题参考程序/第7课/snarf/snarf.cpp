#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;
typedef long long ll;
ll a, n, k;

ll isSquare(ll x) {
    ll rt = round(pow(x, 0.5));
    if (rt * rt == x) return rt;
    return -1;
}

int main() {
	freopen("snarf.in","r",stdin);
	freopen("snarf.out","w",stdout);
    cin >> a;
    k = a;
    while (1) {
        ll s = (k * (k - 1ll)) / 2ll;
        ll tmp = isSquare(4 * k * k + 4 * k + 8 * s + 1);
        if (tmp == -1) {
            k++;
            continue;
        }
        if ((tmp - 1) % 2 == 1) {
            k++;
            continue;
        }
        ll n = (tmp - 1) / 2;
        printf("%lld %lld\n", k, n);
        return 0;
    }
    return 0;
}
