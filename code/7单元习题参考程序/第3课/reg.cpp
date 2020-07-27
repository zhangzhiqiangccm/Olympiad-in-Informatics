#include<bits/stdc++.h>
using namespace std;
struct tid{
    char type;
    union{
    	char idc[18];
    	long long qq;
    };
};
int n;
tid a[10001];

int main(){
    freopen("reg.in","r",stdin);
    freopen("reg.out","w",stdout);	
    cin >> n;
    for(int i = 0; i < n; i++){
    	cin >> a[i].type;
    	switch(a[i].type){
    		case 'i':
    			for(int j = 0; j < 18; j++) cin >> a[i].idc[j];
    			break;
			case 'q':
			     cin >> a[i].qq;	  
    	}
    }
    long long sum = 0,c = 0;
    int men = 0,women = 0;
    for(int i = 0; i < n; i++)
      if(a[i].type == 'i')
         if((a[i].idc[16]-'0') % 2) men++;
         else women++;
      else if(a[i].type == 'q'){
	          sum += a[i].qq;
	          c++;
	        }
    cout << men << " " << women << " " << sum/c << endl;
	return 0;
}
