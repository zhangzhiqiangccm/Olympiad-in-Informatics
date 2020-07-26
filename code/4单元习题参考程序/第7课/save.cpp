#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int main(){
	freopen("save.in", "r", stdin);
	freopen("save.out", "w", stdout);
	int p, save = 0, cnt = 0;
	for(int i = 1; i <= 12; i ++){
		scanf("%d", &p);
		cnt = cnt + 300 - p;
		while(cnt >= 100){
			save += 100;
			cnt  -= 100;
		}
		if(cnt < 0){
			cout << - i << endl;
			return 0;
		}
	}
	cout << cnt + int(save * 1.2) << endl;	
	return 0;
}