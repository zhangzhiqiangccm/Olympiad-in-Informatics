#include <cstdio>
#include <algorithm>
using namespace std;
const int N = 5050;
char s[N];
int n, f[N][N];
int main(){
    freopen("palin.in", "r", stdin);
    freopen("palin.out", "w", stdout);
    scanf("%d", &n);
    scanf("%s", s + 1);
    for(int len = 1; len <= n; ++len)
        for(int i = 1; i <= n - len + 1; ++i){
            int j = i + len - 1;
            if (s[i] == s[j]) f[i][j] = f[i + 1][j - 1];
                else f[i][j] = min(f[i + 1][j], f[i][j - 1]) + 1;
        }
    printf("%d\n", f[1][n]);
    return 0;
}