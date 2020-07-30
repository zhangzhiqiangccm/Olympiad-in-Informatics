#include<bits/stdc++.h>
using namespace std;

static const int MaxN = 400;
//the maximum length of the two numbers

inline string add( string s1,string s2 ) //the function to do the work
{
	int a[MaxN + 1], b[MaxN + 1], c[MaxN + 1]; //the array a,b are used to record the two strings
	//the array c is used to record the answer
	memset( a, 0, sizeof(a) );
	memset( b, 0, sizeof(b) );
	memset( c, 0, sizeof(c) );
	//to fill the three arrays with zero
	for ( register int i = 0; i < s1.length(); ++i ) a[i] = s1[i] - '0';
	for ( register int i = 0; i < s2.length(); ++i ) b[i] = s2[i] - '0';
	//to turn the two strings into two arrays
	reverse( a, a + s1.length() );
	reverse( b, b + s2.length() );
	int len = max( s1.length(), s2.length() );
	//to get the maximum of the two lengths of the strings
	//that might be the length of the answer
	for ( register int i = 0; i < len; ++i )
	{
		c[i] += a[i] + b[i]; //to add the number of a and b
		c[i + 1] += c[i] / 10; //if a plus b is larger than nine,the next number would plus one
		c[i] %= 10; //after the next number plus one,this one should minus ten
	}
	if ( c[len] ) ++len;
	//if the last two numbers' sum is bigger than 10,a new number should be developed
	string str = ""; //the string is to record the answer
	for ( register int i = 0; i < len; ++i )
	{
		char ch = c[i] + 48; //to turn the number into a char
		str = ch + str; //let the string plus the char
	}
	return str; //return the value of the string as the answer
}

int main()
{
	freopen( "plus.in", "r", stdin );
	freopen( "plus.out", "w", stdout);
	string s1, s2;
	getline( cin, s1 );
	getline( cin, s2 );
	//to read the two numbers as strings,you can also use cin to do the work
	s1 = add( s1, s2 ); //to cover the value of s1 with the answer
	cout << s1 << endl; //to output the answer with cout,you can also use printf to do the work
}
