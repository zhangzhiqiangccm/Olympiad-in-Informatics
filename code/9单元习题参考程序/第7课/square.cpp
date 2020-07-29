#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

int b[9], h[9];
int near[20][2] = {
    {1, 3},
    {2, 5},
    {3, 6},
    {4, 7},
    {6, 8},
    {2, 3},
    {3, 4},
    {5, 6},
    {6, 7},
    {1, 2},
    {3, 5},
    {4, 6},
    {7, 8},
    {1, 4},
    {3, 7},
    {2, 6},
    {5, 8}
};

int chk() {
    for (int i = 0; i < 17; i++) if (abs(b[near[i][0]] - b[near[i][1]]) == 1) return 0;
    return 1;
}

void pri() {
    for (int i = 1; i <= 7; i++) printf("%d ", b[i]);
    printf("%d\n", b[8]);
}

void dfs(int p) {
    if (p == 9) {
        if (chk()) pri();
    } else {
        for (int i = 1; i <= 8; i++) {
            if (h[i]) continue;
            h[i] = 1;
            b[p] = i;
            dfs(p + 1);
            h[i] = 0;
        }
    }
}

int main() {
    dfs(1);
    return 0;
}
