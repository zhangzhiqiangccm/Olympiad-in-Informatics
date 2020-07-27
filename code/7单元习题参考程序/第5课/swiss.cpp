#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 200010;
struct node
{
	int id;
	int score;
	int power;
}player[maxn];

bool cmp(node a, node b)
{
	if((a.score > b.score) || ((a.score == b.score) && (a.id < b.id)))
		return true;
	return false;	
}

int main()
{
    freopen("swiss.in","r",stdin);
	freopen("swiss.out","w",stdout);
	int N, R, Q;
	cin >> N >> R >> Q;
	
	for(int i = 1; i <= 2 * N; i++)
		player[i].id = i;
	for(int i = 1; i <= 2 * N; i++)
		scanf("%d",&player[i].score);	
	for(int i = 1; i <= 2 * N; i++)
		scanf("%d",&player[i].power);
	
	while(R--)
	{
		stable_sort(player+1,player+2*N+1,cmp);
		for(int i = 1; i <= N; i++)
		{
			if(player[2 * i - 1].power > player[2 * i].power)
				player[2 * i - 1].score++;
			if(player[2 * i].power > player[2 * i - 1].power)
				player[2 * i].score++;
		}
	}
	
    stable_sort(player+1,player+2*N+1,cmp);
	cout << player[Q].id << endl;
	
	fclose(stdin); fclose(stdout);
	return 0;
}
