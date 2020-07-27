#include<bits/stdc++.h>
using namespace std;
int main(){
	int *p,*q;
	freopen("game.in","r",stdin);
	freopen("game.out","w",stdout);
	p = new(int);
	q = new(int);
	cin >> *p >> *q;
	if (*p == * q) {
		cout<<"tie"<<endl;
		return 0;
	}
	if (*p == 1 && *q==2){
		cout<<"win"<<endl;
		return 0;
	}
	if (*p == 1 && *q==3){
		cout<<"lose"<<endl;
		return 0;
	}	
	if (*p == 2 && *q==3){
		cout<<"win"<<endl;
		return 0;
	}
	if (*p == 2 && *q==1){
		cout<<"lose"<<endl;
		return 0;
	}
	if (*p == 3 && *q==1){
		cout<<"win"<<endl;
		return 0;
	}
	if (*p == 3 && *q==2){
		cout<<"lose"<<endl;
		return 0;
	}
    return 0;
}

