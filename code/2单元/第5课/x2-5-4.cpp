#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int banana = 5, apple = 8, grape = 12;
	float average = (banana + apple + grape) / 3.0;
	cout << "average=" << average << endl;
	int money = 39;
	int t1 = money / banana;
	int left1 = money % banana;
	cout << "banana=" << t1 << " " << "left=" << left1 << endl;
	int t2 = money / apple;
	int left2 = money % apple;
	cout << "apple=" << t2 << " " << "left=" << left2 << endl;
	int t3 = money / grape;
	int left3 = money % grape;
	cout << "grape=" << t3 << " " << "left=" << left3 << endl;	
    return 0;
}