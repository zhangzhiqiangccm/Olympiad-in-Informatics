#include<iostream>
using namespace std;
int main(){
	int max, min, sum, count = 0;
	int tmp;
	cin >> tmp;
	if (tmp == 0) return 0;
	max = min = sum = tmp;
	count++;
	while(tmp != 0){
		cin >> tmp;
		if(tmp != 0){
			sum += tmp;
			count++;
			if(tmp > max) max = tmp;
			if(tmp < min) min = tmp;
		}
	}
	cout << max << "," << min << "," << sum / count << endl;
	return 0;
}
