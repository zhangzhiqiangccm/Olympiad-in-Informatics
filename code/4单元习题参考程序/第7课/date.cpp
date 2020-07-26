#include<cstring>
#include<cstdio> 
#include<iostream>
using namespace std;
int main(){
	freopen("date.in", "r", stdin);
	freopen("date.out", "w", stdout);
	int x, y, ans=0;
	cin >> x >> y;
	int x1 = x / 10000;
	int x2 = y / 10000;
	for(int i = x1; i <= x2; i++){
		int x1 = i / 1000;
		int x2 = (i / 100) % 10;
		int x3 = (i / 10) % 10;
		int x4 = i % 10;	
		int month1 = x4 * 10 + x3;
		int day1 = x2 * 10 + x1;
		if(month1 == 1 || month1 == 3 || month1 == 5 || month1 == 7 || month1 == 8 || month1 == 10 || month1 == 12){
			if(day1 <= 31 && day1 >= 1) 
				if(i * 10000 + month1 * 100 + day1 <= y) ans++;
		}
		if(month1 == 4 || month1 == 6 || month1 == 9 || month1 == 11){
			if(day1 <= 30 && day1 >= 1) 
				if(i * 10000 + month1 * 100 + day1 <= y) ans++;
		}
		if(month1 == 2)
			if((i % 4 == 0 && x % 100 != 0) || i % 400 == 0){
				if(day1 <= 29 && day1 >= 1) 
					if(i * 10000 + month1 * 100 + day1 <= y) ans++;
			}
			else{
				if(day1 <= 28 && day1 >= 1) 
					if(i * 10000 + month1 * 100 + day1 <= y) ans++;
			}
	}
	cout << ans << endl;
	return 0;
}
