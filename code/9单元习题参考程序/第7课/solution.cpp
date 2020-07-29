#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
double a, b, c, d;
const double eps = 1e-10;

int sgn(double x) {
    double ans = ((((a * x) + b) * x + c) * x + d);
    if (abs(ans) < eps) return 0;
    return ans > 0 ? 1 : -1;
}

double divide(double l, double r) {
    if (abs(r - l) < 1e-4) return l;
    double mid = (l + r) / 2;
    if (sgn(mid) == 0) return mid;
    if (sgn(l) * sgn(mid) < 0) return divide(l, mid);
    else return divide(mid, r);
}

void pri(double ans) {
    static int tot = 0;
    tot++;
    printf("%.2lf", ans);
    if (tot <= 2) printf(" ");
    else puts("");
}

int main() {
	freopen("solution.in","r",stdin);
	freopen("solution.out","w",stdout);
    cin >> a >> b >> c >> d;
    for (int i = 0; i < 400; i++) {
        double l = -100 + (double) i / 2.0;
        double r = l + 0.5;
        if (sgn(l) == 0) pri(l);
        else {
            if (sgn(l) * sgn(r) < 0)
                pri(divide(l, r));
        }
    }
    if (sgn(100) == 0) pri(100);
    return 0;
}
