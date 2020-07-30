#include<bits/stdc++.h>
using namespace std;
int a[10], x, y, z;

inline int Make_Number( int x )
{
	return a[x] * 100 + a[x + 1] * 10 + a[x + 2];
}

inline bool check() {
	int Number1 = Make_Number( 1 );
	int Number2 = Make_Number( 4 );
	int Number3 = Make_Number( 7 );
	return Number1 * y == Number2 * x && Number2 * z == Number3 * y; 
}

void print() {
	for ( int i = 1; i <= 8; ++i ) {
		cout << a[i];
		if ( i % 3 == 0 ) putchar( ' ' );
	}
	cout << a[9] << endl;
}

int main() {
	freopen( "per.in", "r", stdin );
	freopen( "per.out", "w", stdout ); 
	cin >> x >> y >> z;
	for ( int i = 1; i <= 9; ++i ) a[i] = i;
	do {
		if ( check() ) print();
	} while ( next_permutation( a + 1, a + 10 ) );
	return 0;
} 
