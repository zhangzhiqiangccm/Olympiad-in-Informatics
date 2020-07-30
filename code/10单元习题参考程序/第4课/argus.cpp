#include<bits/stdc++.h>
using namespace std;

char str[10];

struct Task {
	int t, q, p;
	Task(){}
	Task(int t, int q, int p) { 
	this->t = t;
	this->q = q;
	this->p = p;
	}
	bool operator < (const Task& a) const {
	if (t != a.t) return t > a.t;
	return q > a.q;
	}
};
  
priority_queue<Task> Q;

int main() {
	freopen("argus.in","r",stdin);
	freopen("argus.out","w",stdout);
	int a, b;
	while (~scanf("%s", str) && str[0] != '#') {
	  scanf("%d%d", &a, &b);
	  Q.push(Task(b, a, b));
	}
	int k;
	scanf("%d", &k);
	while (k--) {
	  Task now = Q.top();
	  Q.pop();
	  printf("%d\n", now.q);
	  now.t += now.p;
	  Q.push(now);
	}
	return 0;
}
