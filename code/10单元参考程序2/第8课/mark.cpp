#include<bits/stdc++.h>
using namespace std;
static const int MaxN = 1000;
int n,m,x;

struct student {
	int x, mark, rank;
} student_array[MaxN + 1] = {-1};

inline bool compare( student s1, student s2 ) {
	return s1.mark > s2.mark;
}

void Get_Rank() {
	int Now_Rank = 0, tag = 1;
	for ( register int i = 1; i <= n; ++i ) {
		if ( student_array[i].mark != student_array[i - 1].mark ) {
			Now_Rank += tag;
			student_array[i].rank = Now_Rank;
			tag = 1;
		}
		else student_array[i].rank = Now_Rank, ++tag;
	}
}

int main() {
	freopen( "mark.in", "r", stdin );
	freopen( "mark.out", "w", stdout );
	cin >> n >> m;
	for ( register int i = 1; i <= n; ++i )  {
		student_array[i].x = i;
		cin >> student_array[i].mark;
	}
	cin >> x;
	sort( student_array + 1, student_array + n + 1, compare );
	Get_Rank();
	for ( int i = 1; i <= m; ++i ) {
		int low = ( i - 1 ) * ( n / m ) + 1;
		int high = i * ( n / m );
		for ( register int j = 1; j <= n; ++j ) {
			if ( student_array[j].rank > high ) break;
			if ( student_array[j].rank < low ) continue;
			if ( student_array[j].x == x) {
				cout << i; putchar( '\n' ); return 0;
			}
		}
	}
	return 0;
}
