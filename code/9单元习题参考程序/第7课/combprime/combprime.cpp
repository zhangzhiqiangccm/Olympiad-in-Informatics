#include <bits/stdc++.h>
using namespace std;
typedef vector<map<int, int> > dic_t;
typedef map<int, int>::iterator iterator_t;
typedef pair<int, int> pii;
typedef long long ll;
const int N = 200;

int n, r, x[N];
dic_t a, b;
ll ans;

void dfs(dic_t &d, int L, int R, int tot, int sum)
{
    if (L == R)
        d[tot][sum]++;
    else
    {
        if (tot < r)
            dfs(d, L + 1, R, tot + 1, sum + x[L]);
        dfs(d, L + 1, R, tot, sum);
    }
}

ll pow(ll a, ll t, ll p)
{
    if (t == 0)
        return 1;
    ll tmp = pow(a, t >> 1, p);
    tmp = tmp * tmp % p;
    if (t & 1)
        tmp = tmp * a % p;
    return tmp;
}

int isPrime(int x)
{
    if (x <= 1)
        return 0;
    for (int i = 0; i < 20; i++)
    {
        int y = rand() % (x - 1) + 1;
        if (pow(y, x - 1, x) != 1)
            return 0;
    }
    return 1;
}

int main()
{
	freopen("combprime.in", "r", stdin);
	freopen("combprime.out", "w", stdout);
    cin >> n >> r;
    for (int i = 0; i < n; i++)
        cin >> x[i];
    a.resize(r + 1);
    b.resize(r + 1);
    dfs(a, 0, n / 2, 0, 0);
    dfs(b, n / 2, n, 0, 0);
    for (int i = 0; i <= r; i++)
        for (iterator_t it = a[i].begin(); it != a[i].end(); it++) {
            for (iterator_t _it = b[r - i].begin(); _it != b[r - i].end(); _it++) {
                if (isPrime(it->first + _it->first)) {
                    ans += (ll)it->second * (ll)_it->second;
                }
			}
		}
    cout << ans << endl;
    return 0;
}
