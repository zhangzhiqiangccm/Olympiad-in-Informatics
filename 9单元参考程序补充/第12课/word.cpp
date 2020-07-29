#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int n, Len, ans[110];
char s[110], t[110][110];

bool check(int l, int r){
    for(int i = 1; i <= n; ++i){
        int len = strlen(t[i] + 1);
        if (len != r - l + 1) continue;
        bool fl = 1;
        for(int j = 0; j < len; ++j)
            if (s[l + j] != t[i][j + 1]) fl = 0;
        if (fl) return 1;
    }
    return 0;
}

int main(){
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);
    scanf("%s", s + 1); Len = strlen(s + 1);
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i) scanf("%s", t[i] + 1);
    for(int i = 1; i <= Len; ++i) ans[i] = 110;
    for(int i = 1; i <= Len; ++i)
        for(int j = 0; j < i; ++j)
            if (check(j + 1, i)) ans[i] = min(ans[i], ans[j] + 1);
    printf("%d\n", ans[Len]);
    return 0;
}