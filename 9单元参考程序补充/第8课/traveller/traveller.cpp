#include <bits/stdc++.h>
using namespace std;
const int MAX = 1010;

int i, n;
double c, d2, p[MAX], d[MAX], consume[MAX];

int minp(int b, int e)
{
    int i, k;
    double tempminp;
    tempminp = p[e];
    k = e;
    for (int i = e - 1; i >= b; i--)
        if (p[i] < tempminp)
        {
            tempminp = p[i];
            k = i;
        }
    return k;
}

double money(int start, int stop, double rest)
{
    int k;

    if (stop - start == 1)
        return ((d[stop] - d[start]) / d2 - rest) * p[start];
    else
    {
        k = minp(start, stop - 1);
        if (k != start)
            return money(start, k, rest) + money(k, stop, 0);
        else if (d[stop] - d[start] <= d2 * c)
            return ((d[stop] - d[start]) / d2 - rest) * p[start];
        else
        {
            k = minp(start + 1, stop - 1);
            if (d[k] - d[start] <= d2 * c)
                return (c - rest) * p[start] + money(k, stop, c - (d[k] - d[start]) / d2);
            else
                return money(start, k, rest) + money(k, stop, 0);
        }
    }
};

int main()
{	freopen("traveller.in", "r", stdin);
    freopen("traveller.out", "w", stdout);
    cin >> d[0] >> c >> d2 >> p[0] >> n;
    d[n + 1] = d[0];
    for (int i = 1; i <= n; i++)
    {
        cin >> d[i] >> p[i];
    }
    d[0] = 0;
    for (int i = n; i >= 0; i--)
        consume[i] = (d[i + 1] - d[i]) / d2;
    for (int i = 0; i <= n; i++)
        if (consume[i] > c)
        {
            cout << "No Solution" << endl;
            exit(0);
        };
    printf("%.2lf\n", money(0, n + 1, 0));
    return 0;
}
