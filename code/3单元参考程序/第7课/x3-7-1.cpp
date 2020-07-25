#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
	freopen("rectria.in", "r", stdin);
	freopen("rectria.out", "w", stdout);
	char ch;
	cin >> ch;
	if(ch == 'J'){
		int h, w, c, s;
		cin >> h >> w;
		c = (h + w) * 2;
		s = h * w;
		cout << c << ' ' << s << endl;
	}
	else{
		int x, y, z;
		cin >> x >> y >> z;
		cout << x + y + z << endl;
	}
	return 0;
}
