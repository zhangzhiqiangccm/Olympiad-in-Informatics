#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

const int dx[5] = {0, -1, 0, 1, 0};
const int dy[5] = {0, 0, 1, 0, -1};

int pic[110][110];
bool bz[110][110];
int h[10010][3];
string s;
int m, n, i, j, num;

void doit(int p, int q)
{
    int i, t, w, x, y;
    num++;
    bz[p][q] = false;
    t = 1;
    w = 1;
    h[1][1] = p;
    h[1][2] = q;
    while (t <= w)
    {
        for (int i = 1; i <= 4; i++)
        {
            x = h[t][1] + dx[i];
            y = h[t][2] + dy[i];
            if ((x > 0) && (x <= m) && (y > 0) && (y <= n) && bz[x][y])
            {
                w++;
                h[w][1] = x;
                h[w][2] = y;
                bz[x][y] = false;
            }
        }
        t++;
    }
}

int main()
{	freopen("monkey.in","r",stdin);
	freopen("monkey.out","w",stdout);
    num = 0;
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        cin >> s;
        for (int j = 1; j <= n; j++)
        {
            pic[i][j] = s[j - 1] - '0';
            if (pic[i][j] == 0)
                bz[i][j] = false;
            else
                bz[i][j] = true;
        }
    }
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            if (bz[i][j])
                doit(i, j);
    cout << num << endl;
    return 0;
}
