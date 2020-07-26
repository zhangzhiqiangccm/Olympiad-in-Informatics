#include<iostream>
using namespace std;
int main(){
	for(int i = 10; i > 0; i--){
		if(i == 5) continue;
		cout << i << endl;
	}
	return 0;
}
