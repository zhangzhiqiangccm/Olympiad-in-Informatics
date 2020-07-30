#include<bits/stdc++.h>
using namespace std;

int main() {
	freopen("random.in","r",stdin);
	freopen("random.out","w",stdout);
	int n;
	scanf("%d", &n);
	set<int> s;
	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);
		s.insert(x);
	}
	printf("%d\n", s.size());
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		printf("%d ", *it);
	}
	printf("\n");
	return 0;
}