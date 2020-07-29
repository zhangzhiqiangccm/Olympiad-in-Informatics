#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;
int ans = 0,la,lb,L[20],R[20];
void pri(int *s,int l)
{
	for (int i = 0;i < l;i++) printf("%d",*(s+i)); printf("\n");
}
int cmp(int *a,int *b,int l)
{
	for (int i = 0;i < l;i++)
	{
		if (*(a+i) < *(b+i)) return -1;
		if (*(a+i) > *(b+i)) return 1;
	}
	return 0;
}
void count(int l)
{
	int s[20];
	for (int i = 0;i <= 9;i++)
	{
		for (int j = 0;j <= 9;j++)
		{
			if (j == i) continue;
			for (int k = 0;k < l;k++)
			{
				for (int tmp = 0;tmp < l;tmp++) s[tmp] = i;
				s[k] = j;
				if (s[0] == 0) continue;
				if (la < l&&l < lb) ans++;
				else {
					if (l == la&&(cmp(L,s,l) > 0)) continue;
					if (l == lb&&(cmp(s,R,l) > 0)) continue;
					ans++;
				}
			}
		}
	}
}
int main()
{
	freopen("odometer.in","r",stdin);
	freopen("odometer.out","w",stdout);
	char A[20],B[20];
	scanf("%s%s",&A,&B);
	la = strlen(A);
	lb = strlen(B);
	for (int i = 0;i < la;i++) L[i] = A[i] - '0';
	for (int i = 0;i < lb;i++) R[i] = B[i] - '0';
	for (int i = la;i <= lb;i++) count(i);
	printf("%d\n",ans);
	return 0;
}