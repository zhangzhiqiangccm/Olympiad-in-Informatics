#include <cstdio>
#include <iostream>
using namespace std;
const int last = 4;
int q[3][1100010];
bool h[1100010];
int a[30], n, i, j, k, s, m, f, r;
int main()
{	freopen("tv.in","r",stdin);
	freopen("tv.out","w",stdout);
    cin >> n;
    s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> j;
        if (j == 1)
            s = s | (1 << i);
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        a[i] = ~0;
        for (int j = 1; j <= k; j++)
        {
            cin >> m;
            m--;
            a[i] = a[i] & ~(1 << m);
        }
    }
    memset(h, true, sizeof h);
    h[s] = false;
    q[1][1] = s;
    q[2][1] = 0;
    f = 1;
    r = 1;
    do
    {
        k = q[1][r];
        for (int i = 0; i < n; i++)
            if ((k & (1 << i)) == 0)
            {
                j = k & a[i + 1];
                j = j | (1 << i);
                if (j == last)
                {
                    cout << q[2][r] + 1 << endl;
                    return 0;
                }
                if (h[j])
                {
                    h[j] = false;
                    f++;
                    q[1][f] = j;
                    q[2][f] = q[2][r] + 1;
                }
            };
        r++;
    } while (r <= f);
}
