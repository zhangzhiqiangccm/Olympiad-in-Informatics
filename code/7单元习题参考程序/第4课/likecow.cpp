#include<bits/stdc++.h>
using namespace std;
int a[111][111],b[111][111];
int main(){
	int n,m,tot=0;
	freopen("likecow.in","r",stdin);
	freopen("likecow.out","w",stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	} 
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			cin >> b[i][j];
		}
	}
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			if (a[i][j]== b[i][j]) tot++;
		}
	}
	cout<<tot<<endl;
    return 0;
}

