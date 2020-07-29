#include <cstdio>
#include <cstring>
typedef char String[20];
int a[4], b[4], path[4][2];
String ans[4], buf, Min = "zzzzz";
char op[4], Data[4];

void outit() {
	int i;
	for (i = 0; i < 4; i ++)
		sprintf(ans[i], "%c", Data[i]);
	for (i = 0; i < 3; i ++) {
		sprintf(buf, "(%s%c%s)", ans[path[i][0]], op[i], ans[path[i][1]]);
		strcpy(ans[path[i][0]], buf);
	}
	if (strcmp(Min, ans[path[2][0]]) > 0)
		strcpy(Min, ans[path[2][0]]);
}
void dfs(int l) {
	if (l == 3) {
		int i;
		for (i = 0; i < 4; i ++)
			if (a[i] != 0) break;
		if (i < 4 && a[i] == 24) outit();
		return;
	}
	for (int i = 0; i < 4; i ++)
		for (int j = 0; j < 4; j ++)
			if (i != j && a[i] != 0 && a[j] != 0) {
				int t1, t2;
				t1 = a[i]; t2 = a[j];
				a[i] = a[i] + a[j]; a[j] = 0;
				path[l][0] = i; path[l][1] = j; op[l] = '+';
				dfs(l + 1);
				a[i] = t1; a[j] = t2;
				
				t1 = a[i]; t2 = a[j];
				a[i] = a[i] - a[j]; a[j] = 0;
				path[l][0] = i; path[l][1] = j; op[l] = '-';
				dfs(l + 1);
				a[i] = t1; a[j] = t2;
				
				t1 = a[i]; t2 = a[j];
				a[i] = a[i] * a[j]; a[j] = 0;
				path[l][0] = i; path[l][1] = j; op[l] = '*';
				dfs(l + 1);
				a[i] = t1; a[j] = t2;
				
				t1 = a[i]; t2 = a[j];
				a[i] = a[i] & a[j]; a[j] = 0;
				path[l][0] = i; path[l][1] = j; op[l] = '&';
				dfs(l + 1);
				a[i] = t1; a[j] = t2;
				
				t1 = a[i]; t2 = a[j];
				a[i] = a[i] | a[j]; a[j] = 0;
				path[l][0] = i; path[l][1] = j; op[l] = '|';
				dfs(l + 1);
				a[i] = t1; a[j] = t2;
				
				t1 = a[i]; t2 = a[j];
				a[i] = a[i] ^ a[j]; a[j] = 0;
				path[l][0] = i; path[l][1] = j; op[l] = '^';
				dfs(l + 1);
				a[i] = t1; a[j] = t2;
				
				if (a[i] % a[j] == 0) {
					t1 = a[i]; t2 = a[j];
					a[i] = a[i] / a[j]; a[j] = 0;
					path[l][0] = i; path[l][1] = j; op[l] = '/';
					dfs(l + 1);
					a[i] = t1; a[j] = t2;
				}
			}	
}
int main() {
	char ch;

	freopen("point24.in", "r", stdin);
	freopen("point24.out", "w", stdout);
	
	memset(path, -1, sizeof(path));
	for (int i = 0; i < 4; i ++) {
		scanf("%c ", &ch);
		Data[i] = ch;
		if (ch == 'A') a[i] = 1;
		else if (ch == 'T') a[i] = 10;
		else if (ch == 'J') a[i] = 11;
		else if (ch == 'Q') a[i] = 12;
		else if (ch == 'K') a[i] = 13;
		else a[i] = ch - '0';
	}
	memcpy(b, a, sizeof(a));
	dfs(0);
	if (Min[0] == 'z') printf("Poor!\n");
	else printf("%s\n", Min);
	return 0;
}
