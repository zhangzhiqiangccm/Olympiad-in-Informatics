#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	freopen("isbn.in", "r", stdin);
	freopen("isbn.out", "w", stdout);
	char ch1, ch2, ch3, ch4, ch5, ch6, ch7, ch8, ch9, ch10;
	int x, y;
	scanf("%c-%c%c%c-%c%c%c%c%c-%c", &ch1, &ch2, &ch3, &ch4, &ch5, &ch6, &ch7, &ch8, &ch9, &ch10);
	int x1 = ch1 - '0';
	int x2 = ch2 - '0';
	int x3 = ch3 - '0';
	int x4 = ch4 - '0';
	int x5 = ch5 - '0';
	int x6 = ch6 - '0';
	int x7 = ch7 - '0';
	int x8 = ch8 - '0';
	int x9 = ch9 - '0';
	x = x1 * 1 + x2 * 2 + x3 * 3 + x4 * 4 + x5 * 5 + x6 * 6 + x7 * 7 + x8 * 8 + x9 * 9;
	if(ch10 != 'X')
		y = ch10 - '0';
	else
		y=10;
	if(x % 11 == y)
		cout << "Right" << endl;
	else
		if(x % 11!= 10)
			printf("%c-%c%c%c-%c%c%c%c%c-%d\n", ch1, ch2, ch3, ch4, ch5, ch6, ch7, ch8, ch9, x % 11);
		else
			printf("%c-%c%c%c-%c%c%c%c%c-X\n", ch1, ch2, ch3, ch4, ch5, ch6, ch7, ch8, ch9);
	return 0;
}
