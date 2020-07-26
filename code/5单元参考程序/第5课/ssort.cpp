#include<iostream>
#include<cstdio>
using namespace std;
struct ssort {
	int num,rnum;
} a[101];

int main() {
	int k,i,j,tmp,x,y,r;
	freopen("ssort.in","r",stdin);
	freopen("ssort.out","w",stdout);
	cin >> x >> y;
	k = 0;
	for(i = x; i <= y; i++){
		r = i;
		k++;
		a[k].num = i;
		while(r > 0){
			a[k].rnum = a[k].rnum * 10 + r % 10;
			r = r / 10;
		}
	}
	for(i = 1; i < k; i++)
		for(j = i + 1; j <= k; j++)
			if(a[i].rnum > a[j].rnum){
				tmp = a[i].rnum;
				a[i].rnum = a[j].rnum;
				a[j].rnum = tmp;
				tmp = a[i].num;
				a[i].num = a[j].num;
				a[j].num = tmp;
			}
	for(i = 1; i < k; i++) cout << a[i].num << endl;
	cout << a[k].num << endl;
	return 0;
}
