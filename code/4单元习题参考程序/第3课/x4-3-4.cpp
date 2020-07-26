#include<iostream> 
#include<cstdio>
using namespace std;
int main(){
	int n,gold,silver,bronze;
	int sum_gold = 0, sum_silver = 0, sum_bronze = 0;
	cin >> n;
	for(int i = 1; i <= n; i++){
		scanf("%d %d %d", &gold, &silver, &bronze);
		sum_gold += gold;
		sum_silver += silver;
		sum_bronze += bronze;
	}
	printf("%d %d %d %d\n", sum_gold, sum_silver, sum_bronze, sum_gold + sum_silver + sum_bronze);
	return 0;
}
