#include <iostream>
#include <cstring>
#include <string>
#include <map>
#include <set>
#include <cstdio>
using namespace std;

string m[60];
int r, c, n;
set<pair<int, int> > now;
int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int main()
{
	freopen("search.in","r",stdin);
	freopen("search.out","w",stdout);
    now.clear();
    cin >> r >> c;
    for (int i = 0; i < r; i++)
        cin >> m[i];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (m[i][j] == '*')
            {
                now.insert(make_pair(i, j));
                m[i][j] = '.';
                break;
            }

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string tmp;
        cin >> tmp;
        int d;
        if (tmp == "NORTH")
            d = 0;
        else if (tmp == "SOUTH")
            d = 1;
        else if (tmp == "WEST")
            d = 2;
        else
            d = 3;

        set<pair<int, int> > pre(now);
        now.clear();
        for (set<pair<int, int> >::iterator it = pre.begin(); it != pre.end(); it++)
        {
            int x = it->first;
            int y = it->second;
            for (int nx = x + dir[d][0], ny = y + dir[d][1];; nx += dir[d][0], ny += dir[d][1])
            {
                if (nx < 0 || nx >= r || ny < 0 || ny >= c || m[nx][ny] == 'X')
                    break;
                now.insert(make_pair(nx, ny));
            }
        }
    }
    for (set<pair<int, int> >::iterator it = now.begin(); it != now.end(); it++)
    {
        int x = it->first;
        int y = it->second;

        m[x][y] = '*';
    }

    for (int i = 0; i < r; i++)
        cout << m[i] << endl;
}
